import java.util.Random;
import java.util.Scanner;

class GuesstNumber{
    public static void main(String []args) {
        System.out.println("Привіт, вітаю тебе у грі 'Угадай число'"); 

        int check_bot = 0;
        boolean game_bot = true;
        int one=0;
        int two=100;
        Random rand = new Random();
       // int ix =    rand.nextInt();
        
        Scanner in = new Scanner(System.in);
        System.out.print("Загадайте число боту від 0 до 100: ");
        int number = in.nextInt();
        

        do {
            check_bot=check_bot+1;
            int  answer_number_bot  =  one + rand.nextInt(two - one + 1);
            if (answer_number_bot > number){
                two = answer_number_bot;
            } else if (answer_number_bot < number){
                one = answer_number_bot;
            } else {
                System.out.println("Бот вгадав число"); 
                game_bot=false;
            }


        } while (game_bot);

        boolean game_user=true;
        int check_user=0;
        int bot_number = rand.nextInt(101);
        //Scanner in_user = new Scanner(System.in);

        System.out.print("Відгадайте число загадане ботом від 0 до 100: ");

        do{
            check_user=check_user+1;
            int number_user = in.nextInt();
            if (bot_number>number_user) {
                System.out.println("Ваше число менше");
            } else if(bot_number<number_user) {
                System.out.println("Ваше число велике");      
            } else{
                System.out.println("Ви вгадали число"); 
                game_user=false;
            }

        } while(game_user);
        in.close();
        System.out.println("Гра завершена");
        System.out.printf("Бот вгадав за %d спроб\n", check_bot);
        System.out.printf("Ти вгадав на %d  спроб\n", check_user);

        if (check_bot>check_user){
            System.out.printf("Ти вгадав число на %d менше ніж бот\n", check_bot-check_user);
        }else if (check_bot<check_user){
            System.out.printf("Бот вгадав число на %d менше ніж користувач\n", check_user-check_bot);
        }else{
            System.out.printf("Ви вгадали число %d за однакову кількість спроб\n", check_user);
        }

        System.out.print("Гра завершена\n");

     }
}