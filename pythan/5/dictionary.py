a = { 
"key": "value", 
"harry": "code", 
"marks": "100", 
"list": [1, 2, 9] 
} 
# keys same nai honi chahiye
print(a["key"])  # Output: "value" 
print(a["list"])  # Output: [1, 2, 9]
a.update({"harry":"90","sujal":"99"})
print(a.keys())
print(a.items())
print(a.get("key"))