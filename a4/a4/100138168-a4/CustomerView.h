//
//  CustomerView.hpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-14.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef CustomerView_H
#define CustomerView_H

#include <stdio.h>
#include "View.h"

class CustomerView : public View
{
public:
    CustomerView(Layout * layout);
    void render();
    void add(Product *products, int quant);
};

#endif /* CustomerView_h*/
