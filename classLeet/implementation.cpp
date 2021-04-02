#include "./leet.h"

Leet:: Leet()
{
    /* explicit declatation */
}


std::vector<int> Leet::read1D()
{
    std::string str;
    std::getline(std::cin, str);
    return Leet::read1D(str);
}


std::vector< std::vector<int> > Leet::read2D()
{
    std::string str;
    std::getline(std::cin, str);
    return Leet::read2D(str);
}


std::vector<int> Leet::read1D( std::string str  )
{
    std::vector<int> ans;
    std::string word = "";
    for(char &i : str)
        if( '0' <= i and i <= '9' )
            word += i;
        else if(word.size()){
            ans.push_back(stoi(word));
            word = "";
        }
    return ans;
}


std::vector<std::vector<int> > Leet::read2D( std::string str )
{

    std::vector< std::vector<int> > ans;
    std::string word = "";
    std::vector<int> temp;

    for(char &c : str){
        if( '0' <= c and c <= '9' )
            word += c;
        else if( c == ',' or c == ']'){
            if(word.size())
                temp.push_back(stoi(word));
            word = "";
            if(c == ']' and temp.size()){
                ans.push_back(temp);
                temp.clear();
            }
        }
    }

    return ans;
    }
