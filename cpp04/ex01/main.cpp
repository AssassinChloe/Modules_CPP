#include "main.h"

int main()
{
    int nb(10);
    int i;

    const Animal* tab[nb];
    for(i = 0; i < nb; i++)
    {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    for (i = 0; i < nb; i++)
    {
        tab[i]->makeSound();
        delete(tab[i]);
    }
    return (0);
}