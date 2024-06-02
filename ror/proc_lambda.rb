new_line = "____________________________\n"

# Blocks
puts "Blocks"

my_numbers = [1, 2, 3, 4, 5]

my_numbers.each {
    |number|
    puts "Printing the number: #{number}"
}

puts new_line

def yield_me_bb
    puts "I'm the method"
    yield # Rails application.html.erb files use this
    puts "I'm the method again"
end

yield_me_bb { puts "I'm the interrupting cow" }

# Procs
puts new_line
puts "Procs"

proc_me = Proc.new { puts "I'm a proc" }
proc_me.call

proc_me_twice = Proc.new { |a, b| puts "a + b = " + (a + b).to_s }

proc_me_twice.call(2, 3)
puts new_line

def proc_me_like_a_hurricane
    proc_demo = Proc.new { return "I'm a hurricane" }
    # proc_demo = Proc.new { puts "I'm a hurricane" }
    proc_demo.call # This is kinda just a return statement right here.
    return "I'm a gentle breeze"
end

puts proc_me_like_a_hurricane

# Lambdas
puts new_line
puts "Lambdas"

lambdas_bread = lambda { puts "I'm a lambda" }
lambdas_bread.call # Output: I'm a lambda

def i_wont_be_back
    lambda_demo = lambda { return "Only I print!" }
    lambda_demo.call
    "I lied, I'm back." # Reached
end

puts i_wont_be_back # Output: I'll be back.


# Arrow functions
puts new_line
puts "Arrow Functions"

lambda_demo = -> { puts "I'm a lambda" }
lambda_demo.call # Output: I'm a lambda

lambda_demo2 = -> (a, b) { puts "a + b = " + (a + b).to_s }
lambda_demo2.call(2, 3) # Output: a + b = 5

# Collect Method
puts new_line
puts "Collect Method, x * 2"

numbers = [1, 2, 3, 4, 5]
puts numbers.collect { |number| "Printing the number * 2: #{number * 2}" } # Output: [2, 4, 6, 8, 10]

# Ampersand notation
puts new_line
puts "Ampersand notation"

def ampersand_demo(&block)
    block.call
end

ampersand_demo { puts "I'm the block" } # Output: I'm the block
