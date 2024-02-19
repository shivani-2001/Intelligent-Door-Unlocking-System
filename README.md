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
<p>Microcontroller (e.g., Arduino, Raspberry Pi, In our case we used Arduino), RFID Reader Module, IR Receiver and Remote, Ultrasonic Distance Sensor, Servo Motor (for lock mechanism), Power Supply, Miscellaneous: Cables, Breadboard, etc.</p>

<h2>Software Requirements</h2>
<p>Arduino IDE or any relevant development environment compatible with your microcontroller. Libraries: RFID library, IR Remote library, Servo library (most can be found within the IDE or online).</p>


<h2>Usage</h2>
<p>- <strong>Distance Unlock</strong>: Simply approach the door. If you are within the authorized distance range, the door will unlock automatically.<br>
- <strong>RFID Unlock</strong>: Swipe your RFID-tagged device near the reader to unlock the door.<br>
- <strong>IR Remote Unlock</strong>: Use the provided IR remote to send an unlock signal to the system.<br>
- <strong>Emergency Unlock</strong>: Activate the emergency unlock feature through a specific button on the IR remote or a dedicated mechanism (detailed in the <code>emergency_feature_guide.md</code>).</p>


<h2>Acknowledgments</h2>
<p>A special thank you to the team members Ali Hassan, Muhammad Awais Saleem, and Peter Yeates who contributed to this project during the hackathon. Your hard work and dedication made this project a success.</p>
