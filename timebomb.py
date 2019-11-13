import sys

nums = {
            "**** ** ** ****": 0,
            "  *  *  *  *  *": 1,
            "***  *****  ***": 2,
            "***  ****  ****": 3,
            "* ** ****  *  *": 4,
            "****  ***  ****": 5,
            "****  **** ****": 6,
            "***  *  *  *  *": 7,
            "**** ***** ****": 8,
            "**** ****  ****": 9
            }

lines = sys.stdin.readlines()

total = 0

seen = False
for i in range(len(lines[0])//4):
    n = [t[i*4:i*4+3] for t in lines]
    digit = ''.join(n)
    if digit in nums:
        total *= 10
        total += nums[digit]
        seen = True
    else:
        break

print("BEER!!" if seen and total % 6 == 0 else "BOOM!!")
