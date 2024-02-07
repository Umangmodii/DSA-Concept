//  (!, . , ' , - , " , ? , ; )

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "He said, 'The mailman loves you.' I heard it with my own ears.";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '!' || str[i] == '.' || str[i] == ',' || str[i] == '-' || str[i] == '"')
        {
            count++;
        }
    }

    cout << "The Total  number of punctuation marks in the sentence is : " << count << endl;

    return 0;
}