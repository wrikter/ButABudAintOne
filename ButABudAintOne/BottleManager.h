#ifndef BOTTLEMANAGER_H
#define BOTTLEMANAGER_H

class BottleManager
{
private:
    int m_iNumBottles;
public:
    BottleManager( int numBottles );
    ~BottleManager();

    void drink();
    int getNumBottles() const;
    bool hasBottles() const;
};

#endif