puts "一つ目の数字は","→"
firstnum=gets.to_i
puts "二つ目の数字は","→"
secondnum=gets.to_i
array=["+","-","*","/"]
array.each{|a|
    print firstnum.to_s+a+secondnum.to_s
    print "=#{eval(firstnum.to_s+a+secondnum.to_s)}"
    puts "" if !(a=="/")
}
puts "余り #{firstnum%secondnum}"