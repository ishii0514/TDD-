//
//  DollarTest.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <limits.h>
#include "../src/Dollar.h"
#include "gtest/gtest.h"


TEST(DollarTest, TEST001) {
    Dollar five(5);
    
    Dollar* product = five.times(2);
    EXPECT_EQ(10, product->m_amount);
    delete  product;

    product = five.times(3);
    EXPECT_EQ(15, product->m_amount);
    delete  product;
}
TEST(DollarTest,Equality){
    Dollar five(5);
    Dollar five2(5);
    Dollar six(6);
    EXPECT_TRUE(five.equals(five2));
    EXPECT_FALSE(five.equals(six));
    
}