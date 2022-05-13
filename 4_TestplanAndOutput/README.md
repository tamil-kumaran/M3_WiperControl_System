# TEST CASES AND CORRESPONDING OUTPUT
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
|	 if the BUTTON is pressed again| Engine stop	| RED LED OFF                                  	  |PASS|
