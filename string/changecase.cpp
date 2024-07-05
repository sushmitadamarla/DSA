// Add 32 to ASCII code to convert it to lowercase
// Subtract 32 to ASCII code to convert it to uppercase

#include<iostream>

using namespace std;

int main()
{
    char s[] = {'W', 'E', 'L', 'C', 'O', 'M', 'E', '\0'};

    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] = s[i] + 32;
        }

        else if(s[i]>=97 && s[i]<=122)
        {
            s[i] = s[i] - 32;
        }
    }
    cout<<s;

    return 0;
}