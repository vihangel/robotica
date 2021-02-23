//Projeto Tinkercad -->
// https://www.tinkercad.com/things/7GGZk44YgRG-powerful-luulia-lahdi/editel?sharecode=yqvLwwuCXaqpuw9K1O4pMMHS0mUJcXfyFkSOJfa-5nU
//Ps: Para o botão funcionar aperte e segure um pouquinho!

int bot = 8;   //Pino do botão
int valor_bot; //Leitura do estado do botão
int i;         //Contador
int on;        //Verificador de ativação ou não do display
char a = LOW;
char b = HIGH;
//"Valor_bot" recebe se o botão está sendo clicado ou não, enquanto "On" permite a ativação da contagem ou desativação dependendo do valor_bot

void setup()
{
    Serial.begin(9600);  //Inicialização do Monitor Serial
    pinMode(bot, INPUT); //Botão é uma entrada
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop()
{
    digitalWrite(2, a); //Reseta o Display
    digitalWrite(3, a);
    digitalWrite(9, a);
    digitalWrite(10, a);
    digitalWrite(11, a);
    digitalWrite(4, a);
    digitalWrite(5, a);
    valor_bot = digitalRead(bot); //Recebe o estado do botão (Quando desativado == 0)
    Serial.println(valor_bot);    //Informa no monitor
    if (valor_bot == 1)
    {                //Verificação para ativar o display
        if (on == 1) //Diz que o display deve ser desativado pois ele ja estava ativado
        {
            on = 0;
        }
        else //Diz que o display deve ser ativado
        {
            on = 1;
        }
    }
    Serial.print("Botao:");
    Serial.println(on);
    i = 0; // Reseta contagem
    while ((valor_bot == 0) && (i < 11) && (on == 1))
    {           // Liga o contador
        i += 1; //i define a quantidade de números a serem mostrados por segundo
        Serial.println("Contando");
        valor_bot = digitalRead(bot); //Recebe o valor do botão para saber se precisa desativar o display
        Serial.println(valor_bot);
        if (valor_bot == 1)
        { //Verifica se o botão foi apertado e para o while
            on = 0;
        }
        delay(1000);
        digitalWrite(2, a);
        digitalWrite(3, a);
        digitalWrite(9, a);
        digitalWrite(10, a);
        digitalWrite(11, a);
        digitalWrite(4, a);
        digitalWrite(5, a);
        if (i == 0)
        {
            digitalWrite(2, b); //0
            digitalWrite(3, b);
            digitalWrite(9, b);
            digitalWrite(10, b);
            digitalWrite(11, b);
            digitalWrite(4, b);
        }
        if (i == 1)
        {
            digitalWrite(3, b); //1
            digitalWrite(9, b);
        }
        if (i == 2)
        {
            digitalWrite(2, b); //2
            digitalWrite(3, b);
            digitalWrite(5, b);
            digitalWrite(11, b);
            digitalWrite(10, b);
        }
        if (i == 3)
        {
            digitalWrite(2, b); //3
            digitalWrite(3, b);
            digitalWrite(5, b);
            digitalWrite(9, b);
            digitalWrite(10, b);
        }
        if (i == 4)
        {
            digitalWrite(4, b); //4
            digitalWrite(3, b);
            digitalWrite(5, b);
            digitalWrite(9, b);
        }
        if (i == 5)
        {
            digitalWrite(2, b); //5
            digitalWrite(4, b);
            digitalWrite(5, b);
            digitalWrite(9, b);
            digitalWrite(10, b);
        }
        if (i == 6)
        {
            digitalWrite(4, b); //6
            digitalWrite(9, b);
            digitalWrite(5, b);
            digitalWrite(11, b);
            digitalWrite(10, b);
        }
        if (i == 7)
        {
            digitalWrite(3, b); //7
            digitalWrite(9, b);
            digitalWrite(2, b);
        }
        if (i == 8)
        {
            digitalWrite(2, b); //8
            digitalWrite(3, b);
            digitalWrite(9, b);
            digitalWrite(10, b);
            digitalWrite(11, b);
            digitalWrite(4, b);
            digitalWrite(5, b);
        }
        if (i == 9)
        {
            digitalWrite(4, b); //9
            digitalWrite(3, b);
            digitalWrite(5, b);
            digitalWrite(9, b);
            digitalWrite(2, b);
        }
    }
    delay(500);
}