# 4. Write a program to display a/b where a and b are integers. If b=0, display infinite by 
# handling the ‘ZeroDivisionError’. 
a=int(input("enter the 1 st value"))
b=int(input("enter the 2 st value"))

try:
    print(a/b)

except ZeroDivisionError as e:
    print("python does not allow us to divide with 0")
