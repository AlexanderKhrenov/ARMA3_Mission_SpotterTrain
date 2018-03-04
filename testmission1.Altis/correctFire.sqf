disableSerialization;

_display = findDisplay 112;

correctionLeft = parseNumber(ctrlText (_display displayCtrl 1400));
correctionRight = parseNumber(ctrlText (_display displayCtrl 1401));
correctionOver = parseNumber(ctrlText (_display displayCtrl 1403));
correctionUnder = parseNumber(ctrlText (_display displayCtrl 1402));

correctionX0 = correctionLeft + (-1)*correctionRight; //like correction vector coordinates in player-target coordinates system (where target is (0.0))
correctionY0 = (-1)*correctionOver + correctionUnder;

correctionX = correctionX0*cos(playerDirection)+correctionY0*sin(playerDirection); //correction vector coordinates
correctionY = correctionY0*cos(playerDirection)-correctionX0*sin(playerDirection);

correctedX = correctionX + lastStrikeX; //corrected point
correctedY = correctionY + lastStrikeY;

correctionsAmount = correctionsAmount + 1;

_wait = 30 - (random 15);
sleep _wait;

[correctedX, correctedY, 1, 0]exec 'strike.sqs';