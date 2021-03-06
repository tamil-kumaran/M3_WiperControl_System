#     WIPER CONTROL SYSTEM
# ABSTRACT :

A wiper is an important factor that removes rainfall or any other liquid from the windscreen of a vehicle. Previously, the wipers had to be manually activated by adjusting the frequency. The operation of increasing wiper speed is modified as a consequence of the outcomes. The project's purpose is to give automatic transmission to older automobiles in order to enhance their systems. wiping system, to enhance the system by including a sensor and actuator, and to design a basic programme that could run the system entirely. structure The principle of operation of this suggested wiper system is similar to those of other conventional wipers now in use. Regardless, To remove water from the windscreen, this system will be updated to an automated control system that will use a Peripheral Interface.
## INTRODUCTION :
In vehicles, a wiper control system uses an electronic component to replace the typical wiper blade. A single switch in the ACC position will control the ignition button (on the motor) with this design. With a second push, switch on the wiper system, then change the wiper speed with a third press, and then turn off the motor with a fourth press. LEDs and a simulation tool were used to accomplish this. A wiper is an important component that removes rain or any other liquid from a vehicle's windscreen. The former system needed manual wiper activation, which was difficult to do. As a result, this technology is being touted as a potential solution to these issues.The project's objectives are to provide wiping systems for older cars, enhance the system by employing actuators and pull switches (using the same switch for many purposes by stepwise switching), and regulate engine and wiper speed with a single switch. In reaction to the quantity of rain, this system controls the wiper's working speed. The major function of the Wiper Speed Control System is to remove rain air drops from the vehicle's front screen. It is found in all types of vehicles.

![wiper](https://user-images.githubusercontent.com/101053082/168267517-14051f89-f7b7-4a8b-a45e-e13e81693d18.jpg)
## WORKING  :
Assuming that the automobile is the microcontroller(STM32F407VG). If the button is pressed , the first led (red) will turn on, Clicking again the wiper will starts , and the second led (blue) will turn on for a desired rate. If the button is pressed again , the third led (green) will turn on, and the wiper's speed will be increased in comparison to the previous one. The fourth press will turn on the fourth led (orange) , and the wiper speed will be increased in accordance with the previous one. The microcontroller (vehicle) is turned off after the fifth click of the button.
## SOFTWARE USED:
 1. STM32Cube IDE 
 2. Windows Build Tools
 3. OpenOCD
 4. QEMU
## COMPONENTS :
STM32F4O7VG MICROCONTROLLER BOARD
## DESCRIPTION:
The STM32F405xx and STM32F407xx family is based on the high-performance Arm?? Cortex??-M4 32-bit RISC core operating at a frequency of up to 168 MHz. The Cortex-M4 core features a Floating point unit (FPU) single precision which supports all Arm single-precision data-processing instructions and data types.
## FEATURES Of STM32F407G
1. Board power is supplied through USB or an external 5 V supply source.
2. V and 5 V external application power supply.
3. Compact Flash, SRAM, PSRAM, NOR, and NAND memories are supported by this flexible static memory controller.
4. Sleep, Stop, and Standby modes are low-power modes.
5. 16-stream DMA controller with FIFOs and burst support for general-purpose DMA.
6. Up to 54 Mbytes/s 8- to 14-bit parallel camera interface.
7. Generator of true random numbers.
8. Hardware calendar, CRC calculating unit, 96-bit unique ID RTC, subsecond accuracy.
# 4'W & 1'H
## WHAT:
Windscreen wipers are required for the driver to have a clear vision, especially in modern high-speed vehicles.
## WHY:
Maintain a clean windscreen that allows for a clear vision at all times.
## WHEN:
The windshield wipers clear the windshield of rain and snow, while the headlights increase vision at night.
## WHO:
Anyone who wishes to be safe and have clear visibility in bad weather.
# SWOT Analysis
## Strength
1. Visibility
2. The wiper does not stop in the middle of the window during drive.
3. Safety
## Weakness
1. High cost
2. Not automatic
## Opportunities
1. Rain sensing and automatic operation can be implemented as further enhancement.
2. Possibilities for safety and health Promotional Opportunities Installing a wiper system necessitates an increase.
## Threats
1. Once the board repaired cannot be replaced quickly.
2. It has been replaced by advanced technology. Wiper mix might be an issue in the rain.
# REQUIREMENTS
##  HIGH LEVEL TEST CASES :

|	Description | Exp.o/p |	Actual status |	Output |
|:-----------------|:----------|:---------------|:----------|
|	 if the BUTTON is pressed	|	Engine starts	|RED LED ON	|PASS|
|	 if the BUTTON is pressed	|	Wiper starts	|BLUE LED ON	|PASS|
|	 if the BUTTON is pressed	|	Wiper starts	|GREEN LED ON	|PASS|
|	 if the BUTTON is pressed	|	Wiper starts	|ORANGE LED ON	|PASS|
|	 if the BUTTON is pressed |	Engine stop	|RED LED OFF	|PASS|





# LOW LEVEL TEST CASES :
|	Description |	Exp.o/p	|Actual status	| Output|
|:-------------|:----------|:----------|:-------|
|	if the BUTTON is pressed      |	Engine starts	| RED LED ON	                                  |PASS|
|	 if the BUTTON is pressed again|		Wiper starts and runs at 35% (slow)	| BLUE LED ON	      |PASS|
|	 if the BUTTON is pressed again|		Wiper starts and runs at 70%	(medium)| GREEN LED ON	      |PASS|
|	 if the BUTTON is pressed again|	Wiper starts and runs at 100% (fast)|ORANGE LED ON	    |PASS|
|	 if the BUTTON is pressed again| Engine stop	| RED LED OFF                                |PASS|
# STM32F407G BOARD:
 ![Components](https://user-images.githubusercontent.com/101053082/168285550-ae60b718-d4e9-4bfe-915d-1ed5ac6d7954.png)
# OUTPUT:
## WIPER ON STAGE:
![1 ON STAGE](https://user-images.githubusercontent.com/101053082/168487815-db40effa-eaf5-4071-905f-70107d66d09d.png)
## WIPER LOW:
![2 WIPER  LOW](https://user-images.githubusercontent.com/101053082/168487851-58761dcf-d22c-40e9-a9c1-b48805134442.png)
## WIPER MODERATE:
![3 WIPER  MODERATE](https://user-images.githubusercontent.com/101053082/168487884-1b387519-4eb0-43cd-8631-d4ef5d611451.png)
## WIPER HIGH:
![4 WIPER  HIGH](https://user-images.githubusercontent.com/101053082/168487910-c3b866cb-6314-4687-8b7e-1e043425f4bf.png)
## WIPER OFF STAGE:
![5 OFF STATE](https://user-images.githubusercontent.com/101053082/168487939-11daa835-a167-4732-ada0-40b5f8b1f351.png)

