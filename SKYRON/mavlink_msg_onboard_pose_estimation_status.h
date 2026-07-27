#pragma once
// MESSAGE ONBOARD_POSE_ESTIMATION_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS 3367


typedef struct __mavlink_onboard_pose_estimation_status_t {
 uint64_t timestamp; /*< [us] Timestamp (UNIX time or time since system boot).*/
 uint32_t active_sources; /*<  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.*/
 uint8_t lidar_slam_state; /*<  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.*/
 uint8_t visual_slam_state; /*<  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.*/
 uint8_t vio_state; /*<  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.*/
 uint8_t vps_state; /*<  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.*/
 uint8_t lidar_hw_state; /*<  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.*/
 uint8_t stereo_cam_hw_state; /*<  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.*/
 uint8_t reserved0; /*<  Reserved for future use.*/
 uint8_t reserved1; /*<  Reserved for future use.*/
 uint8_t reserved2; /*<  Reserved for future use.*/
} mavlink_onboard_pose_estimation_status_t;

#define MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN 21
#define MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN 18
#define MAVLINK_MSG_ID_3367_LEN 21
#define MAVLINK_MSG_ID_3367_MIN_LEN 18

#define MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC 213
#define MAVLINK_MSG_ID_3367_CRC 213



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_POSE_ESTIMATION_STATUS { \
    3367, \
    "ONBOARD_POSE_ESTIMATION_STATUS", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_pose_estimation_status_t, timestamp) }, \
         { "lidar_slam_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_onboard_pose_estimation_status_t, lidar_slam_state) }, \
         { "visual_slam_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_onboard_pose_estimation_status_t, visual_slam_state) }, \
         { "vio_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_onboard_pose_estimation_status_t, vio_state) }, \
         { "vps_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_onboard_pose_estimation_status_t, vps_state) }, \
         { "lidar_hw_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_onboard_pose_estimation_status_t, lidar_hw_state) }, \
         { "stereo_cam_hw_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_onboard_pose_estimation_status_t, stereo_cam_hw_state) }, \
         { "active_sources", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_onboard_pose_estimation_status_t, active_sources) }, \
         { "reserved0", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_onboard_pose_estimation_status_t, reserved0) }, \
         { "reserved1", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_onboard_pose_estimation_status_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_onboard_pose_estimation_status_t, reserved2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_POSE_ESTIMATION_STATUS { \
    "ONBOARD_POSE_ESTIMATION_STATUS", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_pose_estimation_status_t, timestamp) }, \
         { "lidar_slam_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_onboard_pose_estimation_status_t, lidar_slam_state) }, \
         { "visual_slam_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_onboard_pose_estimation_status_t, visual_slam_state) }, \
         { "vio_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_onboard_pose_estimation_status_t, vio_state) }, \
         { "vps_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_onboard_pose_estimation_status_t, vps_state) }, \
         { "lidar_hw_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_onboard_pose_estimation_status_t, lidar_hw_state) }, \
         { "stereo_cam_hw_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_onboard_pose_estimation_status_t, stereo_cam_hw_state) }, \
         { "active_sources", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_onboard_pose_estimation_status_t, active_sources) }, \
         { "reserved0", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_onboard_pose_estimation_status_t, reserved0) }, \
         { "reserved1", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_onboard_pose_estimation_status_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_onboard_pose_estimation_status_t, reserved2) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_pose_estimation_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param lidar_slam_state  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.
 * @param visual_slam_state  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vio_state  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vps_state  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param lidar_hw_state  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.
 * @param stereo_cam_hw_state  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.
 * @param active_sources  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.
 * @param reserved0  Reserved for future use.
 * @param reserved1  Reserved for future use.
 * @param reserved2  Reserved for future use.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t lidar_slam_state, uint8_t visual_slam_state, uint8_t vio_state, uint8_t vps_state, uint8_t lidar_hw_state, uint8_t stereo_cam_hw_state, uint32_t active_sources, uint8_t reserved0, uint8_t reserved1, uint8_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, active_sources);
    _mav_put_uint8_t(buf, 12, lidar_slam_state);
    _mav_put_uint8_t(buf, 13, visual_slam_state);
    _mav_put_uint8_t(buf, 14, vio_state);
    _mav_put_uint8_t(buf, 15, vps_state);
    _mav_put_uint8_t(buf, 16, lidar_hw_state);
    _mav_put_uint8_t(buf, 17, stereo_cam_hw_state);
    _mav_put_uint8_t(buf, 18, reserved0);
    _mav_put_uint8_t(buf, 19, reserved1);
    _mav_put_uint8_t(buf, 20, reserved2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#else
    mavlink_onboard_pose_estimation_status_t packet;
    packet.timestamp = timestamp;
    packet.active_sources = active_sources;
    packet.lidar_slam_state = lidar_slam_state;
    packet.visual_slam_state = visual_slam_state;
    packet.vio_state = vio_state;
    packet.vps_state = vps_state;
    packet.lidar_hw_state = lidar_hw_state;
    packet.stereo_cam_hw_state = stereo_cam_hw_state;
    packet.reserved0 = reserved0;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
}

/**
 * @brief Pack a onboard_pose_estimation_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param lidar_slam_state  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.
 * @param visual_slam_state  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vio_state  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vps_state  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param lidar_hw_state  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.
 * @param stereo_cam_hw_state  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.
 * @param active_sources  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.
 * @param reserved0  Reserved for future use.
 * @param reserved1  Reserved for future use.
 * @param reserved2  Reserved for future use.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t lidar_slam_state, uint8_t visual_slam_state, uint8_t vio_state, uint8_t vps_state, uint8_t lidar_hw_state, uint8_t stereo_cam_hw_state, uint32_t active_sources, uint8_t reserved0, uint8_t reserved1, uint8_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, active_sources);
    _mav_put_uint8_t(buf, 12, lidar_slam_state);
    _mav_put_uint8_t(buf, 13, visual_slam_state);
    _mav_put_uint8_t(buf, 14, vio_state);
    _mav_put_uint8_t(buf, 15, vps_state);
    _mav_put_uint8_t(buf, 16, lidar_hw_state);
    _mav_put_uint8_t(buf, 17, stereo_cam_hw_state);
    _mav_put_uint8_t(buf, 18, reserved0);
    _mav_put_uint8_t(buf, 19, reserved1);
    _mav_put_uint8_t(buf, 20, reserved2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#else
    mavlink_onboard_pose_estimation_status_t packet;
    packet.timestamp = timestamp;
    packet.active_sources = active_sources;
    packet.lidar_slam_state = lidar_slam_state;
    packet.visual_slam_state = visual_slam_state;
    packet.vio_state = vio_state;
    packet.vps_state = vps_state;
    packet.lidar_hw_state = lidar_hw_state;
    packet.stereo_cam_hw_state = stereo_cam_hw_state;
    packet.reserved0 = reserved0;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a onboard_pose_estimation_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param lidar_slam_state  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.
 * @param visual_slam_state  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vio_state  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vps_state  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param lidar_hw_state  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.
 * @param stereo_cam_hw_state  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.
 * @param active_sources  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.
 * @param reserved0  Reserved for future use.
 * @param reserved1  Reserved for future use.
 * @param reserved2  Reserved for future use.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t lidar_slam_state,uint8_t visual_slam_state,uint8_t vio_state,uint8_t vps_state,uint8_t lidar_hw_state,uint8_t stereo_cam_hw_state,uint32_t active_sources,uint8_t reserved0,uint8_t reserved1,uint8_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, active_sources);
    _mav_put_uint8_t(buf, 12, lidar_slam_state);
    _mav_put_uint8_t(buf, 13, visual_slam_state);
    _mav_put_uint8_t(buf, 14, vio_state);
    _mav_put_uint8_t(buf, 15, vps_state);
    _mav_put_uint8_t(buf, 16, lidar_hw_state);
    _mav_put_uint8_t(buf, 17, stereo_cam_hw_state);
    _mav_put_uint8_t(buf, 18, reserved0);
    _mav_put_uint8_t(buf, 19, reserved1);
    _mav_put_uint8_t(buf, 20, reserved2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#else
    mavlink_onboard_pose_estimation_status_t packet;
    packet.timestamp = timestamp;
    packet.active_sources = active_sources;
    packet.lidar_slam_state = lidar_slam_state;
    packet.visual_slam_state = visual_slam_state;
    packet.vio_state = vio_state;
    packet.vps_state = vps_state;
    packet.lidar_hw_state = lidar_hw_state;
    packet.stereo_cam_hw_state = stereo_cam_hw_state;
    packet.reserved0 = reserved0;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
}

/**
 * @brief Encode a onboard_pose_estimation_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_pose_estimation_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_pose_estimation_status_t* onboard_pose_estimation_status)
{
    return mavlink_msg_onboard_pose_estimation_status_pack(system_id, component_id, msg, onboard_pose_estimation_status->timestamp, onboard_pose_estimation_status->lidar_slam_state, onboard_pose_estimation_status->visual_slam_state, onboard_pose_estimation_status->vio_state, onboard_pose_estimation_status->vps_state, onboard_pose_estimation_status->lidar_hw_state, onboard_pose_estimation_status->stereo_cam_hw_state, onboard_pose_estimation_status->active_sources, onboard_pose_estimation_status->reserved0, onboard_pose_estimation_status->reserved1, onboard_pose_estimation_status->reserved2);
}

/**
 * @brief Encode a onboard_pose_estimation_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_pose_estimation_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_pose_estimation_status_t* onboard_pose_estimation_status)
{
    return mavlink_msg_onboard_pose_estimation_status_pack_chan(system_id, component_id, chan, msg, onboard_pose_estimation_status->timestamp, onboard_pose_estimation_status->lidar_slam_state, onboard_pose_estimation_status->visual_slam_state, onboard_pose_estimation_status->vio_state, onboard_pose_estimation_status->vps_state, onboard_pose_estimation_status->lidar_hw_state, onboard_pose_estimation_status->stereo_cam_hw_state, onboard_pose_estimation_status->active_sources, onboard_pose_estimation_status->reserved0, onboard_pose_estimation_status->reserved1, onboard_pose_estimation_status->reserved2);
}

/**
 * @brief Encode a onboard_pose_estimation_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_pose_estimation_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_pose_estimation_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_pose_estimation_status_t* onboard_pose_estimation_status)
{
    return mavlink_msg_onboard_pose_estimation_status_pack_status(system_id, component_id, _status, msg,  onboard_pose_estimation_status->timestamp, onboard_pose_estimation_status->lidar_slam_state, onboard_pose_estimation_status->visual_slam_state, onboard_pose_estimation_status->vio_state, onboard_pose_estimation_status->vps_state, onboard_pose_estimation_status->lidar_hw_state, onboard_pose_estimation_status->stereo_cam_hw_state, onboard_pose_estimation_status->active_sources, onboard_pose_estimation_status->reserved0, onboard_pose_estimation_status->reserved1, onboard_pose_estimation_status->reserved2);
}

/**
 * @brief Send a onboard_pose_estimation_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param lidar_slam_state  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.
 * @param visual_slam_state  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vio_state  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param vps_state  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 * @param lidar_hw_state  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.
 * @param stereo_cam_hw_state  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.
 * @param active_sources  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.
 * @param reserved0  Reserved for future use.
 * @param reserved1  Reserved for future use.
 * @param reserved2  Reserved for future use.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_pose_estimation_status_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t lidar_slam_state, uint8_t visual_slam_state, uint8_t vio_state, uint8_t vps_state, uint8_t lidar_hw_state, uint8_t stereo_cam_hw_state, uint32_t active_sources, uint8_t reserved0, uint8_t reserved1, uint8_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, active_sources);
    _mav_put_uint8_t(buf, 12, lidar_slam_state);
    _mav_put_uint8_t(buf, 13, visual_slam_state);
    _mav_put_uint8_t(buf, 14, vio_state);
    _mav_put_uint8_t(buf, 15, vps_state);
    _mav_put_uint8_t(buf, 16, lidar_hw_state);
    _mav_put_uint8_t(buf, 17, stereo_cam_hw_state);
    _mav_put_uint8_t(buf, 18, reserved0);
    _mav_put_uint8_t(buf, 19, reserved1);
    _mav_put_uint8_t(buf, 20, reserved2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#else
    mavlink_onboard_pose_estimation_status_t packet;
    packet.timestamp = timestamp;
    packet.active_sources = active_sources;
    packet.lidar_slam_state = lidar_slam_state;
    packet.visual_slam_state = visual_slam_state;
    packet.vio_state = vio_state;
    packet.vps_state = vps_state;
    packet.lidar_hw_state = lidar_hw_state;
    packet.stereo_cam_hw_state = stereo_cam_hw_state;
    packet.reserved0 = reserved0;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#endif
}

/**
 * @brief Send a onboard_pose_estimation_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_pose_estimation_status_send_struct(mavlink_channel_t chan, const mavlink_onboard_pose_estimation_status_t* onboard_pose_estimation_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_pose_estimation_status_send(chan, onboard_pose_estimation_status->timestamp, onboard_pose_estimation_status->lidar_slam_state, onboard_pose_estimation_status->visual_slam_state, onboard_pose_estimation_status->vio_state, onboard_pose_estimation_status->vps_state, onboard_pose_estimation_status->lidar_hw_state, onboard_pose_estimation_status->stereo_cam_hw_state, onboard_pose_estimation_status->active_sources, onboard_pose_estimation_status->reserved0, onboard_pose_estimation_status->reserved1, onboard_pose_estimation_status->reserved2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS, (const char *)onboard_pose_estimation_status, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_pose_estimation_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t lidar_slam_state, uint8_t visual_slam_state, uint8_t vio_state, uint8_t vps_state, uint8_t lidar_hw_state, uint8_t stereo_cam_hw_state, uint32_t active_sources, uint8_t reserved0, uint8_t reserved1, uint8_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, active_sources);
    _mav_put_uint8_t(buf, 12, lidar_slam_state);
    _mav_put_uint8_t(buf, 13, visual_slam_state);
    _mav_put_uint8_t(buf, 14, vio_state);
    _mav_put_uint8_t(buf, 15, vps_state);
    _mav_put_uint8_t(buf, 16, lidar_hw_state);
    _mav_put_uint8_t(buf, 17, stereo_cam_hw_state);
    _mav_put_uint8_t(buf, 18, reserved0);
    _mav_put_uint8_t(buf, 19, reserved1);
    _mav_put_uint8_t(buf, 20, reserved2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#else
    mavlink_onboard_pose_estimation_status_t *packet = (mavlink_onboard_pose_estimation_status_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->active_sources = active_sources;
    packet->lidar_slam_state = lidar_slam_state;
    packet->visual_slam_state = visual_slam_state;
    packet->vio_state = vio_state;
    packet->vps_state = vps_state;
    packet->lidar_hw_state = lidar_hw_state;
    packet->stereo_cam_hw_state = stereo_cam_hw_state;
    packet->reserved0 = reserved0;
    packet->reserved1 = reserved1;
    packet->reserved2 = reserved2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_POSE_ESTIMATION_STATUS UNPACKING


/**
 * @brief Get field timestamp from onboard_pose_estimation_status message
 *
 * @return [us] Timestamp (UNIX time or time since system boot).
 */
static inline uint64_t mavlink_msg_onboard_pose_estimation_status_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lidar_slam_state from onboard_pose_estimation_status message
 *
 * @return  LiDAR SLAM algorithm health (e.g. FAST-LIO). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded, MAV_STATE_EMERGENCY=failed.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_lidar_slam_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field visual_slam_state from onboard_pose_estimation_status message
 *
 * @return  Camera-based SLAM algorithm health (e.g. ORB-SLAM). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_visual_slam_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field vio_state from onboard_pose_estimation_status message
 *
 * @return  Visual-Inertial Odometry algorithm health. MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_vio_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field vps_state from onboard_pose_estimation_status message
 *
 * @return  Vision Positioning System algorithm health (downward camera). MAV_STATE_UNINIT=not started, MAV_STATE_ACTIVE=healthy, MAV_STATE_CRITICAL=degraded.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_vps_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field lidar_hw_state from onboard_pose_estimation_status message
 *
 * @return  Physical LiDAR hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=publishing, MAV_STATE_EMERGENCY=hardware fault.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_lidar_hw_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field stereo_cam_hw_state from onboard_pose_estimation_status message
 *
 * @return  Stereo camera hardware health. MAV_STATE_UNINIT=not detected, MAV_STATE_ACTIVE=streaming, MAV_STATE_EMERGENCY=hardware fault.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_stereo_cam_hw_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field active_sources from onboard_pose_estimation_status message
 *
 * @return  Bitmask of positioning sources currently active and fused by the OBC EKF. Multiple bits may be set simultaneously (e.g. LiDAR SLAM + VIO fusion). Zero means no source active.
 */
static inline uint32_t mavlink_msg_onboard_pose_estimation_status_get_active_sources(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field reserved0 from onboard_pose_estimation_status message
 *
 * @return  Reserved for future use.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_reserved0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field reserved1 from onboard_pose_estimation_status message
 *
 * @return  Reserved for future use.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_reserved1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field reserved2 from onboard_pose_estimation_status message
 *
 * @return  Reserved for future use.
 */
static inline uint8_t mavlink_msg_onboard_pose_estimation_status_get_reserved2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a onboard_pose_estimation_status message into a struct
 *
 * @param msg The message to decode
 * @param onboard_pose_estimation_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_pose_estimation_status_decode(const mavlink_message_t* msg, mavlink_onboard_pose_estimation_status_t* onboard_pose_estimation_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_pose_estimation_status->timestamp = mavlink_msg_onboard_pose_estimation_status_get_timestamp(msg);
    onboard_pose_estimation_status->active_sources = mavlink_msg_onboard_pose_estimation_status_get_active_sources(msg);
    onboard_pose_estimation_status->lidar_slam_state = mavlink_msg_onboard_pose_estimation_status_get_lidar_slam_state(msg);
    onboard_pose_estimation_status->visual_slam_state = mavlink_msg_onboard_pose_estimation_status_get_visual_slam_state(msg);
    onboard_pose_estimation_status->vio_state = mavlink_msg_onboard_pose_estimation_status_get_vio_state(msg);
    onboard_pose_estimation_status->vps_state = mavlink_msg_onboard_pose_estimation_status_get_vps_state(msg);
    onboard_pose_estimation_status->lidar_hw_state = mavlink_msg_onboard_pose_estimation_status_get_lidar_hw_state(msg);
    onboard_pose_estimation_status->stereo_cam_hw_state = mavlink_msg_onboard_pose_estimation_status_get_stereo_cam_hw_state(msg);
    onboard_pose_estimation_status->reserved0 = mavlink_msg_onboard_pose_estimation_status_get_reserved0(msg);
    onboard_pose_estimation_status->reserved1 = mavlink_msg_onboard_pose_estimation_status_get_reserved1(msg);
    onboard_pose_estimation_status->reserved2 = mavlink_msg_onboard_pose_estimation_status_get_reserved2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN;
        memset(onboard_pose_estimation_status, 0, MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_LEN);
    memcpy(onboard_pose_estimation_status, _MAV_PAYLOAD(msg), len);
#endif
}
