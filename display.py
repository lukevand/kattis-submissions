import sys
one = """    +
    |
    |
    +
    |
    |
    +"""

six = """+---+
|    
|    
+---+
|   |
|   |
+---+"""
sep = """   
   
 o 
   
 o 
   
   """
four = """+   +
|   |
|   |
+---+
    |
    |
    +"""

seven = """+---+
    |
    |
    +
    |
    |
    +"""

two = """+---+
    |
    |
+---+
|    
|    
+---+"""

five = """+---+
|    
|    
+---+
    |
    |
+---+"""
nine = """+---+
|   |
|   |
+---+
    |
    |
+---+"""

zero = """+---+
|   |
|   |
+   +
|   |
|   |
+---+"""

three = """+---+
    |
    |
+---+
    |
    |
+---+"""

eight = """+---+
|   |
|   |
+---+
|   |
|   |
+---+"""


nums = {'0': zero, '1':one, '2':two, '3':three, '4':four, '5':five, '6':six, '7':seven, '8':eight, '9':nine, ':':sep}

time = sys.stdin.readline()
while time[0] != 'e':
    for line in zip(nums[time[0]].split('\n'), nums[time[1]].split('\n'), nums[time[2]].split('\n'), nums[time[3]].split('\n'),  nums[time[4]].split('\n')):
        s = "{:5s}  {:5s} {:} {:5s}  {:5s}".format(line[0], line[1], line[2], line[3], line[4])
        print(s)
    time = sys.stdin.readline()
    print('\n')
print('end')
