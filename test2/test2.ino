// 29082020  Goktug Unver github.com
 
#include "LedControl.h"
// Arduino Pin 10 to DIN, 11 to LOAD/CS, 12 to Clk, no.of devices is 1
LedControl lc = LedControl(12,11,10,1);
 
//---------------------------- DEĞİŞKENLER -------------------------------//
signed long cevrim = 2023;
 
char ekran[8] = {8};                                                       // 8 display
int index = 0;




//--------------------------- EKRANI AYARLA ------------------------------//

void ekran_ayarla()
{   
  index = 0;
  for (int i = 0; i < String(cevrim).length(); i++)
  {
    char inChar = (char)String(cevrim)[i];                                // tek bir byte oku
    switch(index)
    {
      case 0:                 // 1.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ' ';       // değer yoksa display boş gözüksün
        ekran[4] = ' ';       // değer yoksa display boş gözüksün
        ekran[3] = ' ';       // değer yoksa display boş gözüksün
        ekran[2] = ' ';       // değer yoksa display boş gözüksün
        ekran[1] = ' ';       // değer yoksa display boş gözüksün
        ekran[0] = inChar;
        break;
        
      case 1:                 // 2.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ' ';       // değer yoksa display boş gözüksün
        ekran[4] = ' ';       // değer yoksa display boş gözüksün
        ekran[3] = ' ';       // değer yoksa display boş gözüksün
        ekran[2] = ' ';       // değer yoksa display boş gözüksün
        ekran[1] = ekran[0];  // 1.okunan katakteri 2.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 2:                 // 3.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ' ';       // değer yoksa display boş gözüksün
        ekran[4] = ' ';       // değer yoksa display boş gözüksün
        ekran[3] = ' ';       // değer yoksa display boş gözüksün
        ekran[2] = ekran[1];  // 1.okunan katakteri 3.displaye kaydır
        ekran[1] = ekran[0];  // 2.okunan katakteri 2.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 3:                 // 4.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ' ';       // değer yoksa display boş gözüksün
        ekran[4] = ' ';       // değer yoksa display boş gözüksün
        ekran[3] = ekran[2];  // 1.okunan katakteri 4.displaye kaydır
        ekran[2] = ekran[1];  // 2.okunan katakteri 3.displaye kaydır
        ekran[1] = ekran[0];  // 3.okunan katakteri 2.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 4:                 // 5.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ' ';       // değer yoksa display boş gözüksün
        ekran[4] = ekran[3];  // 1.okunan katakteri 4.displaye kaydır
        ekran[3] = ekran[2];  // 2.okunan katakteri 3.displaye kaydır
        ekran[2] = ekran[1];  // 3.okunan katakteri 2.displaye kaydır
        ekran[1] = ekran[0];  // 4.okunan katakteri 1.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 5:                 // 6.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ' ';       // değer yoksa display boş gözüksün
        ekran[5] = ekran[4];  // 1.okunan katakteri 5.displaye kaydır
        ekran[4] = ekran[3];  // 2.okunan katakteri 4.displaye kaydır
        ekran[3] = ekran[2];  // 3.okunan katakteri 3.displaye kaydır
        ekran[2] = ekran[1];  // 4.okunan katakteri 2.displaye kaydır
        ekran[1] = ekran[0];  // 5.okunan katakteri 1.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 6:                 // 7.karakter okunduğunda
        ekran[7] = ' ';       // değer yoksa display boş gözüksün
        ekran[6] = ekran[5];  // 1.okunan katakteri 6.displaye kaydır
        ekran[5] = ekran[4];  // 2.okunan katakteri 5.displaye kaydır
        ekran[4] = ekran[3];  // 3.okunan katakteri 4.displaye kaydır
        ekran[3] = ekran[2];  // 4.okunan katakteri 3.displaye kaydır
        ekran[2] = ekran[1];  // 5.okunan katakteri 2.displaye kaydır
        ekran[1] = ekran[0];  // 6.okunan katakteri 1.displaye kaydır
        ekran[0] = inChar;
        break;
        
      case 7:                 // 8.karakter okunduğunda
        ekran[7] = ekran[6];  // 1.okunan katakteri 7.displaye kaydır
        ekran[6] = ekran[5];  // 2.okunan katakteri 6.displaye kaydır
        ekran[5] = ekran[4];  // 3.okunan katakteri 5.displaye kaydır
        ekran[4] = ekran[3];  // 4.okunan katakteri 4.displaye kaydır
        ekran[3] = ekran[2];  // 5.okunan katakteri 3.displaye kaydır
        ekran[2] = ekran[1];  // 6.okunan katakteri 2.displaye kaydır
        ekran[1] = ekran[0];  // 7.okunan katakteri 1.displaye kaydır
        ekran[0] = inChar;
        break;
    }
    index++;
  }
}
 
//--------------------------- KONFİGURASYON ------------------------------//
void setup()
{
  // Initialize the MAX7219 device
  lc.shutdown(0,false);                                                   // display i aktif et
  lc.setIntensity(0,10);                                                   // parlaklık ayarı (0 is min, 15 is max)
  lc.clearDisplay(0);                                                     // bufferı sil
 
  ekran_ayarla();
 
  for (int i = 0; i < String(cevrim).length(); i++)                       // çevrim uzunluğu kadar döngü yap
  {
    lc.setDigit(0,i,(String(ekran[i])).toInt(),false);                    // (grup no, digit no, data, point) eğer true ise point yanar
  }
}
 
//---------------------------- ANA PROGRAM -------------------------------//
void loop()
{
  cevrim++;
  ekran_ayarla();
  lc.clearDisplay(8);                                                     // digitlerin bufferını temizle
  delay(1000);
}
