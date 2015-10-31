#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power =2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";
    int hex_num = 0x10;
    int oct_num = 010;
    int dec_num = 10;

    printf("You are %d miles away.\n",distance);
    printf("You have %f levels of power.\n",power);
    printf("You have %f awesome super powers.\n",super_power);
    printf("I have an initial %c.\n",initial);
    printf("I have a first_name %s.\n",first_name);
    printf("I have a last name %s\n", last_name);
    printf("My whole name is %s %c.%s.\n",first_name,initial,last_name);

    printf("The hex 10 is %d\n",hex_num);
    printf("The octal 10 is %d\n",oct_num);
    printf("The decimal 10 is %d\n",dec_num);

    return 0;
}
