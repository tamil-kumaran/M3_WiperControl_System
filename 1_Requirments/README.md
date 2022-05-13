# WIPER CONTROL SYSTEM
## INTRODUCTION :
In vehicles, a wiper control system uses an electronic component to replace the typical wiper blade. A single switch in the ACC position will control the ignition button (on the motor) with this design. With a second push, switch on the wiper system, then change the wiper speed with a third press, and then turn off the motor with a fourth press. LEDs and a simulation tool were used to accomplish this. A wiper is an important component that removes rain or any other liquid from a vehicle's windscreen. The former system needed manual wiper activation, which was difficult to do. As a result, this technology is being touted as a potential solution to these issues.The project's objectives are to provide wiping systems for older cars, enhance the system by employing actuators and pull switches (using the same switch for many purposes by stepwise switching), and regulate engine and wiper speed with a single switch. In reaction to the quantity of rain, this system controls the wiper's working speed. The major function of the Wiper Speed Control System is to remove rain air drops from the vehicle's front screen. It is found in all types of vehicles.

![wiper](https://user-images.githubusercontent.com/101053082/168267517-14051f89-f7b7-4a8b-a45e-e13e81693d18.jpg)
## WORKING  :
Assuming that the automobile is the microcontroller(STM32F407VG). If the button is pressed , the first led (red) will turn on, Clicking again the wiper will starts , and the second led (blue) will turn on for a desired rate. If the button is pressed again , the third led (green) will turn on, and the wiper's speed will be increased in comparison to the previous one. The fourth press will turn on the fourth led (orange) , and the wiper speed will be increased in accordance with the previous one. The microcontroller (vehicle) is turned off after the fifth click of the button.
## SOFTWARE USED:
 1.STM32Cube IDE 
 2.Windows Build Tools
 3.OpenOCD
 4.QEMU
