#include <iostream>
using namespace std;
 void cleanSreing(string str /*int num*/ )
{
    int x = 0;
    int y=0;
    for (int i = 0; i < str.size(); i++) {
         if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >='a' && str[i] <= 'z'))
        {
            str[x] = str[i];
            x++;
        }
    }
    /*
    for (int j = 0; j < num.size(); j++){
        if((num[j]>="0" && num[j]<=9) )
        {
            num[y] = num[j];
            y++;
        }
    }*/
    
    cout << str.substr(0, x);
    
}
 int main()
{
    string str = "?.Akhi-+Les?+H10.0";

   cleanSreing(str);
    return 0;
}