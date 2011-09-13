//
//  Bank.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "Bank.h"
#include "Sum.h"

Money* 
Bank::reduce(Expression* source,std::string to)
{
    return source->reduce(this,to);
}
int
Bank::rate(std::string from, std::string to)
{
    if(from == to)
        return 1;
    std::map<Pair,int>::iterator irate = rates.find(Pair(from,to));
    if (irate == rates.end())
        return 1;
    return irate->second;
}
void 
Bank::addRate(std::string from, std::string to,int rate)
{
    rates.insert(std::make_pair(Pair(from,to),rate));
}