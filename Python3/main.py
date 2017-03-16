import random #імпортуємо бібліотеку

print("Вітаю в грі 'Угадай число' ")

rnd = random.randint(0,100) #генеруємо число
number = int(input("Enter you number 0 - 100: ")) #просимо ввести користувача
i = 0 #перемінна для рахунку кількості спроб

while number != rnd: #поки користувач не вгадає число, цикл повторюватись буде
    i += 1
    if number > rnd:
        print("You number is big")
    elif number < rnd:
        print("You number is little")
    number = int(input("Enter you number 0 - 100: "))

print("Так, ви вгадали число, це число - " + str(rnd) + " з " + str(i) + " спроби")