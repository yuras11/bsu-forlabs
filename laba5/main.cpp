#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool OpenFiles(ifstream& fin, ofstream& fout1, ofstream& fout2)
{
    fin.open("File_with_strings.txt");
    fout1.open("Strings_palindromes.txt");
    fout2.open("Strings_with_similar_symbols.txt");
    if (fin.is_open() && fout1.is_open() && fout2.is_open())
    {
        return true;
    }
    return false;
}
bool CloseFiles(ifstream& fin, ofstream& fout1, ofstream& fout2)
{
    fin.close();
    fout1.close();
    fout2.close();
    if (!(fin.is_open() && fout1.is_open() && fout2.is_open()))
    {
        return true;
    }
    return false;
}
bool AllSameSymbols(string s_copy)
{
    for (int r = 1; r < s_copy.size(); r++)
    {
        if (s_copy[r] != s_copy[0])
        {
            return false;
        }
    }
    return true;
}
void string_with_palindromes_and_similar_strings(vector <string> &string1, ofstream& fout1, ofstream& fout2)
{
    for (int i = 0; i < string1.size(); i++)
    {
        string s_copy = string1[i];
        for (int j = string1[i].size() - 1; j >= 0; j--)
        {
            if (string1[i][j] >= 'A' && string1[i][j] <= 'Z')
            {
                int temp = string1[i][j] - 'A';
                s_copy[j] = 'a' + temp;
            }
            if (string1[i][j] == '.' || string1[i][j] == ' ' || string1[i][j] == '?'
                || string1[i][j] == ',' || string1[i][j] == '-' || string1[i][j] == '\"')
            {
                s_copy.erase(j, 1);
            }
        }
        string s_copy1(s_copy.rbegin(), s_copy.rend());
        if (s_copy == s_copy1)
        {
            fout1 << string1[i] << endl;
        }
        if (AllSameSymbols(s_copy))
        {
            fout2 << string1[i] << endl;
        }
    }
}

int main()
{
    ifstream fin;
    ofstream fout1;
    ofstream fout2;
    if (OpenFiles(fin, fout1, fout2))
    {
        cout << "Files are opened.\n";
    }
    else
    {
        cout << "Some file cannot be opened.\n";
    }
    string str;
    vector <string> string1;
    while (getline(fin, str))
    {
        string1.push_back(str);
    }
    string_with_palindromes_and_similar_strings(string1, fout1, fout2);
    if(CloseFiles(fin, fout1, fout2))
    {
        cout << "Files are closed.\n";
    }
    else
    {
        cout << "Some file is still opened.\n";
    }
    return 0;
}