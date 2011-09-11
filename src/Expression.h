//
//  Expression.h
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Expression_h
#define TDD__Expression_h

class Money;

class Expression
{
public:
    virtual Money*
    reduce(std::string to) =0;
};

#endif
