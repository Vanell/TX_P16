#include <pin.h>

void control_Brushless(int cmd){
	analogWrite(BR_Speed_Command_pin,cmd);	
}

void setup(){

	Serial.begin(115200);

	// Pin mode
	pinMode(BR_Speed_Command_pin,OUTPUT);
	pinMode(BR_Dir_pin,OUTPUT);
	pinMode(BR_ON_OFF_pin,OUTPUT);
	pinMode(BR_Curent_limit_pin,OUTPUT);

	pinMode(BR_Encoder_out_pin,INPUT); //48 imp/tour
	pinMode(BR_Dir_out_pin,INPUT);

	digitalWrite(BR_ON_OFF_pin,HIGH);
	digitalWrite(BR_Dir_pin,HIGH);
}

void loop(){
	control_Brushless(5);
}

