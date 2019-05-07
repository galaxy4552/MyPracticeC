//不同iddress導致兩答案不同 string特性
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");
    
    if (s == t)
    {
        printf("same\n");
    
    }
    else
    {
        printf("different\n");
    }
}