n = int(input())

def func(string):
  isAliceTurn = True
  while(len(string) > 1):
    for i in range(len(string) - 1):
      if string[i] != string[i+1]:
        isAliceTurn = not isAliceTurn
        if len(string) == 2:
          string = ""
          break
        string = string[0:i] + string[i+2:]
        break
    else:
      break
      
  if isAliceTurn:
    return "NET"
  else:
    return "DA"

for i in range(n):
  print(func(input()))