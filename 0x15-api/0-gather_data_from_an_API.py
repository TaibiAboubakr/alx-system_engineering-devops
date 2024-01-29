#!/usr/bin/python3
"""Python script that, using this REST API, for a given employee ID,
returns information about his/her 'TODO' list progress."""

import requests
import sys
"""  Importing modules """


def get_employee_todo_progress(employee_id):
    """ get_employee_todo_progress """

    url1 = f"https://jsonplaceholder.typicode.com/users/{employee_id}"
    user_response = requests.get(f'{url1}')
    url2 = f'https://jsonplaceholder.typicode.com/todos?userId={employee_id}'
    todos_response = requests.get(f'{url2}')

    if user_response.status_code != 200 or todos_response.status_code != 200:
        print(f"Failed to retrieve data. Check if the employee ID .")
        return

    user_data = user_response.json()
    todos_data = todos_response.json()

    empName = user_data['name']
    T_Tasks = len(todos_data)
    cmpTasks = sum(todo['completed'] for todo in todos_data)

    print(f"Employee {empName} is done with tasks({cmpTasks}/{T_Tasks}):")

    for todo in todos_data:
        if todo['completed']:
            print(f"\t {todo['title']}")


if __name__ == "__main__":
    if (len(sys.argv) == 1 or len(sys.argv) > 2):
        print(f"USAGE: ./{sys.argv[0]} employee_id")
        exit(1)
    employee_id = sys.argv[1]

    try:
        employee_id = int(employee_id)
        get_employee_todo_progress(employee_id)
    except ValueError:
        print("Please enter a valid integer for the employee ID.")
