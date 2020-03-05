#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Sudoku {
private:
    int sudo [9][9];
    int num;
public:
    void readFromFile (string line) {
        fstream file;
        file.open(line, ios::in);
        if (file.is_open()) {
            std::string t;
            int row = 0;
            int col = 0;

            while (std::getline(file, t, '\\')) {

                string word = "";
                if (row !=0) {
                    col = -2;
                }
                for (auto x : t) {
                    if (x != ' ') {
                        word = x;
                        stringstream word_int(word);
                        int num;
                        word_int >> num;
                        sudo[row][col] = num;
                        col = col +1;

                    }

                    //cout << word << endl;

                }
                row = row + 1;

            }
        }
            file.close(); //close the file object.
    }
    Sudoku(){
        int sudo [9][9] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    };
    Sudoku (string lines){
        readFromFile (lines);
    };
    void printSudoku(){
        std::cout <<"+-------+-------+-------+\n";
        for(int i = 0; i < 3; i++){
            std::cout <<"| ";
            if (sudo[i][0] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][0];
            cout<<" ";
            if (sudo[i][1] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][1];
            cout<<" ";
            if (sudo[i][2] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][2];
            cout<<" | ";
            if (sudo[i][3] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][3];
            cout<<" ";
            if (sudo[i][4] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][4];
            cout<<" ";
            if (sudo[i][5] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][5];
            cout<<" | ";
            if (sudo[i][6] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][6];
            cout<<" ";
            if (sudo[i][7] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][7];
            cout<<" ";
            if (sudo[i][8] == 0){
                cout<<".";
            }
            else
                cout << sudo[i][8];
            cout<<" |\n";
            }
        std::cout <<"+-------+-------+-------+\n";
        for(int i = 3; i < 6; i++) {
            std::cout << "| ";
            if (sudo[i][0] == 0) {
                cout << ".";
            } else
                cout << sudo[i][0];
            cout << " ";
                if (sudo[i][1] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][1];
                cout << " ";
                if (sudo[i][2] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][2];
                cout << " | ";
                if (sudo[i][3] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][3];
                cout << " ";
                if (sudo[i][4] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][4];
                cout << " ";
                if (sudo[i][5] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][5];
                cout << " | ";
                if (sudo[i][6] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][6];
                cout << " ";
                if (sudo[i][7] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][7];
                cout << " ";
                if (sudo[i][8] == 0) {
                    cout << ".";
                } else
                    cout << sudo[i][8];
                cout << " |\n";
            }
            std::cout << "+-------+-------+-------+\n";
            for (int i = 6; i < 9; i++) {
                std::cout << "| ";
                if (sudo[i][0] == 0) {
                    cout << ".";
                    } else
                        cout << sudo[i][0];
                    cout << " ";
                    if (sudo[i][1] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][1];
                    cout << " ";
                    if (sudo[i][2] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][2];
                    cout << " | ";
                    if (sudo[i][3] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][3];
                    cout << " ";
                    if (sudo[i][4] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][4];
                    cout << " ";
                    if (sudo[i][5] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][5];
                    cout << " | ";
                    if (sudo[i][6] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][6];
                    cout << " ";
                    if (sudo[i][7] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][7];
                    cout << " ";
                    if (sudo[i][8] == 0) {
                        cout << ".";
                    } else
                        cout << sudo[i][8];
                    cout << " |\n";
                }
                std::cout << "+-------+-------+-------+\n";

            }

};
int main(int argc, char *argv[])
{
    std::string s (argv[1]);
    Sudoku s_object;
    std::cout<< s<<"\n";
    s_object.readFromFile(s);
    s_object.printSudoku();
};