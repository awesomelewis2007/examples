# read_file.py
# This program reads the contents of a file named "input.txt" and prints them to the console.
# Github: https://www.github.com/lewisevans2007/examples
# Licence: GNU General Public License v3.0
# By: Lewis Evans

with open("input.txt", "r") as file:
    contents = file.read()
    print(contents)
