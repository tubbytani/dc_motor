int pin=9;
int speeds;
void setup() {
pinMode(pin,OUTPUT);
Serial.begin(9600);
Serial.println("enter speed value between 0 to 255: ");  
}

void loop() {
speeds=Serial.parseInt();
if((speeds>=0)&&(speeds<=255))
analogWrite(pin,speeds); 

}
