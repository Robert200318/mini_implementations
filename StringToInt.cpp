#include <iostream>
#include <string>
int stoi(const char* str) //  string to int
{
    int intt = 0;
    while(*str != '\0')
    {
        if( *str >= 48 && *str <= 57 )
        {
            intt = intt * 10 + (*str - 48);
        }
        else
        {
            abort();
        }
        ++str;
    }

    return intt;
}

int main()
{
    std::cout<<stoi("1000");
    return 0;
} 