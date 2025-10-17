%%IGN_Status_Signal
IGN_OFF=0;
IGN_ACC=1;
IGN_ON=2;
IGN_IGNST=3;
%%TurnLightMode
MODE_NOREQUEST=0;
MODE_THREE=1;
MODE_LONG=2;
MODE_DOUBLE=3;
%%TurnLampSw_Signal
NOREQUEST=0;
TURN_LEFT=1;
TURN_RIGHT=2;
%%HazardReq
HAZARD_OFF=0;
HAZARD_ON=1;
%%HazardSw_Signal
HAZARD_INACTIVE=0;
HAZARD_ACTIVE=1;
%%VehicleSpeed_Valid_Signal
ACTIVE=1;
INACTIVE=0;
%%TurnLamp
NOMAL=0;
SHORT=1;
OPEN=2;
%%TurnLampCtrlCmd_FL_Signal
ON=0;
OFF=1;



Simulink.defineIntEnumType( 'ComplexTurnLightPosition', ...
{'POS_NOREQUEST','LEFT','RIGHT','ALL','FRONT_LEFT','MIDDLE_LEFT','REAR_LEFT','FRONT_RIGHT','MIDDLE_RIGHT','REAR_RIGHT'}, ...
   [0 1 2 3 4 5 6 7 8 9], ...
   'DefaultValue', 'POS_NOREQUEST', ...
   'StorageType', 'uint8', ...
   'HeaderFile', 'Rte_Type.h', ...
   'AddClassNameToEnumNames', false);

Simulink.defineIntEnumType( 'ComplexTurnLightOnOff', ...
{'ONOFF_NOREQUEST','OFF','ON'}, ...
   [0 1 2], ...
   'DefaultValue', 'ONOFF_NOREQUEST', ...
   'StorageType', 'uint8', ...
   'HeaderFile', 'Rte_Type.h', ...
   'AddClassNameToEnumNames', false);

P_TurnLightService_Ctrl_Oeration = Simulink.Parameter;
saveVarsTmp{1} = struct;
saveVarsTmp{1}.TurnLightPosition = ComplexTurnLightPosition.POS_NOREQUEST;
saveVarsTmp{1}.TurnLightOnOff = ComplexTurnLightOnOff.ONOFF_NOREQUEST;
saveVarsTmp{1}.TurnLightDutyCycle = uint8(0);
saveVarsTmp{1}.TurnLightCycle = uint8(0);
saveVarsTmp{1}.TurnLightTimes = uint8(0);
saveVarsTmp{1}.TurnLightNumber = uint8(0);
saveVarsTmp{1}.TurnLightPriority = uint8(0);
P_TurnLightService_Ctrl_Oeration.Value = saveVarsTmp{1};
P_TurnLightService_Ctrl_Oeration.CoderInfo.StorageClass = 'Auto';
P_TurnLightService_Ctrl_Oeration.Description = '';
P_TurnLightService_Ctrl_Oeration.DataType = 'Bus: TurnLightService';
P_TurnLightService_Ctrl_Oeration.Min = [];
P_TurnLightService_Ctrl_Oeration.Max = [];
P_TurnLightService_Ctrl_Oeration.DocUnits = '';
clear saveVarsTmp;

TurnLightService = Simulink.Bus;
TurnLightService.Description = '';
TurnLightService.DataScope = 'Auto';
TurnLightService.HeaderFile = 'Rte_Type.h';
TurnLightService.Alignment = -1;
saveVarsTmp{1} = Simulink.BusElement;
saveVarsTmp{1}.Name = 'TurnLightPosition';
saveVarsTmp{1}.Complexity = 'real';
saveVarsTmp{1}.Dimensions = [1 1];
saveVarsTmp{1}.DataType = 'Enum: ComplexTurnLightPosition';
saveVarsTmp{1}.Min = [];
saveVarsTmp{1}.Max = [];
saveVarsTmp{1}.DimensionsMode = 'Fixed';
saveVarsTmp{1}.SamplingMode = 'Sample based';
saveVarsTmp{1}.DocUnits = '';
saveVarsTmp{1}.Description = '';
saveVarsTmp{1}(2, 1) = Simulink.BusElement;
saveVarsTmp{1}(2, 1).Name = 'TurnLightOnOff';
saveVarsTmp{1}(2, 1).Complexity = 'real';
saveVarsTmp{1}(2, 1).Dimensions = [1 1];
saveVarsTmp{1}(2, 1).DataType = 'Enum: ComplexTurnLightOnOff';
saveVarsTmp{1}(2, 1).Min = [];
saveVarsTmp{1}(2, 1).Max = [];
saveVarsTmp{1}(2, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(2, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(2, 1).DocUnits = '';
saveVarsTmp{1}(2, 1).Description = '';
saveVarsTmp{1}(3, 1) = Simulink.BusElement;
saveVarsTmp{1}(3, 1).Name = 'TurnLightDutyCycle';
saveVarsTmp{1}(3, 1).Complexity = 'real';
saveVarsTmp{1}(3, 1).Dimensions = [1 1];
saveVarsTmp{1}(3, 1).DataType = 'uint8';
saveVarsTmp{1}(3, 1).Min = [];
saveVarsTmp{1}(3, 1).Max = [];
saveVarsTmp{1}(3, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(3, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(3, 1).DocUnits = '';
saveVarsTmp{1}(3, 1).Description = '';
saveVarsTmp{1}(4, 1) = Simulink.BusElement;
saveVarsTmp{1}(4, 1).Name = 'TurnLightCycle';
saveVarsTmp{1}(4, 1).Complexity = 'real';
saveVarsTmp{1}(4, 1).Dimensions = [1 1];
saveVarsTmp{1}(4, 1).DataType = 'uint8';
saveVarsTmp{1}(4, 1).Min = [];
saveVarsTmp{1}(4, 1).Max = [];
saveVarsTmp{1}(4, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(4, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(4, 1).DocUnits = '';
saveVarsTmp{1}(4, 1).Description = '';
saveVarsTmp{1}(5, 1) = Simulink.BusElement;
saveVarsTmp{1}(5, 1).Name = 'TurnLightTimes';
saveVarsTmp{1}(5, 1).Complexity = 'real';
saveVarsTmp{1}(5, 1).Dimensions = [1 1];
saveVarsTmp{1}(5, 1).DataType = 'uint8';
saveVarsTmp{1}(5, 1).Min = [];
saveVarsTmp{1}(5, 1).Max = [];
saveVarsTmp{1}(5, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(5, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(5, 1).DocUnits = '';
saveVarsTmp{1}(5, 1).Description = '';
saveVarsTmp{1}(6, 1) = Simulink.BusElement;
saveVarsTmp{1}(6, 1).Name = 'TurnLightNumber';
saveVarsTmp{1}(6, 1).Complexity = 'real';
saveVarsTmp{1}(6, 1).Dimensions = [1 1];
saveVarsTmp{1}(6, 1).DataType = 'uint8';
saveVarsTmp{1}(6, 1).Min = [];
saveVarsTmp{1}(6, 1).Max = [];
saveVarsTmp{1}(6, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(6, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(6, 1).DocUnits = '';
saveVarsTmp{1}(6, 1).Description = '';
saveVarsTmp{1}(7, 1) = Simulink.BusElement;
saveVarsTmp{1}(7, 1).Name = 'TurnLightPriority';
saveVarsTmp{1}(7, 1).Complexity = 'real';
saveVarsTmp{1}(7, 1).Dimensions = [1 1];
saveVarsTmp{1}(7, 1).DataType = 'uint8';
saveVarsTmp{1}(7, 1).Min = [];
saveVarsTmp{1}(7, 1).Max = [];
saveVarsTmp{1}(7, 1).DimensionsMode = 'Fixed';
saveVarsTmp{1}(7, 1).SamplingMode = 'Sample based';
saveVarsTmp{1}(7, 1).DocUnits = '';
saveVarsTmp{1}(7, 1).Description = '';
TurnLightService.Elements = saveVarsTmp{1};
clear saveVarsTmp;




