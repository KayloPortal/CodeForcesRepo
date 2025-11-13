[n, m, a] = map(int, input().split())
area = n * m
tile = a**2
if n % a == 0:
  n /= a
else:
  n = n//a + 1
if m % a == 0:
  m /= a
else:
  m = m//a + 1
print(n * m)