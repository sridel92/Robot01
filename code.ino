// 
// from http://forum.arduino.cc/index.php?topic=8652.0
//
//
//
//

#define InA1            10                  // INA motor pin
#define InB1            11                  // INB motor pin 
#define PWM1            6                   // PWM motor pin

void setup() {
 pinMode(InA1, OUTPUT);
 pinMode(InB1, OUTPUT);
 pinMode(PWM1, OUTPUT);
}

void loop() {
 motorForward(200);                        //(25%=64; 50%=127; 100%=255)
 delay(5000);

 motorStop();
 delay(2000);

 motorBackward(200);
 delay(5000);
}

void motorForward(int PWM_val)  {
 analogWrite(PWM1, PWM_val);
 digitalWrite(InA1, LOW);
 digitalWrite(InB1, HIGH);
}

void motorBackward(int PWM_val)  {
 analogWrite(PWM1, PWM_val);
 digitalWrite(InA1, HIGH);
 digitalWrite(InB1, LOW);
}

void motorStop()  {
 analogWrite(PWM1, 0);
 digitalWrite(InA1, LOW);
 digitalWrite(InB1, LOW);
}

https://www.google.com/url?sa=i&source=images&cd=&cad=rja&uact=8&ved=2ahUKEwjY17mEi5rbAhVFDewKHVPYDWYQjRx6BAgBEAU&url=http%3A%2F%2Ffritzing.org%2Fprojects%2Fworking-with-l298n-dc-motor-driver&psig=AOvVaw0TBay3930MOXx91mPbxr_i&ust=1527104806405428

