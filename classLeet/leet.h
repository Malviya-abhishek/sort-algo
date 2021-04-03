#include <iostream>
#include <string>
#include <vector>

// 
// T myMax(T x, T y)
// {
//    return (x > y)? x: y;
// }

class Leet
{
private:
public:
    Leet();
    std::vector<int> read1D(){ return {}; }
    std::vector<int> read1D(std::string){ return {}; }
    std::vector<std::vector<int> > read2D(){ return {}; }
    std::vector<std::vector<int> > read2D(std::string){ return {}; }
    template <typename T>
    void print1D( std::vector<T> & ){  }
    template <typename T>
    void print2D( std::vector< std::vector<T> > & ){ }
};