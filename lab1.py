import math
from math import cos,log
a = int(input("Enter a: "))
x = int(input("Enter x: "))

G = 9 * (7 *(a**2) - 19 * a* x + 10 * (x * 2)) / (25 *(a * 2) + 30 * a * x + 9 * (x * 2))

print ("A = {}, X = {}, Result:= {}". format(a, x, G))

a = int(input("Enter a: "))
x = int(input("Enter x: "))

F = cos(9 * (a**2) - 13 * a *x - 10 *(x**2))

print ("A = {}, X = {}, Result:= {}". format(a, x, F))

a = int(input("Enter a: "))
x = int(input("Enter x: "))

Y = log(-80 * (a**2) - 46 *a * x + 21 * (x**2) + 1)/log (10)

print ("A = {}, X = {}, Result:= {}". format(a, x, Y))
