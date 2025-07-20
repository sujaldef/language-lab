# Write a program to print multiplication table of a given number using for loop. 
# num=4
# i=1
# print(i)
# while i<=10:
#     b=f"{num}*{i}={num*i}"
#     print(b)
#     i=i+1

# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# Write a program to greet all the person names stored in a list ‘l’ and which starts 
# with S. 
# l = ["Harry", "Soham", "Sachin", "Rahul"] 
# l = ["Harry", "Soham", "Sachin", "Rahul"] 
# for i in l:
#     if(i.startswith("S")):
#         print(f"hello {i}")


# 11111111111111111111111111111111111111111111111111111
# #  Attempt problem 1 using for loop. 
# num=int(input("enter the number u want the table of :-"))
# for i in range(1,11):
#      b=f"{num}*{i}={num*i}"
#      print(b)


# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     
#  Write a program to find whether a given number is prime or not. 
# num=int(input("enter the number  :-"))

# for i in range(2,num):
#     if(num%i==0):
#         print("num is not prime")
#         break
#     else:
#         print("num is prime")

# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#  a pattern
n = int(input("Enter the number: "))
for i in range(1, n+1):
    print(" "*(n-i), end="")
    print("*"* (2*i-1), end="")
    print("")
# for i in range(1, n+1):
#     print(" "*(n-i), end="")
#     print("*"* (2*i-1), end="")
#     print("")

