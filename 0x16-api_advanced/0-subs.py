#!/usr/bin/python3
"""  function that queries the Reddit API
and returns the number of subscribers """
import requests


def number_of_subscribers(subreddit):
    """ function that queries the Reddit API and
    returns the number of subscribers """
    apiurl = f"https://www.reddit.com/r/{subreddit}/about.json"
    re = requests.get(apiurl,
                      headers={'User-Agent': '0x16-api_advanced:project:v1.0.0\
                           (by /u/taibi_aboubakr)'}).json()
    return (re.get("data", {}).get("subscribers", 0))
