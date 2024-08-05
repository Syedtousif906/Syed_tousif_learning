import re
string = "Search inside of this text"
a=re.search('this',string)
print(a.span())