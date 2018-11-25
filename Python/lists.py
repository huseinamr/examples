"""List manipulation.

Reference:
https://docs.python.org/3.7/tutorial/introduction.html#lists
"""

squares = [1, 4, 9, 16, 25]
print(squares)
# [1, 4, 9, 16, 25]

print(squares[0])  # indexing returns the item
# 1

print(squares[-1])
# 25

print(squares[-3:])  # slicing returns a new list
# [9, 16, 25]

print(squares[:])  # returns a new (shallow) copy of the list
# [1, 4, 9, 16, 25]

print(squares + [36, 49, 64, 81, 100])  # concatenate two lists
# [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

# lists are mutable
cubes = [1, 8, 27, 65, 125]  # something's wrong here
cubes[3] = 64  # the cube of 4 is 64, not 65!
print(cubes)
# [1, 8, 27, 64, 125]

cubes.append(216)
cubes.append(7 ** 3)
print(cubes)
# [1, 8, 27, 64, 125, 216, 343]

letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
print(letters)
# ['a', 'b', 'c', 'd', 'e', 'f', 'g']

letters[2:5] = ['C', 'D', 'E']
print(letters)
# ['a', 'b', 'C', 'D', 'E', 'f', 'g']

letters[:] = []
print(letters)
# []

letters = ['a', 'b', 'c', 'd']
print(len(letters))
# 4

a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]
print(x)
# [['a', 'b', 'c'], [1, 2, 3]]

print(x[0])
# ['a', 'b', 'c']

print(x[0][1])
# 'b'