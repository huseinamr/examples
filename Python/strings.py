"""String manipulation.

Reference:
https://docs.python.org/3.7/tutorial/introduction.html#strings
"""

print('spam eggs')  # single quotes
# spam eggs

print('doesn\'t')  # use \' to escape the single quote...
# doesn't

print("doesn't")  #...or use double quotes instead
# doesn't

print('"Yes," they said.')
# "Yes," they said.

print("\"Yes,\" they said.")
# "Yes," they said.

print('First line.\nSecond line.')  # \n means newline
# First line.
# Second line.

print('C:\some\name')  # here \n means newline!
# C:\some
# ame

print(r'C:\some\name')  # print raw string
# C:\some\name

# string literal spanning multiple lines
# note the backslash at the beginning of the string
print("""\
Usage: thingy [OPTIONS]
     -h                        Display this usage message
     -H hostname               Hostname to connect to
""")
# Usage: thingy [OPTIONS]
#      -h                        Display this usage message
#      -H hostname               Hostname to connect to
#

print(3 * 'un' + 'ium')  # 3 times 'un', followed by 'ium'
# unununium

# two or more string literals next to each other are automatically concatenated
print('Py' 'thon')
# Python

print('Put several string within parentheses '
      'to have them joined together.')
# Put several string within parentheses to have them joined together

# if you want to concatenate variables or a variable and a literal, use +
prefix = 'Py'
print(prefix + 'thon')
# Python

word = 'Python'
print(word[0])  # character in position 0
# P

print(word[5])  # character in position 5
# n

print(word[-1])  # last character
# n

print(word[-2])  # second-last character
# o

print(word[2:5])  # characters from position 2 (included) to 5 (excluded)
# tho

print(word[:2] + word[2:])  # s[:i] + s[i:] is always equal to s
# Python

print(word[:2])  # character from the beginning to position 2 (excluded)
# Py

print(word[-2:])  # characters from the second-last (included) to the end
# on

# python strings are immutable
# word[0] = 'J'
# TypeError: 'str' object does not support item assignment

# if you need a different string, you should create a new one
print('J' + word[1:])
# Jython

s = 'supercalifragilisticexpialidocious'
print(len(s))  # returns the length of s
# 34