#pragma once
// MESSAGE Test_JIG PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Test_JIG 3354


typedef struct __mavlink_test_jig_t {
 char Target[50]; /*<  word buffer*/
} mavlink_test_jig_t;

#define MAVLINK_MSG_ID_Test_JIG_LEN 50
#define MAVLINK_MSG_ID_Test_JIG_MIN_LEN 50
#define MAVLINK_MSG_ID_3354_LEN 50
#define MAVLINK_MSG_ID_3354_MIN_LEN 50

#define MAVLINK_MSG_ID_Test_JIG_CRC 138
#define MAVLINK_MSG_ID_3354_CRC 138

#define MAVLINK_MSG_Test_JIG_FIELD_TARGET_LEN 50

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Test_JIG { \
    3354, \
    "Test_JIG", \
    1, \
    {  { "Target", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_test_jig_t, Target) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Test_JIG { \
    "Test_JIG", \
    1, \
    {  { "Target", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_test_jig_t, Target) }, \
         } \
}
#endif

/**
 * @brief Pack a test_jig message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Target  word buffer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *Target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Test_JIG_LEN];

    _mav_put_char_array(buf, 0, Target, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Test_JIG_LEN);
#else
    mavlink_test_jig_t packet;

    mav_array_memcpy(packet.Target, Target, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Test_JIG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Test_JIG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
}

/**
 * @brief Pack a test_jig message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Target  word buffer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *Target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Test_JIG_LEN];

    _mav_put_char_array(buf, 0, Target, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Test_JIG_LEN);
#else
    mavlink_test_jig_t packet;

    mav_array_memcpy(packet.Target, Target, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Test_JIG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Test_JIG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN);
#endif
}

/**
 * @brief Pack a test_jig message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Target  word buffer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *Target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Test_JIG_LEN];

    _mav_put_char_array(buf, 0, Target, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Test_JIG_LEN);
#else
    mavlink_test_jig_t packet;

    mav_array_memcpy(packet.Target, Target, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Test_JIG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Test_JIG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
}

/**
 * @brief Encode a test_jig struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_jig C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_jig_t* test_jig)
{
    return mavlink_msg_test_jig_pack(system_id, component_id, msg, test_jig->Target);
}

/**
 * @brief Encode a test_jig struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_jig C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_jig_t* test_jig)
{
    return mavlink_msg_test_jig_pack_chan(system_id, component_id, chan, msg, test_jig->Target);
}

/**
 * @brief Encode a test_jig struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param test_jig C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_test_jig_t* test_jig)
{
    return mavlink_msg_test_jig_pack_status(system_id, component_id, _status, msg,  test_jig->Target);
}

/**
 * @brief Send a test_jig message
 * @param chan MAVLink channel to send the message
 *
 * @param Target  word buffer
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_jig_send(mavlink_channel_t chan, const char *Target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Test_JIG_LEN];

    _mav_put_char_array(buf, 0, Target, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Test_JIG, buf, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#else
    mavlink_test_jig_t packet;

    mav_array_memcpy(packet.Target, Target, sizeof(char)*50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Test_JIG, (const char *)&packet, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#endif
}

/**
 * @brief Send a test_jig message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_jig_send_struct(mavlink_channel_t chan, const mavlink_test_jig_t* test_jig)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_jig_send(chan, test_jig->Target);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Test_JIG, (const char *)test_jig, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#endif
}

#if MAVLINK_MSG_ID_Test_JIG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_jig_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *Target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, Target, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Test_JIG, buf, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#else
    mavlink_test_jig_t *packet = (mavlink_test_jig_t *)msgbuf;

    mav_array_memcpy(packet->Target, Target, sizeof(char)*50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Test_JIG, (const char *)packet, MAVLINK_MSG_ID_Test_JIG_MIN_LEN, MAVLINK_MSG_ID_Test_JIG_LEN, MAVLINK_MSG_ID_Test_JIG_CRC);
#endif
}
#endif

#endif

// MESSAGE Test_JIG UNPACKING


/**
 * @brief Get field Target from test_jig message
 *
 * @return  word buffer
 */
static inline uint16_t mavlink_msg_test_jig_get_Target(const mavlink_message_t* msg, char *Target)
{
    return _MAV_RETURN_char_array(msg, Target, 50,  0);
}

/**
 * @brief Decode a test_jig message into a struct
 *
 * @param msg The message to decode
 * @param test_jig C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_jig_decode(const mavlink_message_t* msg, mavlink_test_jig_t* test_jig)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_jig_get_Target(msg, test_jig->Target);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Test_JIG_LEN? msg->len : MAVLINK_MSG_ID_Test_JIG_LEN;
        memset(test_jig, 0, MAVLINK_MSG_ID_Test_JIG_LEN);
    memcpy(test_jig, _MAV_PAYLOAD(msg), len);
#endif
}
