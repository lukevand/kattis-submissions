import datetime

ss = "JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC"
tt = "MON TUE WED THU FRI SAT SUN"
weekdays = {}
months = {}
for s, i in enumerate(tt.strip().split()):
    weekdays[s] = i
for s, i in enumerate(ss.strip().split()):
    months[s] = i

current_date = input().strip().split()
weekday = input().strip()

datetime.date(2000, months[current_date[0]-1], current_date[1])
start = datetime.date(2000, 1, 1)
leapYearDone = False
normalYearDone = False
if start.weekday() == tt[weekday]:
    if start.is
