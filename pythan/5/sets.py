s = set()           
# no repetition allowed! 

s.add(3) 
s.add(612) 
s.add(2)           
# or set ={1,2} 
# print(s)
a = {12,1,2,3,4,5,612,12,12,122,122,12,12,12 }          
# no repetition allowed! 
# its without the order
# its can be used with diff didd data type
a.add(5656)
print(len(a))
a.remove(5656)
print(a.union(s))#all valuese
print(a.intersection(s))#only common values