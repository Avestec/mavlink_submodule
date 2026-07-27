#pragma once
// MESSAGE ONBOARD_COMPUTER_NUC PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC 3347


typedef struct __mavlink_onboard_computer_nuc_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 uint8_t ROScore_state; /*<  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.*/
 uint8_t SLAM_state; /*<  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.*/
 uint8_t MAVROS_state; /*<  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.*/
 uint8_t converter_state; /*<  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.*/
 uint8_t recording_state; /*<  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.*/
} mavlink_onboard_computer_nuc_t;

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN 9
#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN 9
#define MAVLINK_MSG_ID_3347_LEN 9
#define MAVLINK_MSG_ID_3347_MIN_LEN 9

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC 235
#define MAVLINK_MSG_ID_3347_CRC 235



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_NUC { \
    3347, \
    "ONBOARD_COMPUTER_NUC", \
    6, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_onboard_computer_nuc_t, time_boot_ms) }, \
         { "ROScore_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_onboard_computer_nuc_t, ROScore_state) }, \
         { "SLAM_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_onboard_computer_nuc_t, SLAM_state) }, \
         { "MAVROS_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_onboard_computer_nuc_t, MAVROS_state) }, \
         { "converter_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_onboard_computer_nuc_t, converter_state) }, \
         { "recording_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_onboard_computer_nuc_t, recording_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_NUC { \
    "ONBOARD_COMPUTER_NUC", \
    6, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_onboard_computer_nuc_t, time_boot_ms) }, \
         { "ROScore_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_onboard_computer_nuc_t, ROScore_state) }, \
         { "SLAM_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_onboard_computer_nuc_t, SLAM_state) }, \
         { "MAVROS_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_onboard_computer_nuc_t, MAVROS_state) }, \
         { "converter_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_onboard_computer_nuc_t, converter_state) }, \
         { "recording_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_onboard_computer_nuc_t, recording_state) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_computer_nuc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param ROScore_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param SLAM_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param MAVROS_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param converter_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param recording_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t ROScore_state, uint8_t SLAM_state, uint8_t MAVROS_state, uint8_t converter_state, uint8_t recording_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, ROScore_state);
    _mav_put_uint8_t(buf, 5, SLAM_state);
    _mav_put_uint8_t(buf, 6, MAVROS_state);
    _mav_put_uint8_t(buf, 7, converter_state);
    _mav_put_uint8_t(buf, 8, recording_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#else
    mavlink_onboard_computer_nuc_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ROScore_state = ROScore_state;
    packet.SLAM_state = SLAM_state;
    packet.MAVROS_state = MAVROS_state;
    packet.converter_state = converter_state;
    packet.recording_state = recording_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
}

/**
 * @brief Pack a onboard_computer_nuc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param ROScore_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param SLAM_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param MAVROS_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param converter_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param recording_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t ROScore_state, uint8_t SLAM_state, uint8_t MAVROS_state, uint8_t converter_state, uint8_t recording_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, ROScore_state);
    _mav_put_uint8_t(buf, 5, SLAM_state);
    _mav_put_uint8_t(buf, 6, MAVROS_state);
    _mav_put_uint8_t(buf, 7, converter_state);
    _mav_put_uint8_t(buf, 8, recording_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#else
    mavlink_onboard_computer_nuc_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ROScore_state = ROScore_state;
    packet.SLAM_state = SLAM_state;
    packet.MAVROS_state = MAVROS_state;
    packet.converter_state = converter_state;
    packet.recording_state = recording_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#endif
}

/**
 * @brief Pack a onboard_computer_nuc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param ROScore_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param SLAM_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param MAVROS_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param converter_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param recording_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t ROScore_state,uint8_t SLAM_state,uint8_t MAVROS_state,uint8_t converter_state,uint8_t recording_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, ROScore_state);
    _mav_put_uint8_t(buf, 5, SLAM_state);
    _mav_put_uint8_t(buf, 6, MAVROS_state);
    _mav_put_uint8_t(buf, 7, converter_state);
    _mav_put_uint8_t(buf, 8, recording_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#else
    mavlink_onboard_computer_nuc_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ROScore_state = ROScore_state;
    packet.SLAM_state = SLAM_state;
    packet.MAVROS_state = MAVROS_state;
    packet.converter_state = converter_state;
    packet.recording_state = recording_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
}

/**
 * @brief Encode a onboard_computer_nuc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_nuc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_computer_nuc_t* onboard_computer_nuc)
{
    return mavlink_msg_onboard_computer_nuc_pack(system_id, component_id, msg, onboard_computer_nuc->time_boot_ms, onboard_computer_nuc->ROScore_state, onboard_computer_nuc->SLAM_state, onboard_computer_nuc->MAVROS_state, onboard_computer_nuc->converter_state, onboard_computer_nuc->recording_state);
}

/**
 * @brief Encode a onboard_computer_nuc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_nuc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_computer_nuc_t* onboard_computer_nuc)
{
    return mavlink_msg_onboard_computer_nuc_pack_chan(system_id, component_id, chan, msg, onboard_computer_nuc->time_boot_ms, onboard_computer_nuc->ROScore_state, onboard_computer_nuc->SLAM_state, onboard_computer_nuc->MAVROS_state, onboard_computer_nuc->converter_state, onboard_computer_nuc->recording_state);
}

/**
 * @brief Encode a onboard_computer_nuc struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_nuc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_nuc_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_computer_nuc_t* onboard_computer_nuc)
{
    return mavlink_msg_onboard_computer_nuc_pack_status(system_id, component_id, _status, msg,  onboard_computer_nuc->time_boot_ms, onboard_computer_nuc->ROScore_state, onboard_computer_nuc->SLAM_state, onboard_computer_nuc->MAVROS_state, onboard_computer_nuc->converter_state, onboard_computer_nuc->recording_state);
}

/**
 * @brief Send a onboard_computer_nuc message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param ROScore_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param SLAM_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param MAVROS_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param converter_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 * @param recording_state  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_computer_nuc_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t ROScore_state, uint8_t SLAM_state, uint8_t MAVROS_state, uint8_t converter_state, uint8_t recording_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, ROScore_state);
    _mav_put_uint8_t(buf, 5, SLAM_state);
    _mav_put_uint8_t(buf, 6, MAVROS_state);
    _mav_put_uint8_t(buf, 7, converter_state);
    _mav_put_uint8_t(buf, 8, recording_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#else
    mavlink_onboard_computer_nuc_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ROScore_state = ROScore_state;
    packet.SLAM_state = SLAM_state;
    packet.MAVROS_state = MAVROS_state;
    packet.converter_state = converter_state;
    packet.recording_state = recording_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#endif
}

/**
 * @brief Send a onboard_computer_nuc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_computer_nuc_send_struct(mavlink_channel_t chan, const mavlink_onboard_computer_nuc_t* onboard_computer_nuc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_computer_nuc_send(chan, onboard_computer_nuc->time_boot_ms, onboard_computer_nuc->ROScore_state, onboard_computer_nuc->SLAM_state, onboard_computer_nuc->MAVROS_state, onboard_computer_nuc->converter_state, onboard_computer_nuc->recording_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC, (const char *)onboard_computer_nuc, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_computer_nuc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t ROScore_state, uint8_t SLAM_state, uint8_t MAVROS_state, uint8_t converter_state, uint8_t recording_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, ROScore_state);
    _mav_put_uint8_t(buf, 5, SLAM_state);
    _mav_put_uint8_t(buf, 6, MAVROS_state);
    _mav_put_uint8_t(buf, 7, converter_state);
    _mav_put_uint8_t(buf, 8, recording_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#else
    mavlink_onboard_computer_nuc_t *packet = (mavlink_onboard_computer_nuc_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->ROScore_state = ROScore_state;
    packet->SLAM_state = SLAM_state;
    packet->MAVROS_state = MAVROS_state;
    packet->converter_state = converter_state;
    packet->recording_state = recording_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_COMPUTER_NUC UNPACKING


/**
 * @brief Get field time_boot_ms from onboard_computer_nuc message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_onboard_computer_nuc_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field ROScore_state from onboard_computer_nuc message
 *
 * @return  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
static inline uint8_t mavlink_msg_onboard_computer_nuc_get_ROScore_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field SLAM_state from onboard_computer_nuc message
 *
 * @return  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
static inline uint8_t mavlink_msg_onboard_computer_nuc_get_SLAM_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field MAVROS_state from onboard_computer_nuc message
 *
 * @return  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
static inline uint8_t mavlink_msg_onboard_computer_nuc_get_MAVROS_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field converter_state from onboard_computer_nuc message
 *
 * @return  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
static inline uint8_t mavlink_msg_onboard_computer_nuc_get_converter_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field recording_state from onboard_computer_nuc message
 *
 * @return  program state machine state. PROGRAM_STATE_UNKNOWN if state reporting not supported.
 */
static inline uint8_t mavlink_msg_onboard_computer_nuc_get_recording_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a onboard_computer_nuc message into a struct
 *
 * @param msg The message to decode
 * @param onboard_computer_nuc C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_computer_nuc_decode(const mavlink_message_t* msg, mavlink_onboard_computer_nuc_t* onboard_computer_nuc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_computer_nuc->time_boot_ms = mavlink_msg_onboard_computer_nuc_get_time_boot_ms(msg);
    onboard_computer_nuc->ROScore_state = mavlink_msg_onboard_computer_nuc_get_ROScore_state(msg);
    onboard_computer_nuc->SLAM_state = mavlink_msg_onboard_computer_nuc_get_SLAM_state(msg);
    onboard_computer_nuc->MAVROS_state = mavlink_msg_onboard_computer_nuc_get_MAVROS_state(msg);
    onboard_computer_nuc->converter_state = mavlink_msg_onboard_computer_nuc_get_converter_state(msg);
    onboard_computer_nuc->recording_state = mavlink_msg_onboard_computer_nuc_get_recording_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN;
        memset(onboard_computer_nuc, 0, MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_LEN);
    memcpy(onboard_computer_nuc, _MAV_PAYLOAD(msg), len);
#endif
}
