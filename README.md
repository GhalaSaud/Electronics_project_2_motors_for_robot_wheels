# Electronics_project_2_motors_for_robot_wheels
Control 2 DC motors  to allow the robot wheels to move by using Arduino, L239D, and battery.
### **Component List:**
1. Arduino Uno R3
2. Breadboard
3. 9V battery
4. H-bridge motor driver (L293D)

![DC motors with L293D](https://user-images.githubusercontent.com/88051753/127793365-ddc2eb1f-418f-460c-9bf6-7d8887fb9a7c.png)

![L293D](https://user-images.githubusercontent.com/88051753/127793718-f21d65ba-32ab-44e1-8c07-6f148062136d.jpg)
### **Steps:**
1. Connect power and ground to the circuit
2. Connect the H-bridge pins to digital pins in Arduino (2 to 7)
### **Code:**
`int Enable34 = 2; 

int input3 = 3; 

int input4 = 4; 

int input2 = 5; 

int input1 = 6;

int Enable12 = 7;


void setup() {

pinMode(Enable34, OUTPUT);

pinMode(input3, OUTPUT);

pinMode(input4, OUTPUT);

pinMode(input2, OUTPUT);

pinMode(input1, OUTPUT);

pinMode(Enable12, OUTPUT);

}

void loop() {

digitalWrite(Enable34, HIGH); 

digitalWrite(input3, HIGH);

digitalWrite(input4, LOW); 

digitalWrite(input2, HIGH); 

digitalWrite(input1, LOW); 

digitalWrite(Enable12, HIGH); 

}`
### **Simulation:**
https://www.tinkercad.com/things/8iVnhQwN7ap-dc-motors-with-l293d/editel?sharecode=lwUV859DC8Vzse07mW4vlsr9hC4KW63AddbpeGBTPg4 
