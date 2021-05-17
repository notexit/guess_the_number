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
            int numbers = rand.Next(101);

            bool game = true;
            int check = 0;

            Console.WriteLine("Привiт, вiтаю тебе в грi 'Угадай число' ");
            Console.WriteLine("Бот загадав вам число");
            do
            {
                check++; 
                Console.Write("Введiть загадане число бота : ");
                string text = Console.ReadLine();
                int num = Convert.ToInt32(text);
                if (num == numbers)
                {
                    Console.WriteLine("Молодець, ти вгадав");
                    game = false;
                }else if (num > numbers)
                {
                    Console.WriteLine("Менше число потрiбно");
                }else if (num < numbers)
                {
                    Console.WriteLine("Бiльше число потрiбно");
                }
            }
            while (game);

            Console.WriteLine("Ти вгадав з {0} спроби !", check);
            game = true;
            Console.Write("Загадайте число боту до 100 : ");
            string text1 = Console.ReadLine();
            int num1= Convert.ToInt32(text1);
            int check1 = 0;
            int one = 0;
            int two = 101;
            do
            {
                check1++;
                Random rand1 = new Random();
                int numbers1 = rand1.Next(one, two);

                if (num1 == numbers1)
                {
                    Console.WriteLine("Бот вгадав, ваше число {0}", numbers1);
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

            Console.WriteLine("В результатi, bot вгадав з {0} спроби !", check1);

            if (check1 > check)
                {
                    Console.WriteLine("Бот вгадав, ваше число на {0} спроб більше ніж ви", check1 - check);
                    Console.WriteLine("Вiтаю, ви розумнiшi нiж якийсь алгоритм");
                }
            else
                {
                    Console.WriteLine("Ви вгадали число на {0} спроб бiльше нiж бот", check - check1);
                    Console.WriteLine("Алгоритм розумнiший нiж ви =)");
                }


            Console.ReadKey();
        }
    }
}
