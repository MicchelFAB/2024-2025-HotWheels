# Nvidea or RaspberryPi

## Context
The first issue regarding the Instrument Cluster project was the decision between Nvidea or RaspberryPi for the main controller of the car itself.  
  
The cars that we were provided used the Nvidea interface, but we were also provided with the necessary equipment to implement a Raspberry interface if we wanted to. Both interfaces have their pros/cons and are most suitable to do different tasks inside the project, being even possible to use them simultaneously.
  
## Decision
After some extensive research, the team concluded the best approach would be to use the Nvidea board.
  
The Nvidea's GPU and AI tools are perfect for the future modules regarding object and lane detection supporting advanced computer vision and sensor fusion tasks, and has enough processing power to run the main control operations for the others components such as motors. Besides that we can  also create a wireless connection between the Nvidea and the OLED display.  
  
Beeing so our final architecture would be something similar to this:  
[CAMERA] --> CAN-BUS --> [NVIDEA] --> CAN-BUS --> [MOTORS]  
[SENSORS] --> CAN-BUS --> [NVIDEA] --> CAN-BUS --> [MOTORS]  
[SENSORS] --> CAN-BUS --> [NVIDEA] --> Bluetooth --> [DISPLAY]  
  
## Consequences
If implemented correctly this structure would provide a much better organization of the project and efficient usage of all the components allowing them to be explored to their max potential.  
Besides that, it makes the project easier to scale if the addition of more components is necessary. 
