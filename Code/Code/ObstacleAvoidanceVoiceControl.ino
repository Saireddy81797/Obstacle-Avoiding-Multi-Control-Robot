void voicecontrol() {

//gets the serial communication values and puts them into the char variable.
  if (Serial.available() > 0) {
    value = Serial.read();
    Serial.println(value);

//If the char value is "^", the car moves forward.
    if (value == '^') {
      forward();

//If the char value is "-", the car moves backward.
    } else if (value == '-') {
      backward();

//If the char value is "<", the car moves left.
    } else if (value == '<') {
      L = leftsee();
      servo.write(spoint);
      if (L >= 10 ) {
        left();
        delay(500);
        Stop();
      } else if (L < 10) {
        Stop();
      }

//If the char value is ">", the car moves right.
    } else if (value == '>') {
      R = rightsee();
      servo.write(spoint);
      if (R >= 10 ) {
        right();
        delay(500);
        Stop();
      } else if (R < 10) {
        Stop();
      }

//If the char value is "*", the car is stopped.
    } else if (value == '*') {
      Stop();
    }
  }
}
