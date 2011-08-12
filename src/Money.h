//
//  Money.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Money_h
#define TDD__Money_h

#include<typeinfo>

class Money
{
public:
    virtual bool operator==(const Money& money) const
    {
        return (this->amount == money.amount) && (typeid(*this) == typeid(money));
    }
protected:    
    int amount;
};

#endif
