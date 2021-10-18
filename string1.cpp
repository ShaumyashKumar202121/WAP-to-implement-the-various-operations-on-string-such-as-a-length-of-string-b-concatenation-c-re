#include <iostream>
using namespace std;



// Function to concatenate two strings

void stringcaT(string str1, string str2)
{
    string str3 = str1 + str2;
    cout << str3 << endl;
}


// Function to find length of a string


int stringleN(string str)
{
    int x = 0;
    while (str[x] != '\0')
    {
        x++;
    }
    return x;
}

// Function to copy second string into the first
void sTringcopy(string &str1, string str2)
{
    str1 = str2;   
}

// Function to reverse a string

void stringrEv(string str)
{
    int leng = 0, m;
    char temp;
    leng = stringleN(str);
    m = leng - 1;

    for(int i = 0; i <= leng/2; i++)
    {
        temp = str[i];
        str[i] = str[m];
        str[m] = temp;
        m--;
    }

    cout<<"Reverse of string: "<<str<<endl;
}



int main()
{
    string str1 = "Central University", str2 = " of Haryana";
    string str;
        
    sTringcopy(str, str1);
    
    cout<<"Concatenation of string1 and string2 is: ";
    stringcaT(str1, str2);

    int leng = stringleN(str);
    cout<<"Length of "<<str<<" is: "<<leng<<endl;
    
    stringrEv(str);

    

    return 0;
}
