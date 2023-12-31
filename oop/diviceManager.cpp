#include <iostream>
#include "../utils.hpp"

class Device {
 public:
  std::string id;
  std::string name;
  int room;
  bool status;

  virtual void turnOn() = 0;
  virtual void turnOff() = 0;
};

class Light : public Device {
 public:
  int brightness;
};

class BrightLight : public Light {
 private:
 public:
  void turnOn() {
    std::cout << "Bat den chieu sang";
  }
};

class SleepLamp : public Light {
 public:
  std::string color;

 public:
  void turnOn() {
    std::cout << "Bat den ngu";
  }
};

class AirConditioner {
 public:
  int temperature;
  std::string mode;
  int level;

 public:
  void turnOn() {
    std::cout << "Bat dieu hoa";
  }
};

class Television : public Device {
 public:
  int volumn;
  std::string chanel;

 public:
  void turnOn() {
    std::cout << "Bat TV";
  }
};

int main() {

  int choice;
  do {
    std::cout << "===============================================================================================================\n";
    std::cout << "||                                                DIVICE MANAGEMENT                                           ||\n";
    std::cout << "||                              -------------------------------------------------------                      ||\n";
    std::cout << "||                      1. Create folder                                                                     ||\n";
    std::cout << "||                      2. Create file                                                                       ||\n";
    std::cout << "||                      3. Red-Black tree                                                                    ||\n";
    std::cout << "||                      0. Exits                                                                             ||\n";
    std::cout << "===============================================================================================================\n";
    choice = getUserChoice(1, 4, 0);
    system("cls");

    switch (choice) {
      case 1: {
        
        
        break;
      }
      case 2: {
        

        break;
      }
      default:
        break;
    }
  } while (choice != 0);
  return 0;
}
