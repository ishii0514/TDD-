//
//  Dollar.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Dollar_h
#define TDD__Dollar_h

class Dollar{
public:
    Dollar(int amount);
    Dollar(const Dollar& dollar);
    ~Dollar(){}
    
    bool operator==(const Dollar& dollar) const
    {
        return m_amount == dollar.m_amount;
    }
    
    Dollar times(int multiplier);
    
    bool
    equals(const Dollar& dollar);
    
private:
    int m_amount;
};


#endif
