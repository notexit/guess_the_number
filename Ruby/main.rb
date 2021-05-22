

puts "Вітаю в грі 'Угадай число' "
puts "Перевіримо, хто за меншу кількість спроб, зможе відгадати загадане число\n\
вашим противником"

one = 0
two = 101
bot_retry = 0

print "Загадайте число боту (0-100): "
user_num = gets.to_i


begin
    bot_retry += 1
    bot_number = rand(one..two)

    if bot_number > user_num
        two = bot_number
    elsif bot_number < user_num
        one = bot_number
    end

end while bot_number != user_num

puts "Бот вгадав число"

bot_num = rand(101)
user_retry = 0
puts "Тепер ваша черга, вам загадали число"

begin
    user_retry += 1
    print "Введіть число: "
    user_number = gets.to_i
    if user_number < bot_num
        puts "Ваше число маленьке"
    elsif user_number > bot_num
        puts "Ваше число велике"
    end
end while bot_num != user_number



puts "Бот вгадав ваше число #{user_num} за #{bot_retry} спроб"
puts "Ви вгадали число бота #{bot_num} за #{user_retry} спроб"

if bot_retry > user_retry
    puts "Користувач вгадав число на #{bot_retry - user_retry} менше за бота"
    puts "Користувач розумніший"
elsif bot_retry < user_retry
    puts "Бот вгадав число на #{user_retry - bot_retry} менше за вас"
    puts "Бот розумніший"
else
    puts "Ви обоє вгадали за однакову кількість раз"
end

puts "Гра закінчена"