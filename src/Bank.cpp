//
//  Bank.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include "Bank.h"
#include "Sum.h"

Money* 
Bank::reduce(Expression* source,std::string to)
{
    return source->reduce(to);
}