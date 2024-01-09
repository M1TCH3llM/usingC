#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
       printf("%c", toupper(s[i]));
    }
    printf("\n");
    
}

// {
//     string s = get_string("before: ");
//     printf("after: ");

//     for (int i = 0; i < strlen(s); i++)
//     {
//         // if (s[i] >= 'a' && s[i] <= 'z')
//         if (islower(s[i]))
//         {
//             // subtracts aphanumeric index to upper case equivelent
//             // printf("%c",s[i] - 32 );
//             printf("%c", toupper(s[i]));
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
    
// }