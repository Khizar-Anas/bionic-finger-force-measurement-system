int FSR;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float FSR =  analogRead(A0);
  //float voltage = (FSR * (5.0 / 1023.0));
 // float weight = pow(10,(voltage-4.2125)/0.5155);
  //if (voltage <= 0){
  //  weight = 0;  
  //}
  //if (voltage >= 100 && voltage <= 700){
  //   weight = (((voltage - 113.88)/2.4553));  
  //}
  //if (voltage > 700){
  //   weight = (((voltage - 702.0576)/0.010608));  
  //}

  Serial.println(FSR);
  delay(1000);
}
