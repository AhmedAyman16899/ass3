#include <iostream>

using namespace std;

void swaap(char word[], int start, int endd)
{
    char temp;

        temp = word[start];
        word[start] = word[endd];
        word[endd] = temp;
        if (start==endd){
        for (int i = 0 ; i<5 ; i++){
            cout << word[i];
        }
        }
        if (start<endd){
        swaap( word, start+1, endd-1);
        }

}
/*void swaap1(string word1)
{
        char temp;
        int length , starrt =0 ;

        length=word1.length();
        temp = word1[starrt];
        word1[starrt] = word1[length];
        word1[length] = temp;
        if (0==length){
        for (int i = 0 ; i<length ; i++){
            cout << word1[i];
        }
        }
        if (0<length){
        swaap1( word1);
        }


}*/

int main()
{
    char word[5] {'A' , 'B' , 'C' , 'D' , 'E' };
    string word1 = "ahmed";
    swaap(word, 0, 4);


    return 0;
}

