#include "blob.h"

namespace simpleNN {

Blob::Blob()
{
    producer = -1;
    consumer = -1;
    shape = Mat();
}

} 