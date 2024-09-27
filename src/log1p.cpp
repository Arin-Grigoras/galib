#include "../include/math/log1p.h"


#ifdef __STDC__
    float glb_log1pf(float x)
#else
    float glb_log1pf(x)
    float x;
#endif
{
    if(x <= -1.0f){
        std::stringstream os;
        os << "Invalid input argument (" << x 
        << "); must be greater than -1.0";
        throw std::invalid_argument( os.str() );
    }
    if(abs(x) > 1e-4){
        return __builtin_logf(1.0f + x);
    }
    return (-0.5*x + 1.0) * x;
}