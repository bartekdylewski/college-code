# zadanie 2
x = float(input("Podaj wartość x: "))
y = float(input("Podaj wartość y: "))
z = float(input("Podaj wartość z: "))

# sprawdzamy czy wszystkie liczby są na pewno dodatnie
if x>=0 and y>=0 and z>=0:
    max = max(x, y, z)
    print(f"Maksymalna wartość z tych liczb to: {max}")
else:
    print("Podane liczby nie są dodatnie.")