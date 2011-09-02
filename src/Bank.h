//
//  Bank.h
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Bank_h
#define TDD__Bank_h

#include "Money.h"
#include "bank.h"

class Bank
{
public:
    Money* reduce(Expression* source,std::string to);
};



#endif
