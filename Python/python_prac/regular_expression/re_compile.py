import re
pattern = re.compile('This')
string = "Search this inside of this text"
a=pattern.search(string)
b=pattern.findall(string)
print(a)
print(b)