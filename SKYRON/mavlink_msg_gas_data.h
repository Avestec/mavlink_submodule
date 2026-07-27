#pragma once
// MESSAGE Gas_data PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Gas_data 3342


typedef struct __mavlink_gas_data_t {
 float concentration; /*<  float*/
 uint32_t Gas_ID; /*<  Gas type reported by the sensor*/
 float temperature; /*<  float*/
 float pressure; /*<  float*/
 float rel_hum; /*<  float*/
 float abs_hum; /*<  float*/
} mavlink_gas_data_t;

#define MAVLINK_MSG_ID_Gas_data_LEN 24
#define MAVLINK_MSG_ID_Gas_data_MIN_LEN 24
#define MAVLINK_MSG_ID_3342_LEN 24
#define MAVLINK_MSG_ID_3342_MIN_LEN 24

#define MAVLINK_MSG_ID_Gas_data_CRC 189
#define MAVLINK_MSG_ID_3342_CRC 189



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Gas_data { \
    3342, \
    "Gas_data", \
    6, \
    {  { "concentration", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gas_data_t, concentration) }, \
         { "Gas_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_gas_data_t, Gas_ID) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gas_data_t, temperature) }, \
         { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gas_data_t, pressure) }, \
         { "rel_hum", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_gas_data_t, rel_hum) }, \
         { "abs_hum", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gas_data_t, abs_hum) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Gas_data { \
    "Gas_data", \
    6, \
    {  { "concentration", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gas_data_t, concentration) }, \
         { "Gas_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_gas_data_t, Gas_ID) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gas_data_t, temperature) }, \
         { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gas_data_t, pressure) }, \
         { "rel_hum", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_gas_data_t, rel_hum) }, \
         { "abs_hum", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gas_data_t, abs_hum) }, \
         } \
}
#endif

/**
 * @brief Pack a gas_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param concentration  float
 * @param Gas_ID  Gas type reported by the sensor
 * @param temperature  float
 * @param pressure  float
 * @param rel_hum  float
 * @param abs_hum  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gas_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float concentration, uint32_t Gas_ID, float temperature, float pressure, float rel_hum, float abs_hum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Gas_data_LEN];
    _mav_put_float(buf, 0, concentration);
    _mav_put_uint32_t(buf, 4, Gas_ID);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, pressure);
    _mav_put_float(buf, 16, rel_hum);
    _mav_put_float(buf, 20, abs_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Gas_data_LEN);
#else
    mavlink_gas_data_t packet;
    packet.concentration = concentration;
    packet.Gas_ID = Gas_ID;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.rel_hum = rel_hum;
    packet.abs_hum = abs_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Gas_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Gas_data;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
}

/**
 * @brief Pack a gas_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param concentration  float
 * @param Gas_ID  Gas type reported by the sensor
 * @param temperature  float
 * @param pressure  float
 * @param rel_hum  float
 * @param abs_hum  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gas_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float concentration, uint32_t Gas_ID, float temperature, float pressure, float rel_hum, float abs_hum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Gas_data_LEN];
    _mav_put_float(buf, 0, concentration);
    _mav_put_uint32_t(buf, 4, Gas_ID);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, pressure);
    _mav_put_float(buf, 16, rel_hum);
    _mav_put_float(buf, 20, abs_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Gas_data_LEN);
#else
    mavlink_gas_data_t packet;
    packet.concentration = concentration;
    packet.Gas_ID = Gas_ID;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.rel_hum = rel_hum;
    packet.abs_hum = abs_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Gas_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Gas_data;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN);
#endif
}

/**
 * @brief Pack a gas_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param concentration  float
 * @param Gas_ID  Gas type reported by the sensor
 * @param temperature  float
 * @param pressure  float
 * @param rel_hum  float
 * @param abs_hum  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gas_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float concentration,uint32_t Gas_ID,float temperature,float pressure,float rel_hum,float abs_hum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Gas_data_LEN];
    _mav_put_float(buf, 0, concentration);
    _mav_put_uint32_t(buf, 4, Gas_ID);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, pressure);
    _mav_put_float(buf, 16, rel_hum);
    _mav_put_float(buf, 20, abs_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Gas_data_LEN);
#else
    mavlink_gas_data_t packet;
    packet.concentration = concentration;
    packet.Gas_ID = Gas_ID;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.rel_hum = rel_hum;
    packet.abs_hum = abs_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Gas_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Gas_data;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
}

/**
 * @brief Encode a gas_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gas_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gas_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gas_data_t* gas_data)
{
    return mavlink_msg_gas_data_pack(system_id, component_id, msg, gas_data->concentration, gas_data->Gas_ID, gas_data->temperature, gas_data->pressure, gas_data->rel_hum, gas_data->abs_hum);
}

/**
 * @brief Encode a gas_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gas_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gas_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gas_data_t* gas_data)
{
    return mavlink_msg_gas_data_pack_chan(system_id, component_id, chan, msg, gas_data->concentration, gas_data->Gas_ID, gas_data->temperature, gas_data->pressure, gas_data->rel_hum, gas_data->abs_hum);
}

/**
 * @brief Encode a gas_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gas_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gas_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gas_data_t* gas_data)
{
    return mavlink_msg_gas_data_pack_status(system_id, component_id, _status, msg,  gas_data->concentration, gas_data->Gas_ID, gas_data->temperature, gas_data->pressure, gas_data->rel_hum, gas_data->abs_hum);
}

/**
 * @brief Send a gas_data message
 * @param chan MAVLink channel to send the message
 *
 * @param concentration  float
 * @param Gas_ID  Gas type reported by the sensor
 * @param temperature  float
 * @param pressure  float
 * @param rel_hum  float
 * @param abs_hum  float
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gas_data_send(mavlink_channel_t chan, float concentration, uint32_t Gas_ID, float temperature, float pressure, float rel_hum, float abs_hum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Gas_data_LEN];
    _mav_put_float(buf, 0, concentration);
    _mav_put_uint32_t(buf, 4, Gas_ID);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, pressure);
    _mav_put_float(buf, 16, rel_hum);
    _mav_put_float(buf, 20, abs_hum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Gas_data, buf, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#else
    mavlink_gas_data_t packet;
    packet.concentration = concentration;
    packet.Gas_ID = Gas_ID;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.rel_hum = rel_hum;
    packet.abs_hum = abs_hum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Gas_data, (const char *)&packet, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#endif
}

/**
 * @brief Send a gas_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gas_data_send_struct(mavlink_channel_t chan, const mavlink_gas_data_t* gas_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gas_data_send(chan, gas_data->concentration, gas_data->Gas_ID, gas_data->temperature, gas_data->pressure, gas_data->rel_hum, gas_data->abs_hum);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Gas_data, (const char *)gas_data, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#endif
}

#if MAVLINK_MSG_ID_Gas_data_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gas_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float concentration, uint32_t Gas_ID, float temperature, float pressure, float rel_hum, float abs_hum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, concentration);
    _mav_put_uint32_t(buf, 4, Gas_ID);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, pressure);
    _mav_put_float(buf, 16, rel_hum);
    _mav_put_float(buf, 20, abs_hum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Gas_data, buf, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#else
    mavlink_gas_data_t *packet = (mavlink_gas_data_t *)msgbuf;
    packet->concentration = concentration;
    packet->Gas_ID = Gas_ID;
    packet->temperature = temperature;
    packet->pressure = pressure;
    packet->rel_hum = rel_hum;
    packet->abs_hum = abs_hum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Gas_data, (const char *)packet, MAVLINK_MSG_ID_Gas_data_MIN_LEN, MAVLINK_MSG_ID_Gas_data_LEN, MAVLINK_MSG_ID_Gas_data_CRC);
#endif
}
#endif

#endif

// MESSAGE Gas_data UNPACKING


/**
 * @brief Get field concentration from gas_data message
 *
 * @return  float
 */
static inline float mavlink_msg_gas_data_get_concentration(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field Gas_ID from gas_data message
 *
 * @return  Gas type reported by the sensor
 */
static inline uint32_t mavlink_msg_gas_data_get_Gas_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field temperature from gas_data message
 *
 * @return  float
 */
static inline float mavlink_msg_gas_data_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pressure from gas_data message
 *
 * @return  float
 */
static inline float mavlink_msg_gas_data_get_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rel_hum from gas_data message
 *
 * @return  float
 */
static inline float mavlink_msg_gas_data_get_rel_hum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field abs_hum from gas_data message
 *
 * @return  float
 */
static inline float mavlink_msg_gas_data_get_abs_hum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a gas_data message into a struct
 *
 * @param msg The message to decode
 * @param gas_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_gas_data_decode(const mavlink_message_t* msg, mavlink_gas_data_t* gas_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gas_data->concentration = mavlink_msg_gas_data_get_concentration(msg);
    gas_data->Gas_ID = mavlink_msg_gas_data_get_Gas_ID(msg);
    gas_data->temperature = mavlink_msg_gas_data_get_temperature(msg);
    gas_data->pressure = mavlink_msg_gas_data_get_pressure(msg);
    gas_data->rel_hum = mavlink_msg_gas_data_get_rel_hum(msg);
    gas_data->abs_hum = mavlink_msg_gas_data_get_abs_hum(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Gas_data_LEN? msg->len : MAVLINK_MSG_ID_Gas_data_LEN;
        memset(gas_data, 0, MAVLINK_MSG_ID_Gas_data_LEN);
    memcpy(gas_data, _MAV_PAYLOAD(msg), len);
#endif
}
