#include <stdio.h>

int getThousands(int amount);
int getFiveHundreds(int amount);
int getTwoHundreds(int amount);
int getHundreds(int amount);
int getFifties(int amount);
int getTwenties(int amount);
int getTens(int amount);
int getFives(int amount);
int getOnes(int amount);

int main()
{
    int amount;
    printf("%s\n%s\n%s",
    "[Sukli Generator]",
    "Input the (integer) amount of the amount:",
    "> "
    );

    scanf("%d", &amount);

    printf("%s\t%d\n%s\t%d\n%s\t%d\n%s\t%d\n%s\t%d\n%s\t%d\n%s\t\t%d\n%s\t\t%d\n%s\t\t%d",
        "Thousands:", getThousands(amount),
        "Five Hundreds:", getFiveHundreds(amount),
        "Two Hundreds:", getTwoHundreds(amount),
        "Hundreds:", getHundreds(amount),
        "Fifties:", getFifties(amount),
        "Twenties:", getTwenties(amount),
        "Tens:", getTens(amount),
        "Fives:", getFives(amount),
        "Ones:", getOnes(amount)
    );

    return 0;
}   

int getThousands(int amount) 
{
    return (amount / 1000);
}
int getFiveHundreds(int amount)
{
    return ((amount % 1000) / 500);
}
int getTwoHundreds(int amount)
{
    return (((amount % 1000) - (getFiveHundreds(amount) * 500)) / 200);
}
int getHundreds(int amount)
{
    return (((amount % 1000) - (getFiveHundreds(amount) * 500) - (getTwoHundreds(amount) * 200)) / 100);
}
int getFifties(int amount)
{
    return ((amount % 100) / 50);
}
int getTwenties(int amount)
{
    return ((amount % 50) / 20);
}
int getTens(int amount)
{
    return ((amount % 20) / 10);
}
int getFives(int amount)
{
    return ((amount % 10) / 5);
}
int getOnes(int amount)
{
    return (amount % 5);
}
