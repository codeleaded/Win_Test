#include <math.h>

#ifdef __linux__
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Container/Vector.h"
#endif
#ifdef _WIN64
#include "C:/Wichtig/System/Static/Library/WindowEngine1.0.h"
#include "C:/Wichtig/System/Static/Container/Vector.h"
#endif

void Setup(AlxWindow* w){
    
}

void Update(AlxWindow* w){
    Clear(GREEN);
}

void Delete(AlxWindow* w){
    
}

int main(){
    if(Create("Game Test",400,300,4,4,Setup,Update,Delete))
        Start();
    return 0;
}