#include <iostream>
#include <string>
// #include<math.h>
using namespace std;
void dubstep(string s)
{
    int first_encounter = 0;
    /*function takes string as an input and then calculate its length
    after that it iterates on the string and if the char WUB is found it skips the string to that part and print if the
    condition is not matched.
    becuase we need space in place of WUB except if the comes as the first word
    i wrote anoter contions which checks the postions of the workd and print the sapce accordingly*/
    int l = s.length();
    // cout<<l;
    for (int i = 0; i < l;)
    {
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
        {
            i += 3;
            if (first_encounter == 1)
                cout << " ";
        }

        else
        {
            first_encounter = 1;
            cout << s[i];
            i++;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    dubstep(s);
    return 0;
}