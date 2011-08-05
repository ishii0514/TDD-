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
    ~Dollar(){}
    
    Dollar* times(int multiplier);
    
    bool
    equals(const Dollar& dollar);
    
    int m_amount;
};


#endif
