#pragma once
// MESSAGE ONBOARD_COMPUTER_MODULES_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS 3368


typedef struct __mavlink_onboard_computer_modules_status_t {
 uint64_t timestamp; /*< [us] Timestamp (UNIX time or time since system boot).*/
 uint8_t ros_state; /*<  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.*/
 uint8_t autopilot_connection_state; /*<  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).*/
 uint8_t GCS_connection_state; /*<  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.*/
 uint8_t firmware_connection_state; /*<  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.*/
 uint8_t primary_camera_state; /*<  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.*/
 uint8_t video_stream_state; /*<  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.*/
 uint8_t recording_state; /*<  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.*/
 uint8_t pose_estimation_state; /*<  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.*/
 uint8_t collision_avoidance_state; /*<  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.*/
 uint8_t collision_detection_state; /*<  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.*/
 uint8_t navigation_state; /*<  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.*/
} mavlink_onboard_computer_modules_status_t;

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN 19
#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN 19
#define MAVLINK_MSG_ID_3368_LEN 19
#define MAVLINK_MSG_ID_3368_MIN_LEN 19

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC 98
#define MAVLINK_MSG_ID_3368_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_MODULES_STATUS { \
    3368, \
    "ONBOARD_COMPUTER_MODULES_STATUS", \
    12, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_computer_modules_status_t, timestamp) }, \
         { "ros_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_onboard_computer_modules_status_t, ros_state) }, \
         { "autopilot_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_onboard_computer_modules_status_t, autopilot_connection_state) }, \
         { "GCS_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_onboard_computer_modules_status_t, GCS_connection_state) }, \
         { "firmware_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_onboard_computer_modules_status_t, firmware_connection_state) }, \
         { "primary_camera_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_onboard_computer_modules_status_t, primary_camera_state) }, \
         { "video_stream_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_onboard_computer_modules_status_t, video_stream_state) }, \
         { "recording_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_onboard_computer_modules_status_t, recording_state) }, \
         { "pose_estimation_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_onboard_computer_modules_status_t, pose_estimation_state) }, \
         { "collision_avoidance_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_onboard_computer_modules_status_t, collision_avoidance_state) }, \
         { "collision_detection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_onboard_computer_modules_status_t, collision_detection_state) }, \
         { "navigation_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_onboard_computer_modules_status_t, navigation_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_MODULES_STATUS { \
    "ONBOARD_COMPUTER_MODULES_STATUS", \
    12, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_computer_modules_status_t, timestamp) }, \
         { "ros_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_onboard_computer_modules_status_t, ros_state) }, \
         { "autopilot_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_onboard_computer_modules_status_t, autopilot_connection_state) }, \
         { "GCS_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_onboard_computer_modules_status_t, GCS_connection_state) }, \
         { "firmware_connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_onboard_computer_modules_status_t, firmware_connection_state) }, \
         { "primary_camera_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_onboard_computer_modules_status_t, primary_camera_state) }, \
         { "video_stream_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_onboard_computer_modules_status_t, video_stream_state) }, \
         { "recording_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_onboard_computer_modules_status_t, recording_state) }, \
         { "pose_estimation_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_onboard_computer_modules_status_t, pose_estimation_state) }, \
         { "collision_avoidance_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_onboard_computer_modules_status_t, collision_avoidance_state) }, \
         { "collision_detection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_onboard_computer_modules_status_t, collision_detection_state) }, \
         { "navigation_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_onboard_computer_modules_status_t, navigation_state) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_computer_modules_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param ros_state  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.
 * @param autopilot_connection_state  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).
 * @param GCS_connection_state  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.
 * @param firmware_connection_state  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.
 * @param primary_camera_state  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.
 * @param video_stream_state  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @param recording_state  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.
 * @param pose_estimation_state  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.
 * @param collision_avoidance_state  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param collision_detection_state  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param navigation_state  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t ros_state, uint8_t autopilot_connection_state, uint8_t GCS_connection_state, uint8_t firmware_connection_state, uint8_t primary_camera_state, uint8_t video_stream_state, uint8_t recording_state, uint8_t pose_estimation_state, uint8_t collision_avoidance_state, uint8_t collision_detection_state, uint8_t navigation_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, ros_state);
    _mav_put_uint8_t(buf, 9, autopilot_connection_state);
    _mav_put_uint8_t(buf, 10, GCS_connection_state);
    _mav_put_uint8_t(buf, 11, firmware_connection_state);
    _mav_put_uint8_t(buf, 12, primary_camera_state);
    _mav_put_uint8_t(buf, 13, video_stream_state);
    _mav_put_uint8_t(buf, 14, recording_state);
    _mav_put_uint8_t(buf, 15, pose_estimation_state);
    _mav_put_uint8_t(buf, 16, collision_avoidance_state);
    _mav_put_uint8_t(buf, 17, collision_detection_state);
    _mav_put_uint8_t(buf, 18, navigation_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#else
    mavlink_onboard_computer_modules_status_t packet;
    packet.timestamp = timestamp;
    packet.ros_state = ros_state;
    packet.autopilot_connection_state = autopilot_connection_state;
    packet.GCS_connection_state = GCS_connection_state;
    packet.firmware_connection_state = firmware_connection_state;
    packet.primary_camera_state = primary_camera_state;
    packet.video_stream_state = video_stream_state;
    packet.recording_state = recording_state;
    packet.pose_estimation_state = pose_estimation_state;
    packet.collision_avoidance_state = collision_avoidance_state;
    packet.collision_detection_state = collision_detection_state;
    packet.navigation_state = navigation_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
}

/**
 * @brief Pack a onboard_computer_modules_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param ros_state  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.
 * @param autopilot_connection_state  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).
 * @param GCS_connection_state  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.
 * @param firmware_connection_state  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.
 * @param primary_camera_state  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.
 * @param video_stream_state  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @param recording_state  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.
 * @param pose_estimation_state  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.
 * @param collision_avoidance_state  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param collision_detection_state  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param navigation_state  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t ros_state, uint8_t autopilot_connection_state, uint8_t GCS_connection_state, uint8_t firmware_connection_state, uint8_t primary_camera_state, uint8_t video_stream_state, uint8_t recording_state, uint8_t pose_estimation_state, uint8_t collision_avoidance_state, uint8_t collision_detection_state, uint8_t navigation_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, ros_state);
    _mav_put_uint8_t(buf, 9, autopilot_connection_state);
    _mav_put_uint8_t(buf, 10, GCS_connection_state);
    _mav_put_uint8_t(buf, 11, firmware_connection_state);
    _mav_put_uint8_t(buf, 12, primary_camera_state);
    _mav_put_uint8_t(buf, 13, video_stream_state);
    _mav_put_uint8_t(buf, 14, recording_state);
    _mav_put_uint8_t(buf, 15, pose_estimation_state);
    _mav_put_uint8_t(buf, 16, collision_avoidance_state);
    _mav_put_uint8_t(buf, 17, collision_detection_state);
    _mav_put_uint8_t(buf, 18, navigation_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#else
    mavlink_onboard_computer_modules_status_t packet;
    packet.timestamp = timestamp;
    packet.ros_state = ros_state;
    packet.autopilot_connection_state = autopilot_connection_state;
    packet.GCS_connection_state = GCS_connection_state;
    packet.firmware_connection_state = firmware_connection_state;
    packet.primary_camera_state = primary_camera_state;
    packet.video_stream_state = video_stream_state;
    packet.recording_state = recording_state;
    packet.pose_estimation_state = pose_estimation_state;
    packet.collision_avoidance_state = collision_avoidance_state;
    packet.collision_detection_state = collision_detection_state;
    packet.navigation_state = navigation_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#endif
}

/**
 * @brief Pack a onboard_computer_modules_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param ros_state  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.
 * @param autopilot_connection_state  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).
 * @param GCS_connection_state  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.
 * @param firmware_connection_state  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.
 * @param primary_camera_state  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.
 * @param video_stream_state  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @param recording_state  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.
 * @param pose_estimation_state  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.
 * @param collision_avoidance_state  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param collision_detection_state  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param navigation_state  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t ros_state,uint8_t autopilot_connection_state,uint8_t GCS_connection_state,uint8_t firmware_connection_state,uint8_t primary_camera_state,uint8_t video_stream_state,uint8_t recording_state,uint8_t pose_estimation_state,uint8_t collision_avoidance_state,uint8_t collision_detection_state,uint8_t navigation_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, ros_state);
    _mav_put_uint8_t(buf, 9, autopilot_connection_state);
    _mav_put_uint8_t(buf, 10, GCS_connection_state);
    _mav_put_uint8_t(buf, 11, firmware_connection_state);
    _mav_put_uint8_t(buf, 12, primary_camera_state);
    _mav_put_uint8_t(buf, 13, video_stream_state);
    _mav_put_uint8_t(buf, 14, recording_state);
    _mav_put_uint8_t(buf, 15, pose_estimation_state);
    _mav_put_uint8_t(buf, 16, collision_avoidance_state);
    _mav_put_uint8_t(buf, 17, collision_detection_state);
    _mav_put_uint8_t(buf, 18, navigation_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#else
    mavlink_onboard_computer_modules_status_t packet;
    packet.timestamp = timestamp;
    packet.ros_state = ros_state;
    packet.autopilot_connection_state = autopilot_connection_state;
    packet.GCS_connection_state = GCS_connection_state;
    packet.firmware_connection_state = firmware_connection_state;
    packet.primary_camera_state = primary_camera_state;
    packet.video_stream_state = video_stream_state;
    packet.recording_state = recording_state;
    packet.pose_estimation_state = pose_estimation_state;
    packet.collision_avoidance_state = collision_avoidance_state;
    packet.collision_detection_state = collision_detection_state;
    packet.navigation_state = navigation_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
}

/**
 * @brief Encode a onboard_computer_modules_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_modules_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_computer_modules_status_t* onboard_computer_modules_status)
{
    return mavlink_msg_onboard_computer_modules_status_pack(system_id, component_id, msg, onboard_computer_modules_status->timestamp, onboard_computer_modules_status->ros_state, onboard_computer_modules_status->autopilot_connection_state, onboard_computer_modules_status->GCS_connection_state, onboard_computer_modules_status->firmware_connection_state, onboard_computer_modules_status->primary_camera_state, onboard_computer_modules_status->video_stream_state, onboard_computer_modules_status->recording_state, onboard_computer_modules_status->pose_estimation_state, onboard_computer_modules_status->collision_avoidance_state, onboard_computer_modules_status->collision_detection_state, onboard_computer_modules_status->navigation_state);
}

/**
 * @brief Encode a onboard_computer_modules_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_modules_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_computer_modules_status_t* onboard_computer_modules_status)
{
    return mavlink_msg_onboard_computer_modules_status_pack_chan(system_id, component_id, chan, msg, onboard_computer_modules_status->timestamp, onboard_computer_modules_status->ros_state, onboard_computer_modules_status->autopilot_connection_state, onboard_computer_modules_status->GCS_connection_state, onboard_computer_modules_status->firmware_connection_state, onboard_computer_modules_status->primary_camera_state, onboard_computer_modules_status->video_stream_state, onboard_computer_modules_status->recording_state, onboard_computer_modules_status->pose_estimation_state, onboard_computer_modules_status->collision_avoidance_state, onboard_computer_modules_status->collision_detection_state, onboard_computer_modules_status->navigation_state);
}

/**
 * @brief Encode a onboard_computer_modules_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_modules_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_modules_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_computer_modules_status_t* onboard_computer_modules_status)
{
    return mavlink_msg_onboard_computer_modules_status_pack_status(system_id, component_id, _status, msg,  onboard_computer_modules_status->timestamp, onboard_computer_modules_status->ros_state, onboard_computer_modules_status->autopilot_connection_state, onboard_computer_modules_status->GCS_connection_state, onboard_computer_modules_status->firmware_connection_state, onboard_computer_modules_status->primary_camera_state, onboard_computer_modules_status->video_stream_state, onboard_computer_modules_status->recording_state, onboard_computer_modules_status->pose_estimation_state, onboard_computer_modules_status->collision_avoidance_state, onboard_computer_modules_status->collision_detection_state, onboard_computer_modules_status->navigation_state);
}

/**
 * @brief Send a onboard_computer_modules_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param ros_state  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.
 * @param autopilot_connection_state  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).
 * @param GCS_connection_state  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.
 * @param firmware_connection_state  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.
 * @param primary_camera_state  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.
 * @param video_stream_state  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 * @param recording_state  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.
 * @param pose_estimation_state  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.
 * @param collision_avoidance_state  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param collision_detection_state  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 * @param navigation_state  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_computer_modules_status_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t ros_state, uint8_t autopilot_connection_state, uint8_t GCS_connection_state, uint8_t firmware_connection_state, uint8_t primary_camera_state, uint8_t video_stream_state, uint8_t recording_state, uint8_t pose_estimation_state, uint8_t collision_avoidance_state, uint8_t collision_detection_state, uint8_t navigation_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, ros_state);
    _mav_put_uint8_t(buf, 9, autopilot_connection_state);
    _mav_put_uint8_t(buf, 10, GCS_connection_state);
    _mav_put_uint8_t(buf, 11, firmware_connection_state);
    _mav_put_uint8_t(buf, 12, primary_camera_state);
    _mav_put_uint8_t(buf, 13, video_stream_state);
    _mav_put_uint8_t(buf, 14, recording_state);
    _mav_put_uint8_t(buf, 15, pose_estimation_state);
    _mav_put_uint8_t(buf, 16, collision_avoidance_state);
    _mav_put_uint8_t(buf, 17, collision_detection_state);
    _mav_put_uint8_t(buf, 18, navigation_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#else
    mavlink_onboard_computer_modules_status_t packet;
    packet.timestamp = timestamp;
    packet.ros_state = ros_state;
    packet.autopilot_connection_state = autopilot_connection_state;
    packet.GCS_connection_state = GCS_connection_state;
    packet.firmware_connection_state = firmware_connection_state;
    packet.primary_camera_state = primary_camera_state;
    packet.video_stream_state = video_stream_state;
    packet.recording_state = recording_state;
    packet.pose_estimation_state = pose_estimation_state;
    packet.collision_avoidance_state = collision_avoidance_state;
    packet.collision_detection_state = collision_detection_state;
    packet.navigation_state = navigation_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#endif
}

/**
 * @brief Send a onboard_computer_modules_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_computer_modules_status_send_struct(mavlink_channel_t chan, const mavlink_onboard_computer_modules_status_t* onboard_computer_modules_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_computer_modules_status_send(chan, onboard_computer_modules_status->timestamp, onboard_computer_modules_status->ros_state, onboard_computer_modules_status->autopilot_connection_state, onboard_computer_modules_status->GCS_connection_state, onboard_computer_modules_status->firmware_connection_state, onboard_computer_modules_status->primary_camera_state, onboard_computer_modules_status->video_stream_state, onboard_computer_modules_status->recording_state, onboard_computer_modules_status->pose_estimation_state, onboard_computer_modules_status->collision_avoidance_state, onboard_computer_modules_status->collision_detection_state, onboard_computer_modules_status->navigation_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS, (const char *)onboard_computer_modules_status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_computer_modules_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t ros_state, uint8_t autopilot_connection_state, uint8_t GCS_connection_state, uint8_t firmware_connection_state, uint8_t primary_camera_state, uint8_t video_stream_state, uint8_t recording_state, uint8_t pose_estimation_state, uint8_t collision_avoidance_state, uint8_t collision_detection_state, uint8_t navigation_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, ros_state);
    _mav_put_uint8_t(buf, 9, autopilot_connection_state);
    _mav_put_uint8_t(buf, 10, GCS_connection_state);
    _mav_put_uint8_t(buf, 11, firmware_connection_state);
    _mav_put_uint8_t(buf, 12, primary_camera_state);
    _mav_put_uint8_t(buf, 13, video_stream_state);
    _mav_put_uint8_t(buf, 14, recording_state);
    _mav_put_uint8_t(buf, 15, pose_estimation_state);
    _mav_put_uint8_t(buf, 16, collision_avoidance_state);
    _mav_put_uint8_t(buf, 17, collision_detection_state);
    _mav_put_uint8_t(buf, 18, navigation_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#else
    mavlink_onboard_computer_modules_status_t *packet = (mavlink_onboard_computer_modules_status_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->ros_state = ros_state;
    packet->autopilot_connection_state = autopilot_connection_state;
    packet->GCS_connection_state = GCS_connection_state;
    packet->firmware_connection_state = firmware_connection_state;
    packet->primary_camera_state = primary_camera_state;
    packet->video_stream_state = video_stream_state;
    packet->recording_state = recording_state;
    packet->pose_estimation_state = pose_estimation_state;
    packet->collision_avoidance_state = collision_avoidance_state;
    packet->collision_detection_state = collision_detection_state;
    packet->navigation_state = navigation_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_COMPUTER_MODULES_STATUS UNPACKING


/**
 * @brief Get field timestamp from onboard_computer_modules_status message
 *
 * @return [us] Timestamp (UNIX time or time since system boot).
 */
static inline uint64_t mavlink_msg_onboard_computer_modules_status_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field ros_state from onboard_computer_modules_status message
 *
 * @return  ROS master / middleware core health. MAV_STATE_UNINIT=not started, MAV_STATE_BOOT=starting, MAV_STATE_ACTIVE=running, MAV_STATE_EMERGENCY=crashed.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_ros_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field autopilot_connection_state from onboard_computer_modules_status message
 *
 * @return  Autopilot serial link health. Always MAV_STATE_UNINIT on robots without an autopilot (e.g. standalone crawler).
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_autopilot_connection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field GCS_connection_state from onboard_computer_modules_status message
 *
 * @return  GCS UDP link health. MAV_STATE_UNINIT=no connection object, MAV_STATE_ACTIVE=link up.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_GCS_connection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field firmware_connection_state from onboard_computer_modules_status message
 *
 * @return  Firmware serial bridge health. MAV_STATE_UNINIT=no serial port at boot, MAV_STATE_ACTIVE=connected and receiving, MAV_STATE_EMERGENCY=thread died.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_firmware_connection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field primary_camera_state from onboard_computer_modules_status message
 *
 * @return  Primary camera process health. MAV_STATE_UNINIT=not connected, MAV_STATE_BOOT=connecting, MAV_STATE_ACTIVE=streaming/recording, MAV_STATE_EMERGENCY=process failed.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_primary_camera_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field video_stream_state from onboard_computer_modules_status message
 *
 * @return  Video streaming service health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=streaming, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_video_stream_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field recording_state from onboard_computer_modules_status message
 *
 * @return  Data recording service health. MAV_STATE_UNINIT=not started, MAV_STATE_STANDBY=ready but not recording, MAV_STATE_ACTIVE=recording, MAV_STATE_EMERGENCY=storage fault.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_recording_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field pose_estimation_state from onboard_computer_modules_status message
 *
 * @return  Overall pose estimation pipeline health (see ONBOARD_POSE_ESTIMATION_STATUS for per-source detail). MAV_STATE_UNINIT=no source, MAV_STATE_ACTIVE=fusing, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_pose_estimation_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field collision_avoidance_state from onboard_computer_modules_status message
 *
 * @return  Collision avoidance module health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_collision_avoidance_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field collision_detection_state from onboard_computer_modules_status message
 *
 * @return  Collision detection / perception pipeline health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_collision_detection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field navigation_state from onboard_computer_modules_status message
 *
 * @return  Path planning / navigation stack health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=running, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=crashed.
 */
static inline uint8_t mavlink_msg_onboard_computer_modules_status_get_navigation_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Decode a onboard_computer_modules_status message into a struct
 *
 * @param msg The message to decode
 * @param onboard_computer_modules_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_computer_modules_status_decode(const mavlink_message_t* msg, mavlink_onboard_computer_modules_status_t* onboard_computer_modules_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_computer_modules_status->timestamp = mavlink_msg_onboard_computer_modules_status_get_timestamp(msg);
    onboard_computer_modules_status->ros_state = mavlink_msg_onboard_computer_modules_status_get_ros_state(msg);
    onboard_computer_modules_status->autopilot_connection_state = mavlink_msg_onboard_computer_modules_status_get_autopilot_connection_state(msg);
    onboard_computer_modules_status->GCS_connection_state = mavlink_msg_onboard_computer_modules_status_get_GCS_connection_state(msg);
    onboard_computer_modules_status->firmware_connection_state = mavlink_msg_onboard_computer_modules_status_get_firmware_connection_state(msg);
    onboard_computer_modules_status->primary_camera_state = mavlink_msg_onboard_computer_modules_status_get_primary_camera_state(msg);
    onboard_computer_modules_status->video_stream_state = mavlink_msg_onboard_computer_modules_status_get_video_stream_state(msg);
    onboard_computer_modules_status->recording_state = mavlink_msg_onboard_computer_modules_status_get_recording_state(msg);
    onboard_computer_modules_status->pose_estimation_state = mavlink_msg_onboard_computer_modules_status_get_pose_estimation_state(msg);
    onboard_computer_modules_status->collision_avoidance_state = mavlink_msg_onboard_computer_modules_status_get_collision_avoidance_state(msg);
    onboard_computer_modules_status->collision_detection_state = mavlink_msg_onboard_computer_modules_status_get_collision_detection_state(msg);
    onboard_computer_modules_status->navigation_state = mavlink_msg_onboard_computer_modules_status_get_navigation_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN;
        memset(onboard_computer_modules_status, 0, MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_LEN);
    memcpy(onboard_computer_modules_status, _MAV_PAYLOAD(msg), len);
#endif
}
