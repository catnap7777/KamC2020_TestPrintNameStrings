/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

// My own pgm test getting data and printing something out
#include <stdio.h>
#include <string.h>

char name[10];

int main()
{

printf("Please enter your name:\n");
scanf("%s", name);
printf("name= %s", name);

//if (name == "karen" || name == "Karen") --> cannot use == to compare strings; use strcmp
if (strcmp(name,"karen")==0 || strcmp(name,"Karen")==0)
{
    printf("\nYou are awesome Karen and also known as 'Hot Stuff'\n");
}
//else if (name == "tom" || name == "Tom")  --> cannot use == to compare strings; use strcmp
else if (strcmp(name,"tom")==0 || strcmp(name,"Tom")==0)
{
    printf("\nYou are awesome Tom and my bff!\n");

}
else if (strcmp(name,"kevin")==0 || strcmp(name,"Kevin")==0)
{
    printf("\nYou are awesome Kevin and super smart to learn C language!\n");

}
else if (strcmp(name,"kelly")==0 || strcmp(name,"Kelly")==0)
{
    printf("\nYou are awesome Kelly and will do awesome at your internship!\n");

}
else if (strcmp(name,"erik")==0 || strcmp(name,"Erik")==0)
{
    printf("\nYou are awesome Erik and will kicked butt on your AP tests!\n");

}
else
    printf("\nHmmmmm... I don't really know you... You're not family... So, I can't comment\n");

return 0;

}
