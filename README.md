# ARMA3_Mission_SpotterTrain
My first ARMA 3 mission. 

Can be used for training your spotter skills.

Dialogs for target setting and artillery firing adjustment can be found in dialogs.hpp file.

s1 and s2 scripts are used to create these dialogues.

setTargetAndFirstAttack.sqf is used to set your target coordinates and make the first shot.

correctFire.sqf is used to adjust the setting of the artillery and to carry out the next shot.

strike.sqs script is used to implement every new shot.

-------------------------------------------------------------------------
Еhe purpose of the mission is вestroy the enemy helicopter for as few adjustments as possible.

Adjustment is set by specifying the projectile deviation from the target in meters.

Adjustment is set relative to the position of the spotter and target.

To make first shot you should use "alpha" radio commmand.

To make adjusted shot you should use "bravo" radio commmand.

If you want to exit mission you always can use "charlie" radio commmand.

-------------------------------------------------------------------------
You can also see my demonstration here:
https://youtu.be/oOPo1B2HvEE
