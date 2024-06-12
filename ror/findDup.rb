def find_duplicates(array)
  duplicates = []
  array.each do |element|
    duplicates << element if array.count(element) > 1
  end
  duplicates.uniq
end

p find_duplicates([1, 2, 4,4 ])



# method 2
require 'set'

def find_duplicates(array)
  seen = Set.new
  duplicates = Set.new

  array.each do |element|
    if seen.include?(element)
      duplicates.add(element)
    else
      seen.add(element)
    end
  end

  duplicates.to_a
end

p find_duplicates([1, 2, 4, 4]) # => [4]
