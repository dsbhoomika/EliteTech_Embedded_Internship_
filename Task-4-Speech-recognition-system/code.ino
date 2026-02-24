String command;

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
  Serial.println("Voice Control System Ready");
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "ON") {
      digitalWrite(7, HIGH);
      Serial.println("Light Turned ON");
    }
    else if (command == "OFF") {
      digitalWrite(7, LOW);
      Serial.println("Light Turned OFF");
    }
    else {
      Serial.println("Invalid Command");
    }
  }
}
