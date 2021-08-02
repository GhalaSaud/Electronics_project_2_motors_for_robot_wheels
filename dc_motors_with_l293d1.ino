int Enable34 = 2; 

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

}