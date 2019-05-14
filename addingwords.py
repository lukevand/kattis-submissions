from sys import stdin

line = stdin.readline()
words2num = {}
num2words = {}
while line:
    words = line.split()
    if words[0] == "def":
        if words[1] in words2num:
            num = words2num[words[1]]
            del num2words[num]
        words2num[words[1]] = int(words[2])
        num2words[int(words[2])] = words[1]
    elif words[0] == "clear":
        words2num.clear()
        num2words.clear()
    else:
        if False in [words[i] in words2num for i in range(1, len(words), 2)]:
            print(' '.join(words[1:]), "unknown")
        else:
            wordsum = words2num[words[1]]
            for i in range(3, len(words), 2):
                if words[i-1] == '-':
                    wordsum -= words2num[words[i]]
                else:
                    wordsum += words2num[words[i]]
            re = ""
            if wordsum in num2words:
                re = num2words[wordsum]
            else:
                re = "unknown"
            print(' '.join(words[1:]), re)

    line = stdin.readline()


