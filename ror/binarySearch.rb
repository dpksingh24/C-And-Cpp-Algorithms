def binarySearch(arr, key)
  size = arr.length
  s = 0
  e = size

  while(s <= e)
    mid = (s + e) / 2
    if arr[mid] == key
      return mid
    elsif arr[mid] > key
      return e = mid - 1
    else
      s = mid + 1
    end
  end
  return -1
end


arr = [5,10,1,2,3]
key = 1
p binarySearch(arr, key)
