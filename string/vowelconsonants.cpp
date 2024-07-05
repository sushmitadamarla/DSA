#include<iostream>

using namespace std;

int main()
{
    char s[] = {"how are you"};
    int ccount=0, vcount=0;
 
    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            ccount++;

            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                vcount++;
            }
            
        }
    }
    cout<<"Vowels="<<vcount<<endl;
    cout<<"Consonants="<<ccount<<endl;

    return 0;
}