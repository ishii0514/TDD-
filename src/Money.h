//
//  Money.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Money_h
#define TDD__Money_h

class Money
{
public:
    bool operator==(const Money& money) const
    {
        return m_amount == money.m_amount;
    }
    bool
    equals(const Money& money);
    
    
    int m_amount;
};

#endif
