# class Number:
#     def __init__(self, n):
#         self.n = n

#     def __add__(self, num):
#         return self.n + num.n
# # p1+p2 # p1.__add__(p2) 
# # p1-p2 # p1.__sub__(p2) 
# # p1*p2 # p1.__mul__(p2) 
# # p1/p2 # p1.__truediv__(p2) 
# # p1//p2 # p1.__floordiv__(p2)

# n = Number(1)
# m = Number(2)
# z = Number(3)

# print(n +  z)









# @@@@@@@@@@@@@@@@@@@@@@@@@@1111111111111111111111111111111
class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Point(self.x + other.x, self.y + other.y)

    def __str__(self):
        return f"({self.x}, {self.y})"

# Creating two Point objects
p1 = Point(1, 2)
p2 = Point(3, 4)

# Adding two Point objects using the overloaded + operator
p3 = p1 + p2

print(p3)  # Output: (4, 6)

# !@#@$########################## 
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __mul__(self, other):
        return self.x * other.x + self.y * other.y

    def __str__(self):
        return f"Vector({self.x}, {self.y})"

# Creating two Vector objects
v1 = Vector(1, 2)
v2 = Vector(3, 4)

# Performing dot product using the overloaded * operator
dot_product = v1 * v2

print(dot_product)  # Output: 11

