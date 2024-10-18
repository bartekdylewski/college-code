# zadanie 1
# 0Papier 2kamien 1nozyce:
def kamien_papier_nozyce():

    player1 = int(input("Gracz 1: Wybierz: \n 0 - papier \n 1 - nożyce \n 2 - kamień \n"))
    player2 = int(input("Gracz 2: Wybierz: \n 0 - papier \n 1 - nożyce \n 2 - kamień \n"))

    # sprawdzenie kto wygrał
    def winner(player1, player2):
        if (player1 == 0 and player2 == 2) or (player1 == 2 and player2 == 1) or (player1 == 1 and player2 == 0):
            return player1
        elif (player2 == 0 and player1 == 2) or (player2 == 2 and player1 == 1) or (player2 == 1 and player1 == 0):
            return player2
    
    # sprawdzenie złych wartości
    if player1 not in [0, 1, 2] or player2 not in [0, 1, 2]:
        print("Wybierz poprawną wartość")
        return
    
    
    # wyświetlenie wyniku
    if player1 == player2:
        print("Remis")
    elif winner(player1, player2) == player1:
        print("Gracz 1 wygrywa")
    elif winner(player1, player2) == player2:
        print("Gracz 2 wygrywa")

kamien_papier_nozyce()