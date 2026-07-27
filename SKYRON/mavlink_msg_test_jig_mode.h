#pragma once
// MESSAGE TEST_JIG_MODE PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_TEST_JIG_MODE 3361


typedef struct __mavlink_test_jig_mode_t {
 uint8_t TEST_JIG_MODE; /*<  0 for normal mode, 1 for debug (test jig) mode*/
} mavlink_test_jig_mode_t;

#define MAVLINK_MSG_ID_TEST_JIG_MODE_LEN 1
#define MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN 1
#define MAVLINK_MSG_ID_3361_LEN 1
#define MAVLINK_MSG_ID_3361_MIN_LEN 1

#define MAVLINK_MSG_ID_TEST_JIG_MODE_CRC 135
#define MAVLINK_MSG_ID_3361_CRC 135



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TEST_JIG_MODE { \
    3361, \
    "TEST_JIG_MODE", \
    1, \
    {  { "TEST_JIG_MODE", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_jig_mode_t, TEST_JIG_MODE) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TEST_JIG_MODE { \
    "TEST_JIG_MODE", \
    1, \
    {  { "TEST_JIG_MODE", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_jig_mode_t, TEST_JIG_MODE) }, \
         } \
}
#endif

/**
 * @brief Pack a test_jig_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TEST_JIG_MODE  0 for normal mode, 1 for debug (test jig) mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t TEST_JIG_MODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_MODE_LEN];
    _mav_put_uint8_t(buf, 0, TEST_JIG_MODE);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#else
    mavlink_test_jig_mode_t packet;
    packet.TEST_JIG_MODE = TEST_JIG_MODE;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
}

/**
 * @brief Pack a test_jig_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param TEST_JIG_MODE  0 for normal mode, 1 for debug (test jig) mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t TEST_JIG_MODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_MODE_LEN];
    _mav_put_uint8_t(buf, 0, TEST_JIG_MODE);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#else
    mavlink_test_jig_mode_t packet;
    packet.TEST_JIG_MODE = TEST_JIG_MODE;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#endif
}

/**
 * @brief Pack a test_jig_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TEST_JIG_MODE  0 for normal mode, 1 for debug (test jig) mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t TEST_JIG_MODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_MODE_LEN];
    _mav_put_uint8_t(buf, 0, TEST_JIG_MODE);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#else
    mavlink_test_jig_mode_t packet;
    packet.TEST_JIG_MODE = TEST_JIG_MODE;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
}

/**
 * @brief Encode a test_jig_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_jig_mode_t* test_jig_mode)
{
    return mavlink_msg_test_jig_mode_pack(system_id, component_id, msg, test_jig_mode->TEST_JIG_MODE);
}

/**
 * @brief Encode a test_jig_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_jig_mode_t* test_jig_mode)
{
    return mavlink_msg_test_jig_mode_pack_chan(system_id, component_id, chan, msg, test_jig_mode->TEST_JIG_MODE);
}

/**
 * @brief Encode a test_jig_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_test_jig_mode_t* test_jig_mode)
{
    return mavlink_msg_test_jig_mode_pack_status(system_id, component_id, _status, msg,  test_jig_mode->TEST_JIG_MODE);
}

/**
 * @brief Send a test_jig_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param TEST_JIG_MODE  0 for normal mode, 1 for debug (test jig) mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_jig_mode_send(mavlink_channel_t chan, uint8_t TEST_JIG_MODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_MODE_LEN];
    _mav_put_uint8_t(buf, 0, TEST_JIG_MODE);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_MODE, buf, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#else
    mavlink_test_jig_mode_t packet;
    packet.TEST_JIG_MODE = TEST_JIG_MODE;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_MODE, (const char *)&packet, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#endif
}

/**
 * @brief Send a test_jig_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_jig_mode_send_struct(mavlink_channel_t chan, const mavlink_test_jig_mode_t* test_jig_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_jig_mode_send(chan, test_jig_mode->TEST_JIG_MODE);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_MODE, (const char *)test_jig_mode, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_TEST_JIG_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_jig_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t TEST_JIG_MODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, TEST_JIG_MODE);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_MODE, buf, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#else
    mavlink_test_jig_mode_t *packet = (mavlink_test_jig_mode_t *)msgbuf;
    packet->TEST_JIG_MODE = TEST_JIG_MODE;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_MODE, (const char *)packet, MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN, MAVLINK_MSG_ID_TEST_JIG_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE TEST_JIG_MODE UNPACKING


/**
 * @brief Get field TEST_JIG_MODE from test_jig_mode message
 *
 * @return  0 for normal mode, 1 for debug (test jig) mode
 */
static inline uint8_t mavlink_msg_test_jig_mode_get_TEST_JIG_MODE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a test_jig_mode message into a struct
 *
 * @param msg The message to decode
 * @param test_jig_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_jig_mode_decode(const mavlink_message_t* msg, mavlink_test_jig_mode_t* test_jig_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    test_jig_mode->TEST_JIG_MODE = mavlink_msg_test_jig_mode_get_TEST_JIG_MODE(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TEST_JIG_MODE_LEN? msg->len : MAVLINK_MSG_ID_TEST_JIG_MODE_LEN;
        memset(test_jig_mode, 0, MAVLINK_MSG_ID_TEST_JIG_MODE_LEN);
    memcpy(test_jig_mode, _MAV_PAYLOAD(msg), len);
#endif
}
