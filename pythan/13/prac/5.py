from functools import reduce
def greatest(a,b):
    if(a>b):
        return a
    return b
l=[23,45,56,223,567,342,34,346,578,34,234]
print(reduce(greatest,l))


# The reduce function takes two main arguments: a function and an iterable.
# The function should take two arguments. reduce applies this function cumulatively to the items of the iterable, from left to right, so as to reduce the iterable to a single value.