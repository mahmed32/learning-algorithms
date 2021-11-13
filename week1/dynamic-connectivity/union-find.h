#ifndef UNION_FIND_H
#define UNION_FIND_H
class uf
{
public:
    uf(int);
    void munion(int, int);
    bool connected(int, int);
private:
    int find(int);
    int count();
};
#endif
