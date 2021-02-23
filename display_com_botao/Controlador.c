//Projeto Tinkercad -->
// https://www.tinkercad.com/things/7GGZk44YgRG-powerful-luulia-lahdi/editel?sharecode=yqvLwwuCXaqpuw9K1O4pMMHS0mUJcXfyFkSOJfa-5nU

int bot = 8;
int valor_bot;
int i;
int on;
char a = LOW;
char b = HIGH;

void setup()
{
    Serial.begin(9600);
    pinMode(bot, INPUT);
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
    digitalWrite(2, a);
    digitalWrite(3, a);
    digitalWrite(9, a);
    digitalWrite(10, a);
    digitalWrite(11, a);
    digitalWrite(4, a);
    digitalWrite(5, a);
    valor_bot = digitalRead(bot);
    Serial.println(valor_bot);
    if (valor_bot == 1)
    { //Verificação para ativar o display
        if (on == 1)
        {
            on = 0;
        }
        else
        {
            on = 1;
        }
    }
    Serial.print("Botao:");
    Serial.println(on);
    i = 0;
    while ((valor_bot == 0) && (i < 11) && (on == 1))
    { // Liga o contador
        i += 1;
        Serial.println("Contando");
        valor_bot = digitalRead(bot);
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