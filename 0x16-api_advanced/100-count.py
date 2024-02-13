#!/usr/bin/python3
""" Imporinting modules """
import praw


reddit = praw.Reddit(client_id='oI_HBBvaECtCtfvfyGWa9A',
                     client_secret='9RqlwHup5RHUsnxPGm9nnXKFLejcZQ',
                     user_agent='api_advanced by /u aboubakrtaibi')


def count_words(subreddit, word_list, after=None, word_count={}):
    """ count words """
    if not word_list:
        return

    if after is None:
        submissions = reddit.subreddit(subreddit).hot(limit=100)
    else:
        submissions = reddit.subreddit(subreddit).hot(limit=100,
                                                      params={'after': after})

    for submission in submissions:
        title_words = submission.title.lower().split()
        for word in word_list:
            if word.lower() in title_words:
                word_count[word.lower()] = word_count.get(word.lower(), 0)
                + title_words.count(word.lower())

    if submissions._next is not None:
        count_words(subreddit, word_list, after=submissions._next,
                    word_count=word_count)
    else:
        sorted_counts = sorted(word_count.items(), key=lambda x: (-x[1], x[0]))

        for word, count in sorted_counts:
            print(f"{word}: {count}")
