[n, m, a] = map(int, input().split())
area = n * m
if area % a == 0:
  print(area / a)
else:
  print((area // a) + 1)