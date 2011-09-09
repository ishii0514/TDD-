//
//  Sum.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/09/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Sum.h"

Sum::Sum(Money* augend,Money* addend)
{
    this->augend = augend;
    this->addend = addend;
}

Money* 
Sum::reduce(std::string to)
{
    int amount = augend->amount + addend->amount;
    return new Money(amount,to);
}