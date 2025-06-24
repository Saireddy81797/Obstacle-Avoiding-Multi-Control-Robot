void Bluetoothcontrol() {
//gets the serial communication values and puts them into the char variable.
  if (Serial.available() > 0) {
    value = Serial.read();
    Serial.println(value);
  }
//Next, these values are checked using the IF condition. 
//Then, if the char value is 'F', the car moves forward. 
  if (value == 'F') {
    forward();
//If the char value is "B", the car moves backward.
  } else if (value == 'B') {
    backward();
//If the char value is "L", the car moves left.
  } else if (value == 'L') {
    left();
//If the char value is "R", the car moves right.
  } else if (value == 'R') {
    right();
//If the char value is "S", the car is stopped.
  } else if (value == 'S') {
    Stop();
  }
}

This function includes the obstacle-avoiding code. The code lines are described one by one in the code.Obstacle avoidance system

void Obstacle() {

//gets the ultrasonic sensor reading and puts it into the variable.
  distance = ultrasonic();

//then, these values are checked using the IF condition.
//If the value is less than or equal to 12, 
//the robot is stopped and the servo motor rotate left and right.
// Also, gets both side distance.
  if (distance <= 12) {
    Stop();
    backward();
    delay(100);
    Stop();
    L = leftsee();
    servo.write(spoint);
    delay(800);
    R = rightsee();
    servo.write(spoint);

//After, if the left side distance less than the right side distance. The robot turns right.
    if (L < R) {
      right();
      delay(500);
      Stop();
      delay(200);

//After, if the left side distance more than the right side distance. The robot turns left.
    } else if (L > R) {
      left();
      delay(500);
      Stop();
      delay(200);
    }

//Otherwise, the robot moves forward.
  } else {
    forward();
  }
}
