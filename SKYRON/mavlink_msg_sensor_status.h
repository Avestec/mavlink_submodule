#pragma once
// MESSAGE Sensor_Status PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Sensor_Status 3333


typedef struct __mavlink_sensor_status_t {
 uint8_t arm; /*<  uint8_t*/
 uint8_t voltage[2]; /*<  uint8_t_array*/
 uint8_t front_distance[2]; /*<  uint8_t_array*/
 uint8_t DCM_temp[3]; /*<  uint8_t_array*/
 uint8_t Surface_temp[3]; /*<  uint8_t_array*/
 uint8_t Canopy_temp[3]; /*<  uint8_t_array*/
 uint8_t Prop1_temp[3]; /*<  uint8_t_array*/
 uint8_t Prop2_temp[3]; /*<  uint8_t_array*/
 uint8_t vehicle; /*<  uint8_t*/
} mavlink_sensor_status_t;

#define MAVLINK_MSG_ID_Sensor_Status_LEN 21
#define MAVLINK_MSG_ID_Sensor_Status_MIN_LEN 21
#define MAVLINK_MSG_ID_3333_LEN 21
#define MAVLINK_MSG_ID_3333_MIN_LEN 21

#define MAVLINK_MSG_ID_Sensor_Status_CRC 185
#define MAVLINK_MSG_ID_3333_CRC 185

#define MAVLINK_MSG_Sensor_Status_FIELD_VOLTAGE_LEN 2
#define MAVLINK_MSG_Sensor_Status_FIELD_FRONT_DISTANCE_LEN 2
#define MAVLINK_MSG_Sensor_Status_FIELD_DCM_TEMP_LEN 3
#define MAVLINK_MSG_Sensor_Status_FIELD_SURFACE_TEMP_LEN 3
#define MAVLINK_MSG_Sensor_Status_FIELD_CANOPY_TEMP_LEN 3
#define MAVLINK_MSG_Sensor_Status_FIELD_PROP1_TEMP_LEN 3
#define MAVLINK_MSG_Sensor_Status_FIELD_PROP2_TEMP_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Sensor_Status { \
    3333, \
    "Sensor_Status", \
    9, \
    {  { "arm", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sensor_status_t, arm) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT8_T, 2, 1, offsetof(mavlink_sensor_status_t, voltage) }, \
         { "front_distance", NULL, MAVLINK_TYPE_UINT8_T, 2, 3, offsetof(mavlink_sensor_status_t, front_distance) }, \
         { "DCM_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 5, offsetof(mavlink_sensor_status_t, DCM_temp) }, \
         { "Surface_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 8, offsetof(mavlink_sensor_status_t, Surface_temp) }, \
         { "Canopy_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 11, offsetof(mavlink_sensor_status_t, Canopy_temp) }, \
         { "Prop1_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 14, offsetof(mavlink_sensor_status_t, Prop1_temp) }, \
         { "Prop2_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 17, offsetof(mavlink_sensor_status_t, Prop2_temp) }, \
         { "vehicle", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sensor_status_t, vehicle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Sensor_Status { \
    "Sensor_Status", \
    9, \
    {  { "arm", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sensor_status_t, arm) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT8_T, 2, 1, offsetof(mavlink_sensor_status_t, voltage) }, \
         { "front_distance", NULL, MAVLINK_TYPE_UINT8_T, 2, 3, offsetof(mavlink_sensor_status_t, front_distance) }, \
         { "DCM_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 5, offsetof(mavlink_sensor_status_t, DCM_temp) }, \
         { "Surface_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 8, offsetof(mavlink_sensor_status_t, Surface_temp) }, \
         { "Canopy_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 11, offsetof(mavlink_sensor_status_t, Canopy_temp) }, \
         { "Prop1_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 14, offsetof(mavlink_sensor_status_t, Prop1_temp) }, \
         { "Prop2_temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 17, offsetof(mavlink_sensor_status_t, Prop2_temp) }, \
         { "vehicle", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sensor_status_t, vehicle) }, \
         } \
}
#endif

/**
 * @brief Pack a sensor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param arm  uint8_t
 * @param voltage  uint8_t_array
 * @param front_distance  uint8_t_array
 * @param DCM_temp  uint8_t_array
 * @param Surface_temp  uint8_t_array
 * @param Canopy_temp  uint8_t_array
 * @param Prop1_temp  uint8_t_array
 * @param Prop2_temp  uint8_t_array
 * @param vehicle  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t arm, const uint8_t *voltage, const uint8_t *front_distance, const uint8_t *DCM_temp, const uint8_t *Surface_temp, const uint8_t *Canopy_temp, const uint8_t *Prop1_temp, const uint8_t *Prop2_temp, uint8_t vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Sensor_Status_LEN];
    _mav_put_uint8_t(buf, 0, arm);
    _mav_put_uint8_t(buf, 20, vehicle);
    _mav_put_uint8_t_array(buf, 1, voltage, 2);
    _mav_put_uint8_t_array(buf, 3, front_distance, 2);
    _mav_put_uint8_t_array(buf, 5, DCM_temp, 3);
    _mav_put_uint8_t_array(buf, 8, Surface_temp, 3);
    _mav_put_uint8_t_array(buf, 11, Canopy_temp, 3);
    _mav_put_uint8_t_array(buf, 14, Prop1_temp, 3);
    _mav_put_uint8_t_array(buf, 17, Prop2_temp, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Sensor_Status_LEN);
#else
    mavlink_sensor_status_t packet;
    packet.arm = arm;
    packet.vehicle = vehicle;
    mav_array_memcpy(packet.voltage, voltage, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.front_distance, front_distance, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.DCM_temp, DCM_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Surface_temp, Surface_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Canopy_temp, Canopy_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop1_temp, Prop1_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop2_temp, Prop2_temp, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Sensor_Status_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Sensor_Status;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
}

/**
 * @brief Pack a sensor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param arm  uint8_t
 * @param voltage  uint8_t_array
 * @param front_distance  uint8_t_array
 * @param DCM_temp  uint8_t_array
 * @param Surface_temp  uint8_t_array
 * @param Canopy_temp  uint8_t_array
 * @param Prop1_temp  uint8_t_array
 * @param Prop2_temp  uint8_t_array
 * @param vehicle  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t arm, const uint8_t *voltage, const uint8_t *front_distance, const uint8_t *DCM_temp, const uint8_t *Surface_temp, const uint8_t *Canopy_temp, const uint8_t *Prop1_temp, const uint8_t *Prop2_temp, uint8_t vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Sensor_Status_LEN];
    _mav_put_uint8_t(buf, 0, arm);
    _mav_put_uint8_t(buf, 20, vehicle);
    _mav_put_uint8_t_array(buf, 1, voltage, 2);
    _mav_put_uint8_t_array(buf, 3, front_distance, 2);
    _mav_put_uint8_t_array(buf, 5, DCM_temp, 3);
    _mav_put_uint8_t_array(buf, 8, Surface_temp, 3);
    _mav_put_uint8_t_array(buf, 11, Canopy_temp, 3);
    _mav_put_uint8_t_array(buf, 14, Prop1_temp, 3);
    _mav_put_uint8_t_array(buf, 17, Prop2_temp, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Sensor_Status_LEN);
#else
    mavlink_sensor_status_t packet;
    packet.arm = arm;
    packet.vehicle = vehicle;
    mav_array_memcpy(packet.voltage, voltage, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.front_distance, front_distance, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.DCM_temp, DCM_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Surface_temp, Surface_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Canopy_temp, Canopy_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop1_temp, Prop1_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop2_temp, Prop2_temp, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Sensor_Status_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Sensor_Status;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN);
#endif
}

/**
 * @brief Pack a sensor_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param arm  uint8_t
 * @param voltage  uint8_t_array
 * @param front_distance  uint8_t_array
 * @param DCM_temp  uint8_t_array
 * @param Surface_temp  uint8_t_array
 * @param Canopy_temp  uint8_t_array
 * @param Prop1_temp  uint8_t_array
 * @param Prop2_temp  uint8_t_array
 * @param vehicle  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t arm,const uint8_t *voltage,const uint8_t *front_distance,const uint8_t *DCM_temp,const uint8_t *Surface_temp,const uint8_t *Canopy_temp,const uint8_t *Prop1_temp,const uint8_t *Prop2_temp,uint8_t vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Sensor_Status_LEN];
    _mav_put_uint8_t(buf, 0, arm);
    _mav_put_uint8_t(buf, 20, vehicle);
    _mav_put_uint8_t_array(buf, 1, voltage, 2);
    _mav_put_uint8_t_array(buf, 3, front_distance, 2);
    _mav_put_uint8_t_array(buf, 5, DCM_temp, 3);
    _mav_put_uint8_t_array(buf, 8, Surface_temp, 3);
    _mav_put_uint8_t_array(buf, 11, Canopy_temp, 3);
    _mav_put_uint8_t_array(buf, 14, Prop1_temp, 3);
    _mav_put_uint8_t_array(buf, 17, Prop2_temp, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Sensor_Status_LEN);
#else
    mavlink_sensor_status_t packet;
    packet.arm = arm;
    packet.vehicle = vehicle;
    mav_array_memcpy(packet.voltage, voltage, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.front_distance, front_distance, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.DCM_temp, DCM_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Surface_temp, Surface_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Canopy_temp, Canopy_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop1_temp, Prop1_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop2_temp, Prop2_temp, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Sensor_Status_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Sensor_Status;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
}

/**
 * @brief Encode a sensor_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sensor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sensor_status_t* sensor_status)
{
    return mavlink_msg_sensor_status_pack(system_id, component_id, msg, sensor_status->arm, sensor_status->voltage, sensor_status->front_distance, sensor_status->DCM_temp, sensor_status->Surface_temp, sensor_status->Canopy_temp, sensor_status->Prop1_temp, sensor_status->Prop2_temp, sensor_status->vehicle);
}

/**
 * @brief Encode a sensor_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sensor_status_t* sensor_status)
{
    return mavlink_msg_sensor_status_pack_chan(system_id, component_id, chan, msg, sensor_status->arm, sensor_status->voltage, sensor_status->front_distance, sensor_status->DCM_temp, sensor_status->Surface_temp, sensor_status->Canopy_temp, sensor_status->Prop1_temp, sensor_status->Prop2_temp, sensor_status->vehicle);
}

/**
 * @brief Encode a sensor_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sensor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sensor_status_t* sensor_status)
{
    return mavlink_msg_sensor_status_pack_status(system_id, component_id, _status, msg,  sensor_status->arm, sensor_status->voltage, sensor_status->front_distance, sensor_status->DCM_temp, sensor_status->Surface_temp, sensor_status->Canopy_temp, sensor_status->Prop1_temp, sensor_status->Prop2_temp, sensor_status->vehicle);
}

/**
 * @brief Send a sensor_status message
 * @param chan MAVLink channel to send the message
 *
 * @param arm  uint8_t
 * @param voltage  uint8_t_array
 * @param front_distance  uint8_t_array
 * @param DCM_temp  uint8_t_array
 * @param Surface_temp  uint8_t_array
 * @param Canopy_temp  uint8_t_array
 * @param Prop1_temp  uint8_t_array
 * @param Prop2_temp  uint8_t_array
 * @param vehicle  uint8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sensor_status_send(mavlink_channel_t chan, uint8_t arm, const uint8_t *voltage, const uint8_t *front_distance, const uint8_t *DCM_temp, const uint8_t *Surface_temp, const uint8_t *Canopy_temp, const uint8_t *Prop1_temp, const uint8_t *Prop2_temp, uint8_t vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Sensor_Status_LEN];
    _mav_put_uint8_t(buf, 0, arm);
    _mav_put_uint8_t(buf, 20, vehicle);
    _mav_put_uint8_t_array(buf, 1, voltage, 2);
    _mav_put_uint8_t_array(buf, 3, front_distance, 2);
    _mav_put_uint8_t_array(buf, 5, DCM_temp, 3);
    _mav_put_uint8_t_array(buf, 8, Surface_temp, 3);
    _mav_put_uint8_t_array(buf, 11, Canopy_temp, 3);
    _mav_put_uint8_t_array(buf, 14, Prop1_temp, 3);
    _mav_put_uint8_t_array(buf, 17, Prop2_temp, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Sensor_Status, buf, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#else
    mavlink_sensor_status_t packet;
    packet.arm = arm;
    packet.vehicle = vehicle;
    mav_array_memcpy(packet.voltage, voltage, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.front_distance, front_distance, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.DCM_temp, DCM_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Surface_temp, Surface_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Canopy_temp, Canopy_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop1_temp, Prop1_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.Prop2_temp, Prop2_temp, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Sensor_Status, (const char *)&packet, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#endif
}

/**
 * @brief Send a sensor_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sensor_status_send_struct(mavlink_channel_t chan, const mavlink_sensor_status_t* sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sensor_status_send(chan, sensor_status->arm, sensor_status->voltage, sensor_status->front_distance, sensor_status->DCM_temp, sensor_status->Surface_temp, sensor_status->Canopy_temp, sensor_status->Prop1_temp, sensor_status->Prop2_temp, sensor_status->vehicle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Sensor_Status, (const char *)sensor_status, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#endif
}

#if MAVLINK_MSG_ID_Sensor_Status_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sensor_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t arm, const uint8_t *voltage, const uint8_t *front_distance, const uint8_t *DCM_temp, const uint8_t *Surface_temp, const uint8_t *Canopy_temp, const uint8_t *Prop1_temp, const uint8_t *Prop2_temp, uint8_t vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, arm);
    _mav_put_uint8_t(buf, 20, vehicle);
    _mav_put_uint8_t_array(buf, 1, voltage, 2);
    _mav_put_uint8_t_array(buf, 3, front_distance, 2);
    _mav_put_uint8_t_array(buf, 5, DCM_temp, 3);
    _mav_put_uint8_t_array(buf, 8, Surface_temp, 3);
    _mav_put_uint8_t_array(buf, 11, Canopy_temp, 3);
    _mav_put_uint8_t_array(buf, 14, Prop1_temp, 3);
    _mav_put_uint8_t_array(buf, 17, Prop2_temp, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Sensor_Status, buf, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#else
    mavlink_sensor_status_t *packet = (mavlink_sensor_status_t *)msgbuf;
    packet->arm = arm;
    packet->vehicle = vehicle;
    mav_array_memcpy(packet->voltage, voltage, sizeof(uint8_t)*2);
    mav_array_memcpy(packet->front_distance, front_distance, sizeof(uint8_t)*2);
    mav_array_memcpy(packet->DCM_temp, DCM_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->Surface_temp, Surface_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->Canopy_temp, Canopy_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->Prop1_temp, Prop1_temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->Prop2_temp, Prop2_temp, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Sensor_Status, (const char *)packet, MAVLINK_MSG_ID_Sensor_Status_MIN_LEN, MAVLINK_MSG_ID_Sensor_Status_LEN, MAVLINK_MSG_ID_Sensor_Status_CRC);
#endif
}
#endif

#endif

// MESSAGE Sensor_Status UNPACKING


/**
 * @brief Get field arm from sensor_status message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_sensor_status_get_arm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field voltage from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_voltage(const mavlink_message_t* msg, uint8_t *voltage)
{
    return _MAV_RETURN_uint8_t_array(msg, voltage, 2,  1);
}

/**
 * @brief Get field front_distance from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_front_distance(const mavlink_message_t* msg, uint8_t *front_distance)
{
    return _MAV_RETURN_uint8_t_array(msg, front_distance, 2,  3);
}

/**
 * @brief Get field DCM_temp from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_DCM_temp(const mavlink_message_t* msg, uint8_t *DCM_temp)
{
    return _MAV_RETURN_uint8_t_array(msg, DCM_temp, 3,  5);
}

/**
 * @brief Get field Surface_temp from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_Surface_temp(const mavlink_message_t* msg, uint8_t *Surface_temp)
{
    return _MAV_RETURN_uint8_t_array(msg, Surface_temp, 3,  8);
}

/**
 * @brief Get field Canopy_temp from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_Canopy_temp(const mavlink_message_t* msg, uint8_t *Canopy_temp)
{
    return _MAV_RETURN_uint8_t_array(msg, Canopy_temp, 3,  11);
}

/**
 * @brief Get field Prop1_temp from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_Prop1_temp(const mavlink_message_t* msg, uint8_t *Prop1_temp)
{
    return _MAV_RETURN_uint8_t_array(msg, Prop1_temp, 3,  14);
}

/**
 * @brief Get field Prop2_temp from sensor_status message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_sensor_status_get_Prop2_temp(const mavlink_message_t* msg, uint8_t *Prop2_temp)
{
    return _MAV_RETURN_uint8_t_array(msg, Prop2_temp, 3,  17);
}

/**
 * @brief Get field vehicle from sensor_status message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_sensor_status_get_vehicle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a sensor_status message into a struct
 *
 * @param msg The message to decode
 * @param sensor_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_sensor_status_decode(const mavlink_message_t* msg, mavlink_sensor_status_t* sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sensor_status->arm = mavlink_msg_sensor_status_get_arm(msg);
    mavlink_msg_sensor_status_get_voltage(msg, sensor_status->voltage);
    mavlink_msg_sensor_status_get_front_distance(msg, sensor_status->front_distance);
    mavlink_msg_sensor_status_get_DCM_temp(msg, sensor_status->DCM_temp);
    mavlink_msg_sensor_status_get_Surface_temp(msg, sensor_status->Surface_temp);
    mavlink_msg_sensor_status_get_Canopy_temp(msg, sensor_status->Canopy_temp);
    mavlink_msg_sensor_status_get_Prop1_temp(msg, sensor_status->Prop1_temp);
    mavlink_msg_sensor_status_get_Prop2_temp(msg, sensor_status->Prop2_temp);
    sensor_status->vehicle = mavlink_msg_sensor_status_get_vehicle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Sensor_Status_LEN? msg->len : MAVLINK_MSG_ID_Sensor_Status_LEN;
        memset(sensor_status, 0, MAVLINK_MSG_ID_Sensor_Status_LEN);
    memcpy(sensor_status, _MAV_PAYLOAD(msg), len);
#endif
}
