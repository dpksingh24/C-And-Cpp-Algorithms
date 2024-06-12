def binarySearch(arr, key)
  size = arr.length
  low = 0
  high = arr.size - 1
  p arr
  while(low <= high)
    mid = (low + high) / 2
    if arr[mid] == key
      return mid
    elsif arr[mid] > key
      return high = mid - 1
    else
      low = mid + 1
    end
  end
  return -1
end


arr = [5,10,1,12,3, 66, 0, 2].sort
key = 5
p binarySearch(arr, key)



# 3. **Initialization**:
#    - We start with the entire array as the search interval.
#    - Initialize two pointers:
#      - `low` (start) pointing to the first element (index 0).
#      - `high` (end) pointing to the last element (index `size - 1`).

# 4. **Iteration**:
#    - While `low` is less than or equal to `high`, repeat the following steps:
#      - Calculate the **midpoint**:
#        - `mid = (low + high) / 2`.
#      - Compare `array[mid]` with the target key:
#        - If `array[mid]` equals the key, we found the target element, so return `mid`.
#        - If `array[mid]` is greater than the key, update `high = mid - 1` (search the left half).
#        - Otherwise, update `low = mid + 1` (search the right half).

# 5. **Termination**:
#    - If the loop ends without finding the key, return -1 (key not found).

# 6. **Time Complexity**:
#    - The number of iterations depends on the size of the array.
#    - Since we halve the search space in each step, the maximum number of iterations is **log₂(n)**.
#    - Therefore, the time complexity of binary search is **O(log n)**.

# 7. **Example**:
#    - Let'low take the array `[1, 2, 3, 5, 10]` and search for the key `5`.
#    - Initial `low = 0`, `high = 4`.
#    - Iterations:
#      - Midpoint: `mid = 2`, `array[mid] = 3` (less than 5), update `low = mid + 1`.
#      - Midpoint: `mid = 3`, `array[mid] = 5` (found), return `mid = 3`.

# 8. **Conclusion**:
#    - Binary search efficiently narrows down the search space, making it a powerful tool for finding elements in sorted arrays.
