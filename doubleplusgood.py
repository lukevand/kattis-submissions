from sys import stdin

def recur(s, seen, re):
    print(s, seen, re)
    if len(s)==0:
        re.append(seen)
        return ""
    lastchar = s.pop()
    seen.append(lastchar)
    first = lastchar + recur(s, seen, re)
    seen.pop()
    second = str(lastchar) + recur(s, seen, re)


line = stdin.readline().strip().split('+')

recur(line, [], [])
