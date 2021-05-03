unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Label1: TLabel;
    Label10: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  guess, counter_bot,bot_count, bot_count_low, bot_count_big:integer;
  guess_user, bot_user_count:integer;
  counter_user:integer = 0;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
begin
  Randomize;
  counter_bot:=1;
  bot_count_low:=0;
  bot_count_big:=100;

  guess:=StrToInt(Edit1.Text);
  bot_count:=Random(100);
  while guess <> bot_count do
        begin
              if bot_count > guess then
                 begin
                  bot_count_big:=bot_count;
                  bot_count:=Random(bot_count_big-bot_count_low+1)+bot_count_low;
                 end
              Else begin
                  bot_count_low:=bot_count;
                  bot_count:=Random(bot_count_big-bot_count_low+1)+bot_count_low;
              end;

            counter_bot:= counter_bot+1;
        end;
   label1.Caption:='Бот вгадав число';
end;

procedure TForm1.Button2Click(Sender: TObject);

begin
   if bot_user_count = 0 then
   begin
        Randomize;
        bot_user_count:=Random(100);
   end;
   //counter_user:=0;
   guess_user:=0;

   guess_user:=StrToInt(Edit2.Text);
   label7.Caption:=IntToStr(guess_user);
   counter_user:=counter_user+1;

   if guess_user = bot_user_count then
   begin
      label2.Caption:='Ти вгадав число';
   end
   Else begin
       if guess_user > bot_user_count then
       begin
            label2.Caption:='Твоє число велике';
       end
       Else begin
            label2.Caption:='Твоє число маленьке';
       end;
       end;
if (guess_user = bot_user_count) and (guess = bot_count) then
   begin
    label3.Caption:='Змагання закінчено';
    label4.Caption:='Бот вгадав число за ' +IntToStr(bot_count)+ ' і в нього пішло на це '+ IntToStr(counter_bot) + ' спроб';
    label5.Caption:='Ти вгадав число за ' +IntToStr(guess_user)+ ' і в тебе пішло на це '+ IntToStr(counter_user) + ' спроб';

    if counter_bot < counter_user then
    begin
         label6.Caption:='Бот виграв, він вгадав число на '+ IntToStr(counter_user-counter_bot) +' спроб менше ніж ти';
    end
    Else begin
         label6.Caption:='Ти виграв, ти вгадав число на '+ IntToStr(counter_bot-counter_user) +' спроб менше ніж бот';
    end;
    if counter_bot = counter_user then
         label6.Caption:='Ви вгадали числа за рівну кількість спроб, я вас обох вітаю '+ IntToStr(counter_bot);
    end;
    Edit2.Text:='';
end;

end.

