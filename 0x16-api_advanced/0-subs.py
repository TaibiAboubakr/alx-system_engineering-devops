#!/usr/bin/python3
""" returns the number of subscribers """
import requests


def number_of_subscribers(subreddit):
    """ function that queries the Reddit API and
    returns the number of subscribers """
    if type(subreddit) is not str or subreddit is None:
        return 0
    apiurl = f"http://www.reddit.com/r/{subreddit}/about.json"
    re = requests.get(apiurl,
                      headers={'User-Agent': '0x16-api_advanced:project:v1.0.0\
                           (by /u/taibi_aboubakr)'}).json()
    num_subscribers = re.get("data", {}).get("subscribers", 0)
    return num_subscribers
