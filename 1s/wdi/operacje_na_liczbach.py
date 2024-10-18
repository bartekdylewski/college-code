# zadanie 3

number = int(input("Podaj liczbę w zakresie od 0 do 999 "))

if(0 <= number <= 999):
    
    singles = number % 10
    tens = number % 100
    hundreds = number % 1000
    
    hundreds -= tens
    tens -= singles
    
    tens /= 10
    hundreds /= 100
    
    singles = int(singles)
    tens = int(tens)
    hundreds = int(hundreds)
    print(f"setki: {hundreds}  dziesiątki: {tens}  jedności:  {singles}")
    print(f"Suma cyfr tej liczby wynosi: {hundreds+tens+singles}")
    
else:
    print("Twoja liczba nie należy do zakresu (0-999)")
