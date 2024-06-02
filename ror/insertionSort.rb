def insertionSort(arr)
  size = arr.size
  for i in 0...(size) # Loop from 0 to size-1
    current = arr[i]  # Select the current element to be placed
    j = i - 1         # Start comparing with the previous element

    # Detailed comments with dry run
    puts "Iteration #{i}:"
    puts "  Current element: #{current}"
    puts "  Initial array state: #{arr.inspect}"

    while j >= 0 && arr[j] > current # Ensure we are within bounds and the current element is less than the compared element
      puts "    Comparing and shifting: #{arr[j]} > #{current}"
      arr[j + 1] = arr[j] # Shift the compared element one position to the right
      j -= 1              # Move to the previous element
      puts "    Array state after shift: #{arr.inspect}"
    end

    arr[j + 1] = current  # Place the current element in its correct position
    puts "  Placing element #{current} at position #{j + 1}"
    puts "  Array state after placement: #{arr.inspect}"
  end
  arr
end

arr = [5, 3, 1]
sorted_arr = insertionSort(arr)
puts "Final sorted array: #{sorted_arr.inspect}"
