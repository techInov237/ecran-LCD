// pour les connexions des broches; connecter la broche SDA au pin analogique A4 et la broche SCL au pin A5!    
// les broches VCC et GND serons connectées normalement aux pin 5V et GND

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Salut Salut! ici");
  lcd.setCursor(2,1);
  lcd.print("Tech Inov 237");
}


void loop()
{
}
