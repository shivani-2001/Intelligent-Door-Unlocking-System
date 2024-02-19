<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Intelligent Door Unlocking System</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        h1, h2 {
            color: #333;
        }
        p, li {
            color: #666;
        }
        code {
            background-color: #f9f9f9;
            padding: 2px 4px;
            border-radius: 4px;
            font-family: monospace;
        }
    </style>
</head>
<body>

<h1>Intelligent Door Unlocking System</h1>

<h2>Overview</h2>
<p>The Intelligent Door Unlocking System is an innovative, hardware-based project developed during a 24-hour hackathon. This project aims to enhance home security by introducing a smart, multi-modal door unlocking mechanism. It integrates Distance Sensing, RFID (Radio Frequency Identification), and IR (Infrared) Remote features, along with an emergency unlock functionality for added safety.</p>

<h2>Features</h2>
<ul>
    <li><strong>Distance Sensing</strong>: Allows for hands-free door unlocking when an authorized person is detected at a predefined distance.</li>
    <li><strong>RFID Authentication</strong>: Securely unlocks the door when an RFID-tagged device is presented, ensuring only authorized access.</li>
    <li><strong>IR Remote Control</strong>: Enables remote unlocking of the door, adding convenience and flexibility.</li>
    <li><strong>Emergency Feature</strong>: In case of emergencies, the system provides a quick unlock mechanism to ensure safety.</li>
</ul>

<h2>Hardware Requirements</h2>
<p>Microcontroller (e.g., Arduino, Raspberry Pi), RFID Reader Module, IR Receiver and Remote, Ultrasonic Distance Sensor, Servo Motor (for lock mechanism), Power Supply, Miscellaneous: Cables, Breadboard, etc.</p>

<h2>Software Requirements</h2>
<p>Arduino IDE or any relevant development environment compatible with your microcontroller. Libraries: RFID library, IR Remote library, Servo library (most can be found within the IDE or online).</p>

<h2>Installation</h2>
<ol>
    <li><strong>Set up your microcontroller</strong>: Install the Arduino IDE or appropriate software for your microcontroller.</li>
    <li><strong>Connect the hardware components</strong>: Follow the wiring diagram included in the <code>/docs</code> folder to connect the RFID reader, IR receiver, distance sensor, and servo motor to the microcontroller.</li>
    <li><strong>Install Libraries</strong>: Ensure all required libraries are installed in your IDE. This typically involves navigating to <code>Sketch &gt; Include Library &gt; Manage Libraries...</code> and searching for the required libraries.</li>
    <li><strong>Load the Code</strong>: Open the main project file (<code>intelligent_door_unlocking_system.ino</code>) in your IDE and upload it to your microcontroller.</li>
</ol>

<h2>Usage</h2>
<p>- <strong>Distance Unlock</strong>: Simply approach the door. If you are within the authorized distance range, the door will unlock automatically.<br>
- <strong>RFID Unlock</strong>: Swipe your RFID-tagged device near the reader to unlock the door.<br>
- <strong>IR Remote Unlock</strong>: Use the provided IR remote to send an unlock signal to the system.<br>
- <strong>Emergency Unlock</strong>: Activate the emergency unlock feature through a specific button on the IR remote or a dedicated mechanism (detailed in the <code>emergency_feature_guide.md</code>).</p>

<h2>Contributing</h2>
<p>We welcome contributions from the community! If you would like to contribute to the Intelligent Door Unlocking System, please follow these steps:</p>
<ol>
    <li>Fork the repository.</li>
    <li>Create a new branch for your feature (<code>git checkout -b feature/AmazingFeature</code>).</li>
    <li>Commit your changes (<code>git commit -m 'Add some AmazingFeature'</code>).</li>
    <li>Push to the branch (<code>git push origin feature/AmazingFeature</code>).</li>
    <li>Open a Pull Request.</li>
</ol>

<h2>License</h2>
<p>Distributed under the MIT License. See <code>LICENSE</code> for more information.</p>

<h2>Acknowledgments</h2>
<p>A special thank you to the team members and mentors who contributed to this project during the hackathon. Your hard work and dedication made this project a success.</p>

</body>
</html>
