int pin_buzz = 13;

void setup()
{
    pinMode(pin_buzz, OUTPUT);
}

void loop()
{
    int C = 262,
        D = 294,
        E = 330,
        F = 349,
        G = 392,
        A = 440,
        B = 523;
    int P = 0;
    int i;
    int ode[] = {
        E, E, F, G, G, F, E, D, C, C, D, E, E, D, P, D, P,
        E, E, F, G, G, F, E, D, C, C, D, E, D, C, P, C, P,
        D, D, E, C, D, E, P, F, E, C, D, E, P, F, E, D, C, D, P,
        E, E, D, G, G, F, E, D, C, C, D, E, D, C, P, C};
    int tempo[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, 1, .5, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, 1, .5, 1, 1,
        1, 1, 1, 1, 1, 1, .5, 1, 1, 1, 1, 1, .5, 1, 1.5, 1, .5, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, .125, 1, 1};
    for (i = 0; i < sizeof(ode) / 2; i++)
    {
        if (ode[i] != 0)
            tone(pin_buzz, ode[i]);
        else
            noTone(pin_buzz);

        delay(tempo[i] * 500);
        noTone(pin_buzz);
    }

    noTone(pin_buzz);
    delay(10000);

    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}