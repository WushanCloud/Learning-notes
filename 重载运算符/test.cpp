#include "boy.h"
#include "Tricycle.h"
//
//int main()
//{
//	boy boy1;
//	boy1.showboy();
//	boy boy2("ÀÏÆÅ","ÂíÎÄ½à",160);
//	boy2.showboy();
//}

int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}
