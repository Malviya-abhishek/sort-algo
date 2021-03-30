#include <vector>

class Heap
{
private:
    int idx;
    std::vector<int> v;
public:
    Heap();
    void heapify(std::vector<int>&);
    void heapSort(std::vector<int>&);
    void add(int x);
    int get();
    int pop();
    void print();
};


class Merge
{
private:
    int n;
    std::vector<int> v;
public:
    Merge();
    void mergeSort(std::vector<int>&);
    void divider(std::vector<int>&, int, int);
    void merger(std::vector<int>&, int ,int, int);
    void print();
};


class Insertion
{
public:
    Insertion();
    void insertionSort(std::vector<int>&);
};


class Quick
{
private:
public:
};