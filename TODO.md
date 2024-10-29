# TODO

## 1. Setup and Initialization

- [x] Set up the ESP32 board on Wokwi simulator.
- [x] Integrate all four sensors (DHT22, HC-SR04, PIR, and LDR) in the simulation environment.
- [x] Create a GitHub repository for the project.
  - [x] Structure the repository into `/src`, `/docs`, and `/tests` folders.
  - [x] Include a `README.md` file with the initial project overview.

## 2. Sensor Data Collection
- [x] Write code for DHT22 sensor to measure temperature and humidity.
- [x] Implement HC-SR04 sensor for monitoring water levels.
- [x] Set up PIR sensor to detect motion (e.g., animals or intruders).
- [x] Integrate LDR sensor to measure sunlight intensity.

## 3. Core Functionalities

### 3.1 Monitoring and Alerts
- [x] Implement monitoring of temperature and humidity (DHT22).
- [x] Set up automatic decision-making for irrigation based on the climate data.
- [x] Create alerts for unusual temperature or humidity levels.

### 3.2 Irrigation System

- [x] Implement water level control using the HC-SR04 sensor.
- [x] Automate irrigation based on water availability and sensor feedback.

### 3.3 Security Feature

- [x] Write code for motion detection using the PIR sensor.
- [x] Set up alerts or responses when motion is detected.

### 3.4 Light-Based Irrigation Adjustment

- [x] Implement light intensity measurement (LDR).
- [x] Adjust irrigation based on sunlight exposure.

## 4. Testing

- [ ] Validate automatic decision-making for irrigation and alerts.
- [ ] Test motion detection responses and adjust sensitivity.
- [ ] Test light-based irrigation adjustments.

## 5. Documentation

- [x] Complete detailed documentation in `/docs`.
  - [x] Add description about the system
  - [x] Include descriptions of sensors and their roles.
- [ ] Ensure the `README.md` includes:
  - [x] Project objective;
  - [x] Complete circuit design with the sensors used;
  - [x] Description of the role of each sensor in the system;
  - [x] How to configure and run the project on Wokwi and ESP32;
  - [x] Installation instructions and dependencies;
  - [ ] Tests performed, with prints of the Serial Monitor showing the system messages;
- [x] Well-commented code, explaining the logic behind the main functions and the integration between the sensors.

## 6. Version Control

- [x] Make regular commits with clear descriptions.
- [x] Use a separate branch (e.g., `develop`) for development.
- [ ] Submit Pull Requests for review before merging to `main`.

## 7. Final Submission

- [ ] Post the GitHub link to the student portal by the deadline.
