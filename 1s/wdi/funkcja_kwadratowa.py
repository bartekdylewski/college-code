from math import sqrt
# zadanie 4

# a * x**2 + b * x + c = 0
# delta = b**2 - 4 * a * c
# delta < 0 => brak pierwiastków
# delta = 0 => x0 = -b / (2 * a)
# delta > 0 => x1 = (-b - sqrt(delta)) / 2 * a
#              x2 = (-b + sqrt(delta)) / 2 * a

a = int(input("Podaj czynnik a: "))
b = int(input("Podaj czynnik b: "))
c = int(input("Podaj czynnik c: "))

delta = b**2 - 4 * a * c

print(f"Delta: {delta}")
try:
    if(delta < 0):
        out = f"Brak pierwiastków, delta < 0"
    elif(delta == 0):
        x0 = -b / (2 * a)
        out = f"x0 = {x0}"
    elif(delta > 0):
        x1 = (-b - sqrt(delta)) / (2 * a)
        x2 = (-b + sqrt(delta)) / (2 * a)
        out = f"x1 = {x1}\nx2 = {x2}"
except ZeroDivisionError:
    out = "Nastąpiło dzielenie przez 0"
    
print(out)
