#include <iostream>
using namespace std;


class PowerSystem {
public:
    void powerOn() {
        cout << "Включение питания стиральной машины" << endl;
    }


    void powerOff() {
        cout << "Выключение питания стиральной машины" << endl;
    }
};

class WaterSystem {
public:
    void fillWater() {
        cout << "Наполнение стиральной машины водой" << endl;
    }

    void drainWater() {
        cout << "Слив воды из стиральной машины" << endl;
    }
};

class SpinSystem {
public:
    void startSpin() {
        cout << "Запуск центрифугирования" << endl;
    }

    void stopSpin() {
        cout << "Остановка центрифугирования" << endl;
    }
};


class WashingMachineFacade {
private:
    PowerSystem powerSystem;
    WaterSystem waterSystem;
    SpinSystem spinSystem;

public:
    void startWashing() {
        powerSystem.powerOn();
        waterSystem.fillWater();
        spinSystem.startSpin();
        cout << "Старт стирки" << std::endl;
    }

    void stopWashing() {
        cout << "Остановка стирки" << std::endl;
        spinSystem.stopSpin();
        waterSystem.drainWater();
        powerSystem.powerOff();
    }
};



int main() {

    setlocale(0, "");

    WashingMachineFacade washingMachine;
    washingMachine.startWashing();



    washingMachine.stopWashing();

    return 0;
}
