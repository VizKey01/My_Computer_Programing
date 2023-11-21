#include <iostream>
using namespace std;

int main() {
    // 1 bytes = 8 bits -> 0 1
    
    // ชนิดตัวแปร 
    // int    -> 1 0 2 3 4 (4 bytes) 
    // long long -> upgrade int (16 bytes)
    // float  -> 1.1 2.356 0.123156 0.123456789(เก็บได้แค่ทศนิยม 6 จุด) (4 bytes)
    // double -> ทศนิยม >6 จุด (8 bytes)
    // char   -> a s b -> 'a' 's' 'b' (1 bytes)
    // string -> ประโยค ex helloworld -> "helloworld" (2 bytes)
    
    // comment ทีละบรรทัด '//'
    /*
        comment หลายบรรทัด 
    */

    // อย่าลืมทุกคำสั่งต้องมี ";" ต่อท้าย

    /* กฏการตั้งชื่อตัวแปร
    - ห้าม ตั้งชื่อตัวแปรซ้ำกับชนิดตัวแปร int, char
    - ห้าม ตั้งชื่อตัวแปรเหมือนคำสั่ง +,- ,* ,/ , cin, cout
    - ห้าม ตั้งชื่อตัวแปรเว้นวรรค
    - ห้าม ตั้งชื่อตัวแปรซ้ำกับอันที่มีอยู่แล้ว
    */

    int fuji01;
    fuji01 = 50000000;
    string fuji02 = "hello world";
    cout << fuji02; 
    
    // NULL = empty = '\0';
    // cin >> x ;    // enter กับ spacebars 
    // getline(cin, x); // enter
    
    return 0;
} 

/*

#include <iostream>
using namespace std;

int main() {
    
    return 0;
}

*/