#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;  //let��int��float�Ɠ���
    let length = 0;     //��ӂ̒���
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
        text("�ʐ� =" + area, 0, 60);
        text("�� =" + length, 0, 120);

       
    }
}