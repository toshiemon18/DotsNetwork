#include "Dots.h"

class Spring {

    public:
        
        Dots from;
        Dots to;
        float restLength = 100;  // 自然長
        float stiffness = 0.2;  // ばね定数k
        float dampingVal = 0.2  // 収縮時の減衰率
        
        Spring(Dots f, Dots t);
        void update();


}
