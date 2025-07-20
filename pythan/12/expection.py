try:
    a = int(input("Hey, Enter a number: "))
    print(a)

except ValueError as v:
    print("Heyyyy")
    print(v)
    
except Exception as e:
    print(e) 

print("Thank You")
# see ismai prg crash nai hoga and we want to run the prg ev en if the user set smth werg like int value in the name we will show him from this expception code that enter the str and int is not valid $$$$$$$$$$$$$$$$$ also if prg crashes in the beggingin it will not run any further