#pragma once
// MESSAGE UT_Waveform PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_UT_Waveform 3338


typedef struct __mavlink_ut_waveform_t {
 uint8_t Order; /*<  uint8_t*/
 uint8_t UT_Waveform[250]; /*<  uint8_t_array*/
 uint8_t Version; /*<  uint8_t*/
} mavlink_ut_waveform_t;

#define MAVLINK_MSG_ID_UT_Waveform_LEN 252
#define MAVLINK_MSG_ID_UT_Waveform_MIN_LEN 252
#define MAVLINK_MSG_ID_3338_LEN 252
#define MAVLINK_MSG_ID_3338_MIN_LEN 252

#define MAVLINK_MSG_ID_UT_Waveform_CRC 142
#define MAVLINK_MSG_ID_3338_CRC 142

#define MAVLINK_MSG_UT_Waveform_FIELD_UT_WAVEFORM_LEN 250

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UT_Waveform { \
    3338, \
    "UT_Waveform", \
    3, \
    {  { "Order", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ut_waveform_t, Order) }, \
         { "UT_Waveform", NULL, MAVLINK_TYPE_UINT8_T, 250, 1, offsetof(mavlink_ut_waveform_t, UT_Waveform) }, \
         { "Version", NULL, MAVLINK_TYPE_UINT8_T, 0, 251, offsetof(mavlink_ut_waveform_t, Version) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UT_Waveform { \
    "UT_Waveform", \
    3, \
    {  { "Order", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ut_waveform_t, Order) }, \
         { "UT_Waveform", NULL, MAVLINK_TYPE_UINT8_T, 250, 1, offsetof(mavlink_ut_waveform_t, UT_Waveform) }, \
         { "Version", NULL, MAVLINK_TYPE_UINT8_T, 0, 251, offsetof(mavlink_ut_waveform_t, Version) }, \
         } \
}
#endif

/**
 * @brief Pack a ut_waveform message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Order  uint8_t
 * @param UT_Waveform  uint8_t_array
 * @param Version  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_waveform_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Order, const uint8_t *UT_Waveform, uint8_t Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Waveform_LEN];
    _mav_put_uint8_t(buf, 0, Order);
    _mav_put_uint8_t(buf, 251, Version);
    _mav_put_uint8_t_array(buf, 1, UT_Waveform, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Waveform_LEN);
#else
    mavlink_ut_waveform_t packet;
    packet.Order = Order;
    packet.Version = Version;
    mav_array_memcpy(packet.UT_Waveform, UT_Waveform, sizeof(uint8_t)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Waveform_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Waveform;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
}

/**
 * @brief Pack a ut_waveform message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Order  uint8_t
 * @param UT_Waveform  uint8_t_array
 * @param Version  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_waveform_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t Order, const uint8_t *UT_Waveform, uint8_t Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Waveform_LEN];
    _mav_put_uint8_t(buf, 0, Order);
    _mav_put_uint8_t(buf, 251, Version);
    _mav_put_uint8_t_array(buf, 1, UT_Waveform, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Waveform_LEN);
#else
    mavlink_ut_waveform_t packet;
    packet.Order = Order;
    packet.Version = Version;
    mav_array_memcpy(packet.UT_Waveform, UT_Waveform, sizeof(uint8_t)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Waveform_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Waveform;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN);
#endif
}

/**
 * @brief Pack a ut_waveform message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Order  uint8_t
 * @param UT_Waveform  uint8_t_array
 * @param Version  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_waveform_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Order,const uint8_t *UT_Waveform,uint8_t Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Waveform_LEN];
    _mav_put_uint8_t(buf, 0, Order);
    _mav_put_uint8_t(buf, 251, Version);
    _mav_put_uint8_t_array(buf, 1, UT_Waveform, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Waveform_LEN);
#else
    mavlink_ut_waveform_t packet;
    packet.Order = Order;
    packet.Version = Version;
    mav_array_memcpy(packet.UT_Waveform, UT_Waveform, sizeof(uint8_t)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Waveform_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Waveform;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
}

/**
 * @brief Encode a ut_waveform struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ut_waveform C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_waveform_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ut_waveform_t* ut_waveform)
{
    return mavlink_msg_ut_waveform_pack(system_id, component_id, msg, ut_waveform->Order, ut_waveform->UT_Waveform, ut_waveform->Version);
}

/**
 * @brief Encode a ut_waveform struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ut_waveform C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_waveform_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ut_waveform_t* ut_waveform)
{
    return mavlink_msg_ut_waveform_pack_chan(system_id, component_id, chan, msg, ut_waveform->Order, ut_waveform->UT_Waveform, ut_waveform->Version);
}

/**
 * @brief Encode a ut_waveform struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ut_waveform C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_waveform_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ut_waveform_t* ut_waveform)
{
    return mavlink_msg_ut_waveform_pack_status(system_id, component_id, _status, msg,  ut_waveform->Order, ut_waveform->UT_Waveform, ut_waveform->Version);
}

/**
 * @brief Send a ut_waveform message
 * @param chan MAVLink channel to send the message
 *
 * @param Order  uint8_t
 * @param UT_Waveform  uint8_t_array
 * @param Version  uint8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ut_waveform_send(mavlink_channel_t chan, uint8_t Order, const uint8_t *UT_Waveform, uint8_t Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Waveform_LEN];
    _mav_put_uint8_t(buf, 0, Order);
    _mav_put_uint8_t(buf, 251, Version);
    _mav_put_uint8_t_array(buf, 1, UT_Waveform, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Waveform, buf, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#else
    mavlink_ut_waveform_t packet;
    packet.Order = Order;
    packet.Version = Version;
    mav_array_memcpy(packet.UT_Waveform, UT_Waveform, sizeof(uint8_t)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Waveform, (const char *)&packet, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#endif
}

/**
 * @brief Send a ut_waveform message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ut_waveform_send_struct(mavlink_channel_t chan, const mavlink_ut_waveform_t* ut_waveform)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ut_waveform_send(chan, ut_waveform->Order, ut_waveform->UT_Waveform, ut_waveform->Version);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Waveform, (const char *)ut_waveform, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#endif
}

#if MAVLINK_MSG_ID_UT_Waveform_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ut_waveform_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Order, const uint8_t *UT_Waveform, uint8_t Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, Order);
    _mav_put_uint8_t(buf, 251, Version);
    _mav_put_uint8_t_array(buf, 1, UT_Waveform, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Waveform, buf, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#else
    mavlink_ut_waveform_t *packet = (mavlink_ut_waveform_t *)msgbuf;
    packet->Order = Order;
    packet->Version = Version;
    mav_array_memcpy(packet->UT_Waveform, UT_Waveform, sizeof(uint8_t)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Waveform, (const char *)packet, MAVLINK_MSG_ID_UT_Waveform_MIN_LEN, MAVLINK_MSG_ID_UT_Waveform_LEN, MAVLINK_MSG_ID_UT_Waveform_CRC);
#endif
}
#endif

#endif

// MESSAGE UT_Waveform UNPACKING


/**
 * @brief Get field Order from ut_waveform message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_ut_waveform_get_Order(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field UT_Waveform from ut_waveform message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_ut_waveform_get_UT_Waveform(const mavlink_message_t* msg, uint8_t *UT_Waveform)
{
    return _MAV_RETURN_uint8_t_array(msg, UT_Waveform, 250,  1);
}

/**
 * @brief Get field Version from ut_waveform message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_ut_waveform_get_Version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  251);
}

/**
 * @brief Decode a ut_waveform message into a struct
 *
 * @param msg The message to decode
 * @param ut_waveform C-struct to decode the message contents into
 */
static inline void mavlink_msg_ut_waveform_decode(const mavlink_message_t* msg, mavlink_ut_waveform_t* ut_waveform)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ut_waveform->Order = mavlink_msg_ut_waveform_get_Order(msg);
    mavlink_msg_ut_waveform_get_UT_Waveform(msg, ut_waveform->UT_Waveform);
    ut_waveform->Version = mavlink_msg_ut_waveform_get_Version(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UT_Waveform_LEN? msg->len : MAVLINK_MSG_ID_UT_Waveform_LEN;
        memset(ut_waveform, 0, MAVLINK_MSG_ID_UT_Waveform_LEN);
    memcpy(ut_waveform, _MAV_PAYLOAD(msg), len);
#endif
}
