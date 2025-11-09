n = int(input())

def func(string):
  length = len(string)
  if length % 4 == 0 or length % 4 == 1:
    return "NET"
  return "DA"

for i in range(n):
  print(func(input()))