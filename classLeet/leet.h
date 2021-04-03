#include <iostream>
#include <string>
#include <vector>


class Leet
{
private:
public:
    Leet();
    std::vector<int> read1D();
    std::vector<int> read1D(std::string);
    std::vector<std::vector<int> > read2D();
    std::vector<std::vector<int> > read2D(std::string);


    //  fix it later
    template <typename T>
    void print1D( std::vector< T > & arr  )
    {
        for(T &i : arr)
            std::cout<<i<<" ";
    }

    template <typename T>
    void print2D( std::vector< std::vector<T> > & arr )
    {
        for( std::vector<T> & i : arr ){
            for( T &j : i )
                std::cout<<j<<" ";
            std::cout<<std::endl;
        }
    }
    
};