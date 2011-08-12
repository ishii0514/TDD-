//
//  Franc.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Franc_h
#define TDD__Franc_h

class Franc{
public:
    Franc(int amount);
    Franc(const Franc& dollar);
    ~Franc(){}
    
    bool operator==(const Franc& franc) const
    {
        return m_amount == franc.m_amount;
    }
    
    Franc times(int multiplier);
    
    bool
    equals(const Franc& franc);
    
private:
    int m_amount;
};

#endif
