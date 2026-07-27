#pragma once
// MESSAGE MESSAGE_ACK PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_MESSAGE_ACK 3349


typedef struct __mavlink_message_ack_t {
 uint16_t message; /*<  Acknowledged message.*/
 uint8_t result; /*<  Result of message.*/
 uint8_t progress; /*<  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.*/
 int32_t result_param2; /*<  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.*/
 uint8_t target_system; /*<  System which requested the message to be executed*/
 uint8_t target_component; /*<  Component which requested the message to be executed*/
} mavlink_message_ack_t;

#define MAVLINK_MSG_ID_MESSAGE_ACK_LEN 10
#define MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN 3
#define MAVLINK_MSG_ID_3349_LEN 10
#define MAVLINK_MSG_ID_3349_MIN_LEN 3

#define MAVLINK_MSG_ID_MESSAGE_ACK_CRC 157
#define MAVLINK_MSG_ID_3349_CRC 157



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MESSAGE_ACK { \
    3349, \
    "MESSAGE_ACK", \
    6, \
    {  { "message", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_message_ack_t, message) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_message_ack_t, result) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_message_ack_t, progress) }, \
         { "result_param2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_message_ack_t, result_param2) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_message_ack_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_message_ack_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MESSAGE_ACK { \
    "MESSAGE_ACK", \
    6, \
    {  { "message", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_message_ack_t, message) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_message_ack_t, result) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_message_ack_t, progress) }, \
         { "result_param2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_message_ack_t, result_param2) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_message_ack_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_message_ack_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a message_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param message  Acknowledged message.
 * @param result  Result of message.
 * @param progress  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System which requested the message to be executed
 * @param target_component  Component which requested the message to be executed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_message_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t message, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MESSAGE_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#else
    mavlink_message_ack_t packet;
    packet.message = message;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MESSAGE_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
}

/**
 * @brief Pack a message_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param message  Acknowledged message.
 * @param result  Result of message.
 * @param progress  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System which requested the message to be executed
 * @param target_component  Component which requested the message to be executed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_message_ack_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t message, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MESSAGE_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#else
    mavlink_message_ack_t packet;
    packet.message = message;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MESSAGE_ACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#endif
}

/**
 * @brief Pack a message_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message  Acknowledged message.
 * @param result  Result of message.
 * @param progress  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System which requested the message to be executed
 * @param target_component  Component which requested the message to be executed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_message_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t message,uint8_t result,uint8_t progress,int32_t result_param2,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MESSAGE_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#else
    mavlink_message_ack_t packet;
    packet.message = message;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MESSAGE_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
}

/**
 * @brief Encode a message_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param message_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_message_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_message_ack_t* message_ack)
{
    return mavlink_msg_message_ack_pack(system_id, component_id, msg, message_ack->message, message_ack->result, message_ack->progress, message_ack->result_param2, message_ack->target_system, message_ack->target_component);
}

/**
 * @brief Encode a message_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_message_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_message_ack_t* message_ack)
{
    return mavlink_msg_message_ack_pack_chan(system_id, component_id, chan, msg, message_ack->message, message_ack->result, message_ack->progress, message_ack->result_param2, message_ack->target_system, message_ack->target_component);
}

/**
 * @brief Encode a message_ack struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param message_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_message_ack_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_message_ack_t* message_ack)
{
    return mavlink_msg_message_ack_pack_status(system_id, component_id, _status, msg,  message_ack->message, message_ack->result, message_ack->progress, message_ack->result_param2, message_ack->target_system, message_ack->target_component);
}

/**
 * @brief Send a message_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param message  Acknowledged message.
 * @param result  Result of message.
 * @param progress  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System which requested the message to be executed
 * @param target_component  Component which requested the message to be executed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_message_ack_send(mavlink_channel_t chan, uint16_t message, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MESSAGE_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MESSAGE_ACK, buf, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#else
    mavlink_message_ack_t packet;
    packet.message = message;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MESSAGE_ACK, (const char *)&packet, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#endif
}

/**
 * @brief Send a message_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_message_ack_send_struct(mavlink_channel_t chan, const mavlink_message_ack_t* message_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_message_ack_send(chan, message_ack->message, message_ack->result, message_ack->progress, message_ack->result_param2, message_ack->target_system, message_ack->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MESSAGE_ACK, (const char *)message_ack, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_MESSAGE_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_message_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t message, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, message);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MESSAGE_ACK, buf, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#else
    mavlink_message_ack_t *packet = (mavlink_message_ack_t *)msgbuf;
    packet->message = message;
    packet->result = result;
    packet->progress = progress;
    packet->result_param2 = result_param2;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MESSAGE_ACK, (const char *)packet, MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_LEN, MAVLINK_MSG_ID_MESSAGE_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE MESSAGE_ACK UNPACKING


/**
 * @brief Get field message from message_ack message
 *
 * @return  Acknowledged message.
 */
static inline uint16_t mavlink_msg_message_ack_get_message(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field result from message_ack message
 *
 * @return  Result of message.
 */
static inline uint8_t mavlink_msg_message_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field progress from message_ack message
 *
 * @return  Also used as result_param1, it can be set with a enum containing the errors reasons of why the message was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
 */
static inline uint8_t mavlink_msg_message_ack_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field result_param2 from message_ack message
 *
 * @return  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 */
static inline int32_t mavlink_msg_message_ack_get_result_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field target_system from message_ack message
 *
 * @return  System which requested the message to be executed
 */
static inline uint8_t mavlink_msg_message_ack_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from message_ack message
 *
 * @return  Component which requested the message to be executed
 */
static inline uint8_t mavlink_msg_message_ack_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a message_ack message into a struct
 *
 * @param msg The message to decode
 * @param message_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_message_ack_decode(const mavlink_message_t* msg, mavlink_message_ack_t* message_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    message_ack->message = mavlink_msg_message_ack_get_message(msg);
    message_ack->result = mavlink_msg_message_ack_get_result(msg);
    message_ack->progress = mavlink_msg_message_ack_get_progress(msg);
    message_ack->result_param2 = mavlink_msg_message_ack_get_result_param2(msg);
    message_ack->target_system = mavlink_msg_message_ack_get_target_system(msg);
    message_ack->target_component = mavlink_msg_message_ack_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MESSAGE_ACK_LEN? msg->len : MAVLINK_MSG_ID_MESSAGE_ACK_LEN;
        memset(message_ack, 0, MAVLINK_MSG_ID_MESSAGE_ACK_LEN);
    memcpy(message_ack, _MAV_PAYLOAD(msg), len);
#endif
}
