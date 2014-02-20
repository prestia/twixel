#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "Tweet.h"


using namespace twixel;

static value twixel_tweet(value message, value url){
    const char* cStr = val_get_string(message);
    const char* cStr2 = val_get_string(url);
    if (twixel::Tweet(cStr,cStr2))
        return val_true;
    return val_false;
}
DEFINE_PRIM(twixel_tweet, 2);

extern "C" void twixel_main () {
	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (twixel_main);



extern "C" int twixel_register_prims () { return 0; }