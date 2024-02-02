// Hashmap using find the Elements in STL
// Important Topics in DSA

#include <iostream>
#include <unordered_map>

using namespace std;

<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 75db06f (commit)
=======
>>>>>>> 75db06f9228738ffa91d9cb8287307b7874f1177
int main()
{
    unordered_map<int, string> u1;

    //  Insert key-value pairs into the hashmap

    u1[1] = "Umang";
    u1[2] = "Parth";
    u1[3] = "Kishan";
    u1[4] = "Mayank";
    u1[5] = "Kinjal";

    // Iterate over the keys and print them

    // for (const auto &pair : u1)
    // {
    //     cout << pair.last << " ";
    // }

    cout << "The String values is : " << u1[1];

    cout << "\n";

    // Insert the new ELements

    u1.insert(pair<int, string>(6, "Ravi"));

    cout << "The String values is : " << u1[6];

    // Check the size of Hashmap

    cout << "\n";

    cout << "The Size is : " << u1.size() << endl;
  
     cout << "Map contains following elements" << endl;  
  
    //  for(auto it = u1.begin(); it != u1.end(); it++)
    //  {
    //      cout << it->first << " : " << it->second << endl;
    //  }

    for(auto &x: u1)
    {
         cout << x.first << " : " << x.second << endl;
    }

    return 0;
}