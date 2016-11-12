#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>

class Reader{
  public:
    Reader(int sda, int reset);
    void setup();

  private:
    MFRC522* reader;
};
