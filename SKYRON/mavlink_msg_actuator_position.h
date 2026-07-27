#pragma once
// MESSAGE ACTUATOR_POSITION PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ACTUATOR_POSITION 3352


typedef struct __mavlink_actuator_position_t {
 uint8_t Target; /*<  uint8_t*/
 uint8_t Actual; /*<  uint8_t*/
} mavlink_actuator_position_t;

#define MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN 2
#define MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN 2
#define MAVLINK_MSG_ID_3352_LEN 2
#define MAVLINK_MSG_ID_3352_MIN_LEN 2

#define MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC 65
#define MAVLINK_MSG_ID_3352_CRC 65



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_POSITION { \
    3352, \
    "ACTUATOR_POSITION", \
    2, \
    {  { "Target", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuator_position_t, Target) }, \
         { "Actual", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_actuator_position_t, Actual) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_POSITION { \
    "ACTUATOR_POSITION", \
    2, \
    {  { "Target", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuator_position_t, Target) }, \
         { "Actual", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_actuator_position_t, Actual) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Target  uint8_t
 * @param Actual  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Target, uint8_t Actual)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, Target);
    _mav_put_uint8_t(buf, 1, Actual);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#else
    mavlink_actuator_position_t packet;
    packet.Target = Target;
    packet.Actual = Actual;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
}

/**
 * @brief Pack a actuator_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Target  uint8_t
 * @param Actual  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t Target, uint8_t Actual)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, Target);
    _mav_put_uint8_t(buf, 1, Actual);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#else
    mavlink_actuator_position_t packet;
    packet.Target = Target;
    packet.Actual = Actual;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#endif
}

/**
 * @brief Pack a actuator_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Target  uint8_t
 * @param Actual  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Target,uint8_t Actual)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, Target);
    _mav_put_uint8_t(buf, 1, Actual);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#else
    mavlink_actuator_position_t packet;
    packet.Target = Target;
    packet.Actual = Actual;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
}

/**
 * @brief Encode a actuator_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_position_t* actuator_position)
{
    return mavlink_msg_actuator_position_pack(system_id, component_id, msg, actuator_position->Target, actuator_position->Actual);
}

/**
 * @brief Encode a actuator_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_position_t* actuator_position)
{
    return mavlink_msg_actuator_position_pack_chan(system_id, component_id, chan, msg, actuator_position->Target, actuator_position->Actual);
}

/**
 * @brief Encode a actuator_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param actuator_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_actuator_position_t* actuator_position)
{
    return mavlink_msg_actuator_position_pack_status(system_id, component_id, _status, msg,  actuator_position->Target, actuator_position->Actual);
}

/**
 * @brief Send a actuator_position message
 * @param chan MAVLink channel to send the message
 *
 * @param Target  uint8_t
 * @param Actual  uint8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_position_send(mavlink_channel_t chan, uint8_t Target, uint8_t Actual)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, Target);
    _mav_put_uint8_t(buf, 1, Actual);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_POSITION, buf, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#else
    mavlink_actuator_position_t packet;
    packet.Target = Target;
    packet.Actual = Actual;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_POSITION, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#endif
}

/**
 * @brief Send a actuator_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_position_send_struct(mavlink_channel_t chan, const mavlink_actuator_position_t* actuator_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_position_send(chan, actuator_position->Target, actuator_position->Actual);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_POSITION, (const char *)actuator_position, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Target, uint8_t Actual)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, Target);
    _mav_put_uint8_t(buf, 1, Actual);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_POSITION, buf, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#else
    mavlink_actuator_position_t *packet = (mavlink_actuator_position_t *)msgbuf;
    packet->Target = Target;
    packet->Actual = Actual;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_POSITION, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN, MAVLINK_MSG_ID_ACTUATOR_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_POSITION UNPACKING


/**
 * @brief Get field Target from actuator_position message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_actuator_position_get_Target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field Actual from actuator_position message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_actuator_position_get_Actual(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a actuator_position message into a struct
 *
 * @param msg The message to decode
 * @param actuator_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_position_decode(const mavlink_message_t* msg, mavlink_actuator_position_t* actuator_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_position->Target = mavlink_msg_actuator_position_get_Target(msg);
    actuator_position->Actual = mavlink_msg_actuator_position_get_Actual(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN;
        memset(actuator_position, 0, MAVLINK_MSG_ID_ACTUATOR_POSITION_LEN);
    memcpy(actuator_position, _MAV_PAYLOAD(msg), len);
#endif
}
