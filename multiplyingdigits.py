import functools
import operator

print([functools.reduce(operator.mul, map(int, [x for x in str(y)])) for y in range(1000)])

