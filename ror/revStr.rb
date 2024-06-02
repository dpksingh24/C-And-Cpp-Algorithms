def reverse_string(str)
    reversed_str = ""
    str.each_char do |char|
      reversed_str = char + reversed_str
    end
    reversed_str
  end
  
  original_string = "Hello, world!"
  reversed_string = reverse_string(original_string)
  puts reversed_string
  