k = int(input())
if k == 0:
  print(0)
else:
  nums = list(map(int, input().split()))
  nums.sort(reverse=True)
  count = 0
  my_sum = 0
  for num in nums:
    my_sum += num
    count += 1
    if my_sum >= k:
      break
  print(count)