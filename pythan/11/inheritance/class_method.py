#by doing the class method we can call the class attrib warna the attribute which is declared after will be in priority

class Employee:
    a = 1
    
    @classmethod
    def show(cls):
        print(f"The class attribute of a is {cls.a}")

e = Employee()
e.a = 45

e.show()