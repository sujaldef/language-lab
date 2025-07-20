class calc:
     
     def __init__(self,n) :
            self.n=n


     def sqrt(self):
        print(f"the srq of the given number is {self.n*self.n}")

     def sqrroot(self):
        print(f"the srq root of the given number is {self.n**1/2}")

     def cube(self):
        print(f"the srq root of the given number is {self.n*self.n*self.n}")
    
     @staticmethod
     def greet():
         print("heloo user u can now calculate")


a = calc(4)
a.greet()
a.cube()
a.sqrroot()
a.sqrt()




# class Calculator:
#     def __init__(self, n):
#         self.n = n 
    
#     def square(self):
#         print(f"The square is {self.n*self.n}")

#     def cube(self):
#         print(f"The cube is {self.n*self.n*self.n}")

#     def squareroot(self):
#         print(f"The squareroot is {self.n**1/2}")

# a = Calculator(4)
# a.square()
# a.cube()
# a.squareroot()