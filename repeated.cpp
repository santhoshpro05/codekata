#include <iostream>
using namespace std;
int main(){
string slowo, temp, temp2;
cout << "Insert word: ";
cin >> word;

for(int i = 0; i <= word.length(); i++){
    temp = word[i];

    for(int j = 1; j < word.length(); j++){
        temp2 = word[j];

        if(temp == temp2)
            cout << temp2;
    }
}
return 0;
}
