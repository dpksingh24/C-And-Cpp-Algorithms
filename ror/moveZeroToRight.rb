def move_zero_to_right(arr)
  non_zero_index = 0
  arr.each_with_index do |num, i|
    if num != 0
      arr[i], arr[non_zero_index] = arr[non_zero_index], arr[i]
      non_zero_index += 1
    end
  end
  arr
end

arr = [0,1,0,3,12]
result = move_zero_to_right(arr)
p result.inspect
