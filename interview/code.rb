module SomeModule
  def hello1
    puts "Hello from SomeModule!"
  end
end

module AnotherModule
  def hello2
    puts "Hello from anotherModule!"
  end
end

class MyClass
  include SomeModule
  include AnotherModule
end

obj = MyClass.new
logger = Logger.new('fsefs.log')
logger.info('ns')
obj.hello1
obje.hello2




modules deepak
  def any_message
    puts "namesddfsfs"
  end
end

class MyClass
  extend deepak
end
MyClass.any_message


has_many :through




proc_obj = Proc.new { |x| puts x}
proc_obj = -> (x) { puts x }


lamd_ob = lambda { |x| puts x }



clas User < AppplicationRecord
  default_scope :active, -> { where (active: true)}
end

@active_users = User.active




query = "SELECT * FROM USERS where acitve = record"
ActiveRecord::Base.connection.execute(query);


















