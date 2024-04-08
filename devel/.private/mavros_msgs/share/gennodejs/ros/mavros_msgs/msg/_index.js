
"use strict";

let GPSRAW = require('./GPSRAW.js');
let ParamValue = require('./ParamValue.js');
let Altitude = require('./Altitude.js');
let HilSensor = require('./HilSensor.js');
let RadioStatus = require('./RadioStatus.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let ManualControl = require('./ManualControl.js');
let LogData = require('./LogData.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let RTKBaseline = require('./RTKBaseline.js');
let SysStatus = require('./SysStatus.js');
let WaypointList = require('./WaypointList.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let Waypoint = require('./Waypoint.js');
let LandingTarget = require('./LandingTarget.js');
let ActuatorControl = require('./ActuatorControl.js');
let GPSRTK = require('./GPSRTK.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let CommandCode = require('./CommandCode.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let LogEntry = require('./LogEntry.js');
let HilGPS = require('./HilGPS.js');
let PositionTarget = require('./PositionTarget.js');
let VehicleInfo = require('./VehicleInfo.js');
let FileEntry = require('./FileEntry.js');
let MountControl = require('./MountControl.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let State = require('./State.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let RCOut = require('./RCOut.js');
let BatteryStatus = require('./BatteryStatus.js');
let Trajectory = require('./Trajectory.js');
let Tunnel = require('./Tunnel.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let Vibration = require('./Vibration.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let CellularStatus = require('./CellularStatus.js');
let DebugValue = require('./DebugValue.js');
let Mavlink = require('./Mavlink.js');
let ESCInfo = require('./ESCInfo.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let ESCStatus = require('./ESCStatus.js');
let HomePosition = require('./HomePosition.js');
let ExtendedState = require('./ExtendedState.js');
let GPSINPUT = require('./GPSINPUT.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let RCIn = require('./RCIn.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let Param = require('./Param.js');
let StatusText = require('./StatusText.js');
let TerrainReport = require('./TerrainReport.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let WaypointReached = require('./WaypointReached.js');
let HilControls = require('./HilControls.js');
let Thrust = require('./Thrust.js');
let VFR_HUD = require('./VFR_HUD.js');
let RTCM = require('./RTCM.js');

module.exports = {
  GPSRAW: GPSRAW,
  ParamValue: ParamValue,
  Altitude: Altitude,
  HilSensor: HilSensor,
  RadioStatus: RadioStatus,
  ADSBVehicle: ADSBVehicle,
  ESCTelemetryItem: ESCTelemetryItem,
  ManualControl: ManualControl,
  LogData: LogData,
  OnboardComputerStatus: OnboardComputerStatus,
  RTKBaseline: RTKBaseline,
  SysStatus: SysStatus,
  WaypointList: WaypointList,
  ESCStatusItem: ESCStatusItem,
  Waypoint: Waypoint,
  LandingTarget: LandingTarget,
  ActuatorControl: ActuatorControl,
  GPSRTK: GPSRTK,
  ESCTelemetry: ESCTelemetry,
  AttitudeTarget: AttitudeTarget,
  CommandCode: CommandCode,
  WheelOdomStamped: WheelOdomStamped,
  LogEntry: LogEntry,
  HilGPS: HilGPS,
  PositionTarget: PositionTarget,
  VehicleInfo: VehicleInfo,
  FileEntry: FileEntry,
  MountControl: MountControl,
  HilStateQuaternion: HilStateQuaternion,
  State: State,
  HilActuatorControls: HilActuatorControls,
  GlobalPositionTarget: GlobalPositionTarget,
  CamIMUStamp: CamIMUStamp,
  RCOut: RCOut,
  BatteryStatus: BatteryStatus,
  Trajectory: Trajectory,
  Tunnel: Tunnel,
  EstimatorStatus: EstimatorStatus,
  TimesyncStatus: TimesyncStatus,
  Vibration: Vibration,
  MagnetometerReporter: MagnetometerReporter,
  CameraImageCaptured: CameraImageCaptured,
  ESCInfoItem: ESCInfoItem,
  CellularStatus: CellularStatus,
  DebugValue: DebugValue,
  Mavlink: Mavlink,
  ESCInfo: ESCInfo,
  OpticalFlowRad: OpticalFlowRad,
  PlayTuneV2: PlayTuneV2,
  ESCStatus: ESCStatus,
  HomePosition: HomePosition,
  ExtendedState: ExtendedState,
  GPSINPUT: GPSINPUT,
  CompanionProcessStatus: CompanionProcessStatus,
  RCIn: RCIn,
  OverrideRCIn: OverrideRCIn,
  Param: Param,
  StatusText: StatusText,
  TerrainReport: TerrainReport,
  NavControllerOutput: NavControllerOutput,
  WaypointReached: WaypointReached,
  HilControls: HilControls,
  Thrust: Thrust,
  VFR_HUD: VFR_HUD,
  RTCM: RTCM,
};
