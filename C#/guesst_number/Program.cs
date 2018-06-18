using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace guesst_number
{
    class Program
    {
        static void Main(string[] args)
        {

            Random rand = new Random();
            int numbers = rand.Next(100);

            bool game = true;
            int check = 0;

            Console.WriteLine("Привіт, вітаю тебе в грі 'Угадай число' ");
            do
            {
                check++;
                Console.Write("Введите загаданое число бота : ");
                string text = Console.ReadLine();
                int num = Convert.ToInt32(text);
                if (num == numbers)
                {
                    Console.WriteLine("Молодець, ты угадал");
                    game = false;
                }else if (num > numbers)
                {
                    Console.WriteLine("Число меньше нужно");
                }else if (num < numbers)
                {
                    Console.WriteLine("Число больше нужно");
                }
            }
            while (game);

            Console.WriteLine("Итого, ты угадал с {0} попытки !", check);
            game = true;
            Console.Write("Загадайте число боту до 100 : ");
            string text1 = Console.ReadLine();
            int num1= Convert.ToInt32(text1);
            int check1 = 0;
            int one = 0;
            int two = 100;
            do
            {
                check1++;
                Random rand1 = new Random();
                int numbers1 = rand1.Next(one, two);

                if (num1 == numbers1)
                {
                    Console.WriteLine("Бот угадал, ваше число {0}", numbers1);
                    game = false;
                }else if (numbers1 < num1)
                {
                    one = numbers1;
                }
                else if (numbers1 > num1)
                {
                    two = numbers1;
                }
            }
            while (game);
            Console.WriteLine("Итого, bot угадал с {0} попытки !", check1);


            Console.ReadKey();
        }
    }
}
