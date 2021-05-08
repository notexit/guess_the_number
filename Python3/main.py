import random #імпортуємо бібліотеку

print("Вітаю в грі 'Угадай число' ")
print("Перевіримо, хто за меншу кількість спроб, зможе відгадати загадане число\n\
вашим противником")

minimum = 0
maximum = 100
bot_retry = 0
user_retry = 0
save_number = []

user_number = int(input("Загадайте число боту від 0 до 100: ")) #загадуємо число боту
attempt = random.randint(0, 100)
while user_number != attempt:

    if not (attempt in save_number): #ця умова, щоб бот не повторював числа, в останній редактурі не знаю чи цей блок коди взагалі потрібний
        save_number.append(attempt)
    else:
        attempt = random.randint(minimum, maximum)
        continue

    if attempt > user_number:
        maximum = attempt
        bot_retry += 1
        attempt = random.randint(minimum, maximum)
    elif attempt < user_number:
        minimum = attempt
        bot_retry += 1
        attempt = random.randint(minimum, maximum)
bot_attempt = attempt
choice = "USER"

if choice == "USER": #коли бот вгадав число, надаємо чергу користувачеві
    rnd = random.randint(0, 100)  # генеруємо число
    print("Бот справився вже, він загадав вам число ")
    number = int(input("Введіть число від 0 - 100: "))  # просимо ввести користувача
    while number != rnd:  # поки користувач не вгадає число, цикл повторюватись буде
        user_retry += 1
        if number > rnd:
            print("Ваше вказане число велике")
        elif number < rnd:
            print("Ваше вказане число маленьке")
        number = int(input("Введіть число від 0 - 100: "))
    user_attempt = rnd

    print("Так, ви вгадали число, це число - " + str(rnd) + " з - " + str(user_retry) + " спроби")
    print("Бот вгадав ваше число - " + str(user_number) + " з - " + str(bot_retry) + " спроби")
    if bot_retry < user_retry:
        print("Хахаха, я вгадав на " + str(user_retry - bot_retry) + " спроб меньше ніж ти, повстання машин почалось")
        print("УХАХАХАХАХАХАХАХААХАХАХАХАХАХАХАХАХАХАХАХА")
    elif bot_retry > user_retry:
        print("Ок, ти розумніший за мене, в тебе вийшло на " + str(bot_retry - user_retry) + " меньше спроб ніж в мене")
    else:
        print("Ми з тобою однаково розумні")