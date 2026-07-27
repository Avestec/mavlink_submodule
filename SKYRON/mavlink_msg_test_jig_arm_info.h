#pragma once
// MESSAGE TEST_JIG_ARM_INFO PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_TEST_JIG_ARM_INFO 3357


typedef struct __mavlink_test_jig_arm_info_t {
 uint8_t Arm_Type; /*<  Auto arm detection*/
} mavlink_test_jig_arm_info_t;

#define MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN 1
#define MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN 1
#define MAVLINK_MSG_ID_3357_LEN 1
#define MAVLINK_MSG_ID_3357_MIN_LEN 1

#define MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC 47
#define MAVLINK_MSG_ID_3357_CRC 47



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TEST_JIG_ARM_INFO { \
    3357, \
    "TEST_JIG_ARM_INFO", \
    1, \
    {  { "Arm_Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_jig_arm_info_t, Arm_Type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TEST_JIG_ARM_INFO { \
    "TEST_JIG_ARM_INFO", \
    1, \
    {  { "Arm_Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_jig_arm_info_t, Arm_Type) }, \
         } \
}
#endif

/**
 * @brief Pack a test_jig_arm_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Arm_Type  Auto arm detection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Arm_Type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN];
    _mav_put_uint8_t(buf, 0, Arm_Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#else
    mavlink_test_jig_arm_info_t packet;
    packet.Arm_Type = Arm_Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_ARM_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
}

/**
 * @brief Pack a test_jig_arm_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Arm_Type  Auto arm detection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t Arm_Type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN];
    _mav_put_uint8_t(buf, 0, Arm_Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#else
    mavlink_test_jig_arm_info_t packet;
    packet.Arm_Type = Arm_Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_ARM_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#endif
}

/**
 * @brief Pack a test_jig_arm_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Arm_Type  Auto arm detection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Arm_Type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN];
    _mav_put_uint8_t(buf, 0, Arm_Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#else
    mavlink_test_jig_arm_info_t packet;
    packet.Arm_Type = Arm_Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_ARM_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
}

/**
 * @brief Encode a test_jig_arm_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_arm_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_jig_arm_info_t* test_jig_arm_info)
{
    return mavlink_msg_test_jig_arm_info_pack(system_id, component_id, msg, test_jig_arm_info->Arm_Type);
}

/**
 * @brief Encode a test_jig_arm_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_arm_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_jig_arm_info_t* test_jig_arm_info)
{
    return mavlink_msg_test_jig_arm_info_pack_chan(system_id, component_id, chan, msg, test_jig_arm_info->Arm_Type);
}

/**
 * @brief Encode a test_jig_arm_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_arm_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_arm_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_test_jig_arm_info_t* test_jig_arm_info)
{
    return mavlink_msg_test_jig_arm_info_pack_status(system_id, component_id, _status, msg,  test_jig_arm_info->Arm_Type);
}

/**
 * @brief Send a test_jig_arm_info message
 * @param chan MAVLink channel to send the message
 *
 * @param Arm_Type  Auto arm detection
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_jig_arm_info_send(mavlink_channel_t chan, uint8_t Arm_Type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN];
    _mav_put_uint8_t(buf, 0, Arm_Type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO, buf, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#else
    mavlink_test_jig_arm_info_t packet;
    packet.Arm_Type = Arm_Type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO, (const char *)&packet, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#endif
}

/**
 * @brief Send a test_jig_arm_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_jig_arm_info_send_struct(mavlink_channel_t chan, const mavlink_test_jig_arm_info_t* test_jig_arm_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_jig_arm_info_send(chan, test_jig_arm_info->Arm_Type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO, (const char *)test_jig_arm_info, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_jig_arm_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Arm_Type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, Arm_Type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO, buf, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#else
    mavlink_test_jig_arm_info_t *packet = (mavlink_test_jig_arm_info_t *)msgbuf;
    packet->Arm_Type = Arm_Type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO, (const char *)packet, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE TEST_JIG_ARM_INFO UNPACKING


/**
 * @brief Get field Arm_Type from test_jig_arm_info message
 *
 * @return  Auto arm detection
 */
static inline uint8_t mavlink_msg_test_jig_arm_info_get_Arm_Type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a test_jig_arm_info message into a struct
 *
 * @param msg The message to decode
 * @param test_jig_arm_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_jig_arm_info_decode(const mavlink_message_t* msg, mavlink_test_jig_arm_info_t* test_jig_arm_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    test_jig_arm_info->Arm_Type = mavlink_msg_test_jig_arm_info_get_Arm_Type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN? msg->len : MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN;
        memset(test_jig_arm_info, 0, MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_LEN);
    memcpy(test_jig_arm_info, _MAV_PAYLOAD(msg), len);
#endif
}
