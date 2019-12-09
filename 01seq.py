def numInv(s):
    idx = [i for i, el in enumerate(s) if el == '0']
    return sum(x-y for x,y in zip(idx, range(len(s))))

print(numInv('11100'))

