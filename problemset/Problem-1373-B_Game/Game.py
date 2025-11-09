n = int(input())

def func(string) -> bool:
  length = len(string)
  if length % 4 != 0 or length % 4 == 1:
    return "DA"
  return "NET"

for i in range(n):
  print(func(input()))