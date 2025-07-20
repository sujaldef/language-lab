# a=str(input("enter the namew:-"))
# print(a)
# print("good morning ",a)
# print(f"good morning {a}")# this is a f string
# #####################################




letter = '''  
Dear <|Name|>, 
You are selected! 
<|Date|> 
''' 
print(letter.replace(" <|Name|>"," sujal ").replace("<|Date|>","1212"))# this is called chaining
name="sujal"
print(name.find(" "))# if there is smth then its sows any num but if not its -1



#######################
name = "Harry is a good  boy and  "

print(name.replace("  ", " "))
print(name) # Strings are immutable which means that you cannot change them by running functions on them
