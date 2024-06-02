def reverse_array(arr)
    left = 0
    right = arr.length - 1
  
    while left < right
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    end
    arr
end
  
  original_array = [1, 2, 3, 4, 5]
  reversed_array = reverse_array(original_array)
  puts reversed_array.inspect
  