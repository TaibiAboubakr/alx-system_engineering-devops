#!/usr/bin/python3
"""  function that queries the Reddit API
and returns the number of subscribers """
import requests


def number_of_subscribers(subreddit):
    """ function that queries the Reddit API and
    returns the number of subscribers """
    apiurl = f"https://www.reddit.com/r/{subreddit}/about.json"
    try:
        response = requests.get(apiurl)
        content = response.json()

        if 'data' in content and 'subscribers' in content['data']:
            return content['data']['subscribers']
        else:
            return
    except Exception as e:
        return 0
