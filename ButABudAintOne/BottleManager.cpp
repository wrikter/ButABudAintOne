#include "BottleManager.h"

BottleManager::BottleManager( int iNumBottles )
{
    if( iNumBottles >= 0 )
    {
        this->m_iNumBottles = iNumBottles;
    }
    else
    {
        this->m_iNumBottles = 0;
    }
}

void
BottleManager::drink()
{
    if( hasBottles() )
    {
        this->m_iNumBottles--;
    }
}

bool
BottleManager::hasBottles() const
{
    return this->m_iNumBottles > 0;
}

int 
BottleManager::getNumBottles() const
{
    return this->m_iNumBottles;
}

BottleManager::~BottleManager()
{
}