t = int(input())

for i in range(t):
  [n, k, x] = map(int, input().split())
  minimum_sum = k * (k + 1) / 2
  maximum_sum = k * (2 * n - k + 1) / 2
  if minimum_sum <= x and x <= maximum_sum:
    print("YES")
  else:
    print("NO")
