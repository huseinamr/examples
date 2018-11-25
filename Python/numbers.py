"""Simple calculations.

Reference:
https://docs.python.org/3.7/tutorial/introduction.html#numbers
"""

print(2 + 2)
# 4

print(50 - 5*6)
# 20

print((50 - 5*6) / 4)
# 5.0

print(17 / 3)  # classic division returns a float
# 5.666666666666667

print(17 // 3)  # floor division discards the fractional part
# 5

print(17 % 3)  # the % operator returns the remainder (modulo) of the division
# 2

print(5 * 3 + 2)  # result * divisor + remainder
# 17

print(5 ** 2)  # 5 squared
# 25

print(2 ** 7)  # 2 to the power of 7
# 128

width = 20  # You can't print variable assignment
height = 5 * 9
print(width * height)
# 900

print(4 * 3.75 - 1)  # mixed type operations convert integer operands to floats
# 14.0