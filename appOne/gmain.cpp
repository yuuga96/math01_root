#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;  //letはintとfloatと同じ
    let length = 0;     //一辺の長さ
    while (notQuit) {
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A)) {
            --area;
        }
        
        length = sqrt(area);
     
        clear(140);

        mathAxis(4.1);
        fill(120, 120, 220);
        mathRect(0, 0, length, -length);

        textSize(50);
        text("面積 =" + area, 0, 60);
        text("√ =" + length, 0, 120);

       
    }
}