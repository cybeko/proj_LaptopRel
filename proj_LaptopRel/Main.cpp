#include <iostream>
#include <string>
using namespace std;

class Casing
{
    string color;
    string material;
public:
    Casing()
    {
        color = "[unspecified]";
        material = "[unspecified]";
    }
    Casing(const char* a, const char* b)
    {
        color = a;
        material = a;
    }
    Casing(Casing& obj)
    {
        color = obj.color;
        material = obj.material;
    }
    void Show()
    {
        cout << "\n\tCasing" << endl;
        cout << "Color: " << color << endl;
        cout << "Material: " << material << "-inch" << endl;
    }
};
class SSD 
{
    int capacity;
    string formFactor;
public:
    SSD()
    {
        capacity = 0;
        formFactor = "[unspecified]";
    }
    SSD(int a, const char* b)
    {
        capacity = a;
        formFactor = b;
    }
    SSD(SSD& obj)
    {
        capacity = obj.capacity;
        formFactor = obj.formFactor;
    }
    void Show()
    {
        cout << "\n\tSSD" << endl;
        cout << "Capacity: " << capacity<< "GB" << endl;
        cout << "Form factor: " << formFactor << endl;
    }

};
class Motherboard
{
    int ramSlots;
    string formFactor;
public:
    Motherboard()
    {
        ramSlots = 0;
        formFactor = "[unspecified]";
    }
    Motherboard(int a, const char* b)
    {
        ramSlots = a;
        formFactor = b;
    }
    Motherboard(Motherboard& obj)
    {
        ramSlots = obj.ramSlots;
        formFactor = obj.formFactor;
    }
    void Show()
    {
        cout << "\n\tMotherboard" << endl;
        cout << "RAM slots: " << ramSlots << endl;
        cout << "Form factor: " << formFactor << endl;
    }
};
class GPU
{
    int VRAM;
    int clockSpeed;
public:
    GPU()
    {
        VRAM = 0;
        clockSpeed = 0;
    }
    GPU(int a, int b)
    {
        VRAM = a;
        clockSpeed = b;
    }
    GPU(GPU& obj)
    {
        VRAM = obj.VRAM;
        clockSpeed = obj.clockSpeed;
    }
    void Show()
    {
        cout << "\n\tGPU" << endl;
        cout << "VRAM: " << VRAM << "GB"<< endl;
        cout << "Clock speed: " << clockSpeed << endl;
    }
};
class RAM
{
    string type;
    int capacity;
public:
    RAM()
    {
        type = "[unspecified]";
        capacity = 0;
    }
    RAM(const char* a, int b)
    {
        type = a;
        capacity = b;
    }
    RAM(RAM& obj)
    {
        type = obj.type;
        capacity = obj.capacity;
    }
    void Show()
    {
        cout << "\n\tRAM" << endl;
        cout << "Type: " << type  << endl;
        cout << "Capacity: " << capacity << "GB" << endl;
    }
};
class Battery
{
    double voltage;
    int lifespan;

public:
    Battery()
    {
        voltage = 0;
        lifespan = 0;
    }
    Battery(double a, int b)
    {
        voltage = a;
        lifespan = b;
    }
    Battery(Battery& obj)
    {
        voltage = obj.voltage;
        lifespan = obj.lifespan;
    }
    void Show()
    {
        cout << "\n\tBattery" << endl;
        cout << "Volatge: " << voltage << "V" << endl;
        cout << "Lifespan: " << lifespan << " cycles" << endl;
    }
};
class Keyboard
{
    string layout;
    string highlights;

public:
    Keyboard()
    {
        layout = "[unspecified]";
        highlights = "[unspecified]";
    }
    Keyboard(const char* a, const char* b)
    {
        layout = a;
        highlights = b;
    }
    Keyboard(Keyboard& obj)
    {
        layout = obj.layout;
        highlights = obj.highlights;
    }
    void Show()
    {
        cout << "\n\tKeyboard" << endl;
        cout << "Layout: " << layout << endl;
        cout << "Highlights: " << highlights << endl;
    }
};
class Webcam
{
    int res;
    int frameRate;

public:
    Webcam()
    {
        res = 0;
        frameRate = 0;
    }
    Webcam(int a, int b)
    {
        res = a;
        frameRate = b;
    }
    Webcam(Webcam& obj)
    {
        res = obj.res;
        frameRate = obj.frameRate;
    }
    void Show()
    {
        cout << "\n\tWebcam" << endl;
        cout << "Resolution: " << res << "p"<< endl;
        cout << "Frame rate: " << frameRate << "fps" << endl;
    }
};
class Mouse
{
    string model;
    int cps;
public:
    Mouse()
    {
        model = "[unspecified]";
        cps = 0;
    }
    Mouse(const char* a, int b)
    {
        model = a;
        cps = b;
    }
    Mouse(Mouse& obj)
    {
        model = obj.model;
        cps = obj.cps;
    }
    void Show()
    {
        cout << "\n\tMouse" << endl;
        cout << "Model: " << model << endl;
        cout << "Clicks per second: " << cps << "-inch" << endl;
    }
};
class Display
{
    string res;
    int size;
    int refRate;
public:
    Display()
    {
        res = "[unspecified]";
        size = 0;
        refRate = 0;
    }
    Display(const char* a, int b, int c )
    {
        res = a;
        size = b;
        refRate = c;
    }
    Display(Display& obj)
    {
        res = obj.res;
        size = obj.size;
        refRate = obj.refRate;
    }
    void Show()
    {
        cout << "\n\tDisplay" << endl;
        cout << "Resolution: "<< res << endl;
        cout << "Size: " << size << "-inch" << endl;
        cout << "Referesh rate: " << refRate << "Hz" << endl;
    }
};
class Laptop
{
    string manufacturer;
    string model;
    int year;

    Casing casing;
    Display displ;
    Keyboard keyb;
    Motherboard motherb;
    SSD ssd;
    GPU gpu;
    RAM ram;
    Battery battery;

    Mouse* mouse;
    Webcam* webcam;

public:
    Laptop(int LaptopYear, const char* LaptopManuf, const char* LaptopModel, Display u_displ, Casing u_casing, Mouse* u_mouse, Webcam* u_webcam, Keyboard u_keyb, Motherboard u_motherb, SSD u_ssd, 
        GPU u_gpu, RAM u_ram, Battery u_battery) : battery(u_battery), ram(u_ram), gpu(u_gpu), motherb(u_motherb), ssd(u_ssd), keyb(u_keyb), webcam(u_webcam), displ(u_displ), casing(u_casing), mouse(u_mouse)
    {
        year = LaptopYear;
        manufacturer = LaptopManuf;
        model = LaptopModel;
    }
    void Show()
    {
        cout << "\tBasic info" << endl;
        cout << "Year: "<< year << endl;
        cout << "Model: " << model << endl;
        cout << "Manufacturer: " << manufacturer << endl;

        casing.Show();
        displ.Show();
        keyb.Show();
        ssd.Show();
        motherb.Show();
        gpu.Show();
        ram.Show();
        battery.Show();

        mouse->Show();
        webcam->Show();
    }
    ~Laptop()
    {
        //cout << "Destruct\n";
    }
};

int main()
{
    Display displ("1920x1080",16,120);
    Casing casing("Grey", "Aluminum");
    Mouse mouse("Fanteh WG10 Raigor II", 10);
    Webcam webcam(720,60);
    Keyboard keyb("QWERTY", "No");
    SSD ssd(512, "M.2");
    Motherboard motherb(4, "Micro ATX");
    GPU gpu(8, 1607);
    RAM ram("DDR4", 16);
    Battery battery(3.7, 400);

    Laptop* ptr = new Laptop(2018, "Dell", "Inspiron 3520 (I3538S2NIL-20B)", displ, casing, &mouse, &webcam, keyb, motherb, ssd, gpu, ram, battery);

    ptr->Show();

    delete ptr;
}