def main():
    try:
        a = int(input("Hey, Enter a number: "))
        print(a)
        return

        
    except Exception as e:
        print(e) 
        return


    finally:
        print("Hey I am inside of finally")
        # the work of finally in underrstand in fnt when the statement runs and it returns aa value then it should leave the fnt but hrer in finally the finalllt will run ALWAYS 


main()