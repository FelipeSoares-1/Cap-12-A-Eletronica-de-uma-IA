# TODO

## 1. Setup and Initialization

- [x] Set up the ESP32 board on Wokwi simulator.
- [x] Integrate all four sensors (DHT22, HC-SR04, PIR, and LDR) in the simulation environment.
- [x] Create a GitHub repository for the project.
  - [ ] Structure the repository into `/src`, `/docs`, and `/tests` folders.
  - [ ] Include a `README.md` file with the initial project overview.

## 2. Sensor Data Collection
- [ ] Write code for DHT22 sensor to measure temperature and humidity.
- [ ] Implement HC-SR04 sensor for monitoring water levels.
- [ ] Set up PIR sensor to detect motion (e.g., animals or intruders).
- [ ] Integrate LDR sensor to measure sunlight intensity.

## 3. Core Functionalities

### 3.1 Monitoring and Alerts
- [ ] Implement monitoring of temperature and humidity (DHT22).
- [ ] Set up automatic decision-making for irrigation based on the climate data.
- [ ] Create alerts for unusual temperature or humidity levels.

### 3.2 Irrigation System

- [ ] Implement water level control using the HC-SR04 sensor.
- [ ] Automate irrigation based on water availability and sensor feedback.

### 3.3 Security Feature

- [ ] Write code for motion detection using the PIR sensor.
- [ ] Set up alerts or responses when motion is detected.

### 3.4 Light-Based Irrigation Adjustment

- [ ] Implement light intensity measurement (LDR).
- [ ] Adjust irrigation based on sunlight exposure.

## 4. Testing

- [ ] Write test cases for all sensor data collection functions.
- [ ] Validate automatic decision-making for irrigation and alerts.
- [ ] Test motion detection responses and adjust sensitivity.
- [ ] Test light-based irrigation adjustments.

## 5. Documentation

- [ ] Complete detailed documentation in `/docs`.
  - [ ] Include descriptions of sensors and their roles.
  - [ ] Add wiring diagrams or circuit design for each sensor.
  - [ ] Provide instructions for running the project in Wokwi.
  - [ ] Detail the steps for installation and dependencies.
- [ ] Ensure the `README.md` includes:
  - [ ] Project objective.
  - [ ] Circuit diagram.
  - [ ] Sensor roles and functions.
  - [ ] Instructions for Wokwi setup and simulation.
  - [ ] Test results with serial monitor screenshots.

## 6. Version Control

- [ ] Make regular commits with clear descriptions.
- [ ] Use a separate branch (e.g., `develop`) for development.
- [ ] Submit Pull Requests for review before merging to `main`.

## 7. Final Submission

- [ ] Post the GitHub link to the student portal by the deadline.
