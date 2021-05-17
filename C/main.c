#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));    
    int user_number;
    int bot_sprob = 0;
    int one = 0;
    int two = 101;
    bool game = true;
    printf("Вітаю вас в грі 'Вгадай число'\n");
    printf("Загадайте число від 0 до 100\n");
    scanf("%d", &user_number);
    
    while (game)
    {   
        bot_sprob++;
        //int number_bot = rand()%two + one;
        int number_bot = one + rand() % (two - one);

        if (number_bot == user_number)
        {
            game = false;
        }
        else if (number_bot<user_number)
        {
            one = number_bot;
        }
        else if (number_bot>user_number)
        {
            two = number_bot;
        }   

    } 

    printf("Бот вгадав число, тепер ваша черга\n");

    int bot_number = rand() % 101;
    printf("Бот загадав вам число\n");

    int user_sprob = 0;
    int bot_numbers;
    bool user_game = true;
    int gchar;


    do
    {
        
        user_sprob++;
        printf("Введіть число: ");
        scanf("%d", &gchar);
        
        if (bot_number == gchar)
        {
            user_game = false;
        }
        else if (bot_number < gchar)
        {
            printf("Ваше число завелике\n");
        }
        else if (bot_number > gchar)
        {
            printf("Ваше число замаленьке\n");
        }
        
        
    } while (user_game);
        

    printf("Бот вгадав число %d за %d спроб\n",user_number, bot_sprob);
    printf("Ви вгадали число %d за %d спроб\n",bot_number, user_sprob);
    if (bot_sprob>user_sprob)
    {
        printf("Ви вгадали число на %d спроб менше ніж бот\n",bot_sprob - user_sprob);
        
    } 
    else 
    {
        printf("Бот вгадав ваше число на %d спроб менше ніж ви\n",user_sprob-bot_sprob);
    }
    




    return 0;
}
