#pragma once
#include <iostream>
#include "point.h"

class PlaneShape {
public:
    virtual string ToString() const = 0;
    void draw() const;
    virtual ~PlaneShape() {}
};