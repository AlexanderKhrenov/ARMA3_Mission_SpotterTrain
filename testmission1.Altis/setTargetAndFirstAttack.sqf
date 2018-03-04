disableSerialization;
correctionsAmount = 0;

_display = findDisplay 111;

targetX = parseNumber((ctrlText (_display displayCtrl 1400)) + "00");
targetY = parseNumber((ctrlText (_display displayCtrl 1401)) + "00");
playerDirection = parseNumber(ctrlText (_display displayCtrl 1402));
playerPosition = getPos player1;

systemChat "Target coordinates are: ";
systemChat format ["%1, %2", targetX, targetY];
systemChat "Player coordinates are: ";
systemChat format ["%1, %2", playerPosition, playerDirection];

_wait = 30 - (random 15);
sleep _wait;

[targetX, targetY, 1, 200]exec 'strike.sqs';