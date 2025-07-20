# 5. Store the multiplication tables generated in problem 3 in a file named Tables.txt.
n=int(input("enter a number for a tablee"))
table=[n*i for i in range(1,11)]
with open("Tables.txt","a") as f: 
    f.write(f"the table of {n} is:={str(table)}\n")
   
    
 