/*
 * PWM
 */

/*
 * PWM Pins : 3, 5, 6, 9, 10, 11
 */

int pwm_pins[6] = { 3, 5, 6, 9, 10, 11 };

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  
  int i;
  static uint8_t pwm_out = 0;

  // analogWrite is used to output the PWM duty ratio 
  // to the corresponding ports

  // The resolution is 8 bits, from 0 to 255, and the 
  // frequency is 50 KHz.

  for( i=0; i<6; i++ )
  {
    analogWrite(pwm_pins[i], pwm_out++);
  }
  
  delay(100);
  
}
