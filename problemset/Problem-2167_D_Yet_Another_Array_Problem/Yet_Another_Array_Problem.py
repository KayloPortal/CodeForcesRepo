from math import gcd

t = int(input())
for i in range(t):
  n = int(input())
  numbers = list(map(int, input().split()))
  toContinue = True
  for x in range(2, 10**18 + 1):
    for num in numbers:
      if gcd(num, x) == 1:
        print(x)
        toContinue = False
        break
    if not toContinue: break
