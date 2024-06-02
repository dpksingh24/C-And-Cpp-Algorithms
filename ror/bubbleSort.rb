def bubbleSort(arr)
  size = arr.size
  for i in 0...(size - 1)
    for j in 0...(size - i - 1)
      if arr[j] > arr[j + 1]
        temp = arr[j]
        arr[j] = arr[j + 1]
        arr[j + 1] = temp
      end
    end
  end
  arr
end

arr = [5, 3, 1]
sorted_arr = bubbleSort(arr)
puts sorted_arr.inspect
