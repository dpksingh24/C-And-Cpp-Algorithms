def find_duplicates(array)
  duplicates = []
  array.each do |element|
    duplicates << element if array.count(element) > 1
  end
  duplicates.uniq
end

p find_duplicates([1, 2, 4,4 ])
