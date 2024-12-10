import random

def check_ladder(points):
    if points==1:
        print("yaah!Ladder")
        return 38
    elif points==4:
        print("yaah!Ladder")
        return 14
    elif points==9:
        print("yaah!Ladder")
        return 31
    elif points==21:
        print("yaah!Ladder")
        return 42
    elif points==28:
        print("yaah!Ladder")
        return 84
    elif points==51:
        print("yaah!Ladder")
        return 67
    elif points==72:
        print("yaah!Ladder")
        return 91
    elif points==80:
        print("yaah!Ladder")
        return 99
    else:
        return points

def check_snake(points):
    if points==17:
        print("Oops!Snake bite")
        return 7
    elif points==54:
        print("Oops!Snake bite")
        return 34
    elif points==64:
        print("Oops!Snake bite")
        return 60
    elif points==62:
        print("Oops!Snake bite")
        return 19
    elif points==87:
        print("Oops!Snake bite")
        return 36
    elif points==93:
        print("Oops!Snake bite")
        return 73
    elif points==95:
        print("Oops!Snake bite")
        return 75
    elif points==98:
        print("Oops!Snake bite")
        return 79
    
    else:
        return points

def reached_end(points):
    if points==end:
        return True
    else:
        return False


def main():
    player1=input("enter player 1 name")
    player2=input("enter player 2 name")

    score1=0
    score2=0

    global end #global keyword is used so that the value of end could be used in another function
    end=100

    turn=0
    while True:
        #checks the turn like if turn is 0 then player1 will get the chance else player2 will the chance
        if turn%2==0 :
            print(player1,"score",score1)
            choice=int(input("enter 1 to continue or enter 0 to exit"))
            #let the player make the choice if he/she wants to continue the game or not
            if choice==0:
                print(player1,"score:",score1)
                print(player2,"score:",score2)
                print("Thankyou for playing")
                break
            
            dice=random.randint(1,6)
            print("Dice Showed:",dice)

            score1=score1+dice

            score1=check_ladder(score1)

            score1=check_snake(score1)

            #check if the score exceeds 100 or not
            if score1>end:
                score1=end
            print(player1,"score:",score1)
            if reached_end(score1):
                print(player1,"has won the match")
                break

        
        else:

            choice=int(input("enter 1 to continue or enter 0 to exit"))
            #let the player make the choice if he/she wants to continue the game or not
            if choice==0:
                print(player1,"score:",score1)
                print(player2,"score:",score2)
                print("Thankyou for playing")
                break
            
            dice=random.randint(1,6)
            print("Dice Showed:",dice)

            score2=score2+dice

            score2=check_ladder(score2)

            score2=check_snake(score2)

            #check if the score exceeds 100 or not
            if score2>end:
                score2=end
            print(player2,"score:",score2)
            if reached_end(score2):
                print(player2,"has won the match")
                break
        turn=turn+1
#calling the function
main()

    

        




