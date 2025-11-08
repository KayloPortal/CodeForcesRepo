location = {"x": -1, "y": -1}
for i in range(5):
  line = input()
  j = 0
  if location["x"] != -1: continue
  for char in line.replace(" ", ""):
    if char == "1":
      location["x"] = i + 1
      location["y"] = j + 1
      break
    j += 1
print(abs(location["x"] - 3) + abs(location["y"] - 3))