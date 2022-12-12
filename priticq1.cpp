#include <iostream>
using namespace std;

int main()
{

    /*bool isUppercase, isLovercase;
    char d;
    cout << "Please enter your Alphabet" << endl;
    cin >> d;
    isLovercase = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
    isUppercase = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');
    if (!isalpha(d))
        cout << "You have inter integer Number";
    else if (isLovercase || isUppercase)
        cout << d << " is a vowel.";
    else
        cout << d << " is a consonant.";
        */
    bool isUppercase, isLovercase;
    char alphabets;
    char c[] = {'A', 'E', 'I', 'O', 'U'};
    char d[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    cout << "This is Vowel" << endl;
    cout << c[0] << endl;
    cout << c[1] << endl;
    cout << c[2] << endl;
    cout << c[3] << endl;
    cout << c[4] << endl;
    cout << "This is Consonent" << endl;
    cout << d[0] << endl;
    cout << d[1] << endl;
    cout << d[2] << endl;
    cout << d[3] << endl;
    cout << d[4] << endl;
    cout << d[5] << endl;
    cout << d[6] << endl;
    cout << d[7] << endl;
    cout << d[8] << endl;
    cout << d[9] << endl;
    cout << d[10] << endl;
    cout << d[11] << endl;
    cout << d[12] << endl;
    cout << d[13] << endl;
    cout << d[14] << endl;
    cout << d[15] << endl;
    cout << d[16] << endl;
    cout << d[17] << endl;
    cout << d[18] << endl;
    cout << d[19] << endl;
    cout << d[20] << endl;
    cout << "Please enter your alphabets" << endl;
    cin >> alphabets;

    if (c[5] || d[21])

        cout
            << "You have enters vowle";
    else
        cout << "You have enters consonent";

    return 0;
}