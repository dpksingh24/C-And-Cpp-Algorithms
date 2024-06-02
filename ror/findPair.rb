def findPair(numbers,target)
    pairs = []
    seen = {}
        numbers.each do | num |
        comp = target - num # 9-2 = 7, 9-7=2, 9-4=5, 9-5=4, 9-6=3, 9-3=6
        if seen[comp]
            pairs << [num, comp] # [[7, 2], [5, 4]]
        end
        seen[num] = true # seen= { 2 => True, 7=>true, 4=>true, 3=>true}
        end
        pairs
end

numbers = [2, 7, 4, 5, 6, 3, 1]
target = 9
result = findPair(numbers, target)

result.each { |pair| puts "#{pair[0]} + #{pair[1]} = #{target}" }
    