# Create a class “Programmer” for storing information of few programmers 
# working at Microsoft. 
class programmer:
    def __init__(self,name,id,working_exp): 
        self.name= name 
        self.id = id 
        self.working_exp =working_exp


sujal=programmer("sujal_koshta",2300873,"5yerars")
print(sujal.name  ,sujal.id ,sujal.working_exp)
        
