package main

import (
	"fmt"
	"math/rand"
	"os"
	"time"
)

func main() {
	rand.Seed(time.Now().UnixNano())
	fmt.Println("Вітаю в грі 'Угадай число' ")
	fmt.Println("Перевіримо, хто за меншу кількість спроб, зможе відгадати загадане число вашим противником")

	one := 0
	two := 100
	user_number := 0
	bot_retry := 0
	bot_num := 0

	fmt.Print("Загадайте число: ")
	fmt.Fscan(os.Stdin, &user_number)

	for bot_num != user_number {
		bot_retry++
		bot_num = rand.Intn(two-one+1) + one
		if bot_num == user_number {
			fmt.Println("Бот вгадав число")
		} else if bot_num < user_number {
			one = bot_num
		} else {
			two = bot_num
		}
	}
	fmt.Println("Тепер ваша спроба")

	user_retry := 0
	bot_number := 0
	user_num := 0
	bot_number = rand.Intn(101)
	fmt.Println("Бот загадва вам число")

	for bot_number != user_num {
		user_retry++

		fmt.Print("Введіть число: ")
		fmt.Fscan(os.Stdin, &user_num)

		//По не відомій мені причині навіть після вгадування числа не залежно від типу цикла навіть при не відповідності запускається одна з умов яка не відповідає дій1сності
		//"Ваше число мале" або "Ваше число велике" але ніяк не "Ви вгадали число"

		//		switch {
		//		case bot_num > user_num:
		//			fmt.Println("Ваше число мале")
		//		case bot_num < user_num:
		//			fmt.Println("Ваше число велике")
		//		default:
		//			fmt.Println("Ви вгадали число")
		//		}

		if bot_num > user_num {
			fmt.Println("Ваше число мале")
		} else if bot_num < user_num {
			fmt.Println("Ваше число велике")
		} else if bot_num == user_num {
			fmt.Println("Ви вгадали число")
		}
	}

	fmt.Println("Бот вгадав ваше число за спроб", bot_retry)
	fmt.Println("Ви вгадали загадане число за спроб", user_retry)
	if bot_retry > user_retry {
		fmt.Println("Ви вгадали на ", bot_retry-user_retry, " спроб менше ніж бот")
		fmt.Println("Ви кмітливіший")
	} else if bot_num < user_num {
		fmt.Println("Бот вгадав на", user_retry-bot_retry, "спроб менше ніж ви")
		fmt.Println("Бот кмітливіший")
	} else {
		fmt.Println("Ви вгадали за однакову кількість спроб, а саме ", user_retry)
		fmt.Println("У вас інтелект рівний (якщо це можна назвати інтелектом)")
	}
	fmt.Println("Гра закінчена")
}
