#ifndef _SIMPLENN_BLOB_H
#define _SIMPLENN_BLOB_H
#include "mat.h"

namespace simpleNN{

class Blob
{
public:
    Blob();

public:
    int producer; //输出blob
    int consumer; //输入blob
    Mat shape;
};

}
#endif