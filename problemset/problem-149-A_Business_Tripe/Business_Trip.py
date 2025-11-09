k = int(input())
nums = []
for i in range(12):
  num = int(input)
  nums.append(num)
nums.sort()
count = 0
my_sum = 0
for num in nums:
  my_sum += num
  count += 1
  if my_sum >= k:
    break
  