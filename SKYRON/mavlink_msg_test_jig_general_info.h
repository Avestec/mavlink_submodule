#pragma once
// MESSAGE TEST_JIG_GENERAL_INFO PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO 3355


typedef struct __mavlink_test_jig_general_info_t {
 uint16_t Actuator_Position; /*<  actuator position*/
 uint8_t Arm_Type; /*<  Auto arm detection*/
 uint8_t Limit_Switch_Status[4]; /*<  shared Limit Switch Status for brush, probe, 2 Magnets*/
 uint8_t SPARM_Temp[3]; /*<  SPARM temp*/
 uint8_t SPARM_LiDAR[2]; /*<  SPARM LiDAR*/
 uint8_t LM75_TEMP[3]; /*<  LM75 temp*/
 uint8_t DCM_TEMP[3]; /*<  DCM temp*/
 uint8_t PROP1_TEMP[3]; /*<  PROP1 temp*/
 uint8_t PROP2_TEMP[3]; /*<  PROP2 temp*/
 uint8_t DCM_MLX_PROGRAM; /*<  DCM MLX program*/
 uint8_t PROP1_MLX_PROGRAM; /*<  PROP1 MLX program*/
 uint8_t PROP2_MLX_PROGRAM; /*<  PROP2 MLX program*/
} mavlink_test_jig_general_info_t;

#define MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN 27
#define MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN 27
#define MAVLINK_MSG_ID_3355_LEN 27
#define MAVLINK_MSG_ID_3355_MIN_LEN 27

#define MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC 223
#define MAVLINK_MSG_ID_3355_CRC 223

#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_LIMIT_SWITCH_STATUS_LEN 4
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_SPARM_TEMP_LEN 3
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_SPARM_LIDAR_LEN 2
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_LM75_TEMP_LEN 3
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_DCM_TEMP_LEN 3
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_PROP1_TEMP_LEN 3
#define MAVLINK_MSG_TEST_JIG_GENERAL_INFO_FIELD_PROP2_TEMP_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TEST_JIG_GENERAL_INFO { \
    3355, \
    "TEST_JIG_GENERAL_INFO", \
    12, \
    {  { "Arm_Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_test_jig_general_info_t, Arm_Type) }, \
         { "Limit_Switch_Status", NULL, MAVLINK_TYPE_UINT8_T, 4, 3, offsetof(mavlink_test_jig_general_info_t, Limit_Switch_Status) }, \
         { "Actuator_Position", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_test_jig_general_info_t, Actuator_Position) }, \
         { "SPARM_Temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 7, offsetof(mavlink_test_jig_general_info_t, SPARM_Temp) }, \
         { "SPARM_LiDAR", NULL, MAVLINK_TYPE_UINT8_T, 2, 10, offsetof(mavlink_test_jig_general_info_t, SPARM_LiDAR) }, \
         { "LM75_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 12, offsetof(mavlink_test_jig_general_info_t, LM75_TEMP) }, \
         { "DCM_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 15, offsetof(mavlink_test_jig_general_info_t, DCM_TEMP) }, \
         { "PROP1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 18, offsetof(mavlink_test_jig_general_info_t, PROP1_TEMP) }, \
         { "PROP2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 21, offsetof(mavlink_test_jig_general_info_t, PROP2_TEMP) }, \
         { "DCM_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_test_jig_general_info_t, DCM_MLX_PROGRAM) }, \
         { "PROP1_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_test_jig_general_info_t, PROP1_MLX_PROGRAM) }, \
         { "PROP2_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_test_jig_general_info_t, PROP2_MLX_PROGRAM) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TEST_JIG_GENERAL_INFO { \
    "TEST_JIG_GENERAL_INFO", \
    12, \
    {  { "Arm_Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_test_jig_general_info_t, Arm_Type) }, \
         { "Limit_Switch_Status", NULL, MAVLINK_TYPE_UINT8_T, 4, 3, offsetof(mavlink_test_jig_general_info_t, Limit_Switch_Status) }, \
         { "Actuator_Position", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_test_jig_general_info_t, Actuator_Position) }, \
         { "SPARM_Temp", NULL, MAVLINK_TYPE_UINT8_T, 3, 7, offsetof(mavlink_test_jig_general_info_t, SPARM_Temp) }, \
         { "SPARM_LiDAR", NULL, MAVLINK_TYPE_UINT8_T, 2, 10, offsetof(mavlink_test_jig_general_info_t, SPARM_LiDAR) }, \
         { "LM75_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 12, offsetof(mavlink_test_jig_general_info_t, LM75_TEMP) }, \
         { "DCM_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 15, offsetof(mavlink_test_jig_general_info_t, DCM_TEMP) }, \
         { "PROP1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 18, offsetof(mavlink_test_jig_general_info_t, PROP1_TEMP) }, \
         { "PROP2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 3, 21, offsetof(mavlink_test_jig_general_info_t, PROP2_TEMP) }, \
         { "DCM_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_test_jig_general_info_t, DCM_MLX_PROGRAM) }, \
         { "PROP1_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_test_jig_general_info_t, PROP1_MLX_PROGRAM) }, \
         { "PROP2_MLX_PROGRAM", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_test_jig_general_info_t, PROP2_MLX_PROGRAM) }, \
         } \
}
#endif

/**
 * @brief Pack a test_jig_general_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Arm_Type  Auto arm detection
 * @param Limit_Switch_Status  shared Limit Switch Status for brush, probe, 2 Magnets
 * @param Actuator_Position  actuator position
 * @param SPARM_Temp  SPARM temp
 * @param SPARM_LiDAR  SPARM LiDAR
 * @param LM75_TEMP  LM75 temp
 * @param DCM_TEMP  DCM temp
 * @param PROP1_TEMP  PROP1 temp
 * @param PROP2_TEMP  PROP2 temp
 * @param DCM_MLX_PROGRAM  DCM MLX program
 * @param PROP1_MLX_PROGRAM  PROP1 MLX program
 * @param PROP2_MLX_PROGRAM  PROP2 MLX program
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_general_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Arm_Type, const uint8_t *Limit_Switch_Status, uint16_t Actuator_Position, const uint8_t *SPARM_Temp, const uint8_t *SPARM_LiDAR, const uint8_t *LM75_TEMP, const uint8_t *DCM_TEMP, const uint8_t *PROP1_TEMP, const uint8_t *PROP2_TEMP, uint8_t DCM_MLX_PROGRAM, uint8_t PROP1_MLX_PROGRAM, uint8_t PROP2_MLX_PROGRAM)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN];
    _mav_put_uint16_t(buf, 0, Actuator_Position);
    _mav_put_uint8_t(buf, 2, Arm_Type);
    _mav_put_uint8_t(buf, 24, DCM_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 25, PROP1_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 26, PROP2_MLX_PROGRAM);
    _mav_put_uint8_t_array(buf, 3, Limit_Switch_Status, 4);
    _mav_put_uint8_t_array(buf, 7, SPARM_Temp, 3);
    _mav_put_uint8_t_array(buf, 10, SPARM_LiDAR, 2);
    _mav_put_uint8_t_array(buf, 12, LM75_TEMP, 3);
    _mav_put_uint8_t_array(buf, 15, DCM_TEMP, 3);
    _mav_put_uint8_t_array(buf, 18, PROP1_TEMP, 3);
    _mav_put_uint8_t_array(buf, 21, PROP2_TEMP, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#else
    mavlink_test_jig_general_info_t packet;
    packet.Actuator_Position = Actuator_Position;
    packet.Arm_Type = Arm_Type;
    packet.DCM_MLX_PROGRAM = DCM_MLX_PROGRAM;
    packet.PROP1_MLX_PROGRAM = PROP1_MLX_PROGRAM;
    packet.PROP2_MLX_PROGRAM = PROP2_MLX_PROGRAM;
    mav_array_memcpy(packet.Limit_Switch_Status, Limit_Switch_Status, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.SPARM_Temp, SPARM_Temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.SPARM_LiDAR, SPARM_LiDAR, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.LM75_TEMP, LM75_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.DCM_TEMP, DCM_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP1_TEMP, PROP1_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP2_TEMP, PROP2_TEMP, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
}

/**
 * @brief Pack a test_jig_general_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Arm_Type  Auto arm detection
 * @param Limit_Switch_Status  shared Limit Switch Status for brush, probe, 2 Magnets
 * @param Actuator_Position  actuator position
 * @param SPARM_Temp  SPARM temp
 * @param SPARM_LiDAR  SPARM LiDAR
 * @param LM75_TEMP  LM75 temp
 * @param DCM_TEMP  DCM temp
 * @param PROP1_TEMP  PROP1 temp
 * @param PROP2_TEMP  PROP2 temp
 * @param DCM_MLX_PROGRAM  DCM MLX program
 * @param PROP1_MLX_PROGRAM  PROP1 MLX program
 * @param PROP2_MLX_PROGRAM  PROP2 MLX program
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_general_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t Arm_Type, const uint8_t *Limit_Switch_Status, uint16_t Actuator_Position, const uint8_t *SPARM_Temp, const uint8_t *SPARM_LiDAR, const uint8_t *LM75_TEMP, const uint8_t *DCM_TEMP, const uint8_t *PROP1_TEMP, const uint8_t *PROP2_TEMP, uint8_t DCM_MLX_PROGRAM, uint8_t PROP1_MLX_PROGRAM, uint8_t PROP2_MLX_PROGRAM)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN];
    _mav_put_uint16_t(buf, 0, Actuator_Position);
    _mav_put_uint8_t(buf, 2, Arm_Type);
    _mav_put_uint8_t(buf, 24, DCM_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 25, PROP1_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 26, PROP2_MLX_PROGRAM);
    _mav_put_uint8_t_array(buf, 3, Limit_Switch_Status, 4);
    _mav_put_uint8_t_array(buf, 7, SPARM_Temp, 3);
    _mav_put_uint8_t_array(buf, 10, SPARM_LiDAR, 2);
    _mav_put_uint8_t_array(buf, 12, LM75_TEMP, 3);
    _mav_put_uint8_t_array(buf, 15, DCM_TEMP, 3);
    _mav_put_uint8_t_array(buf, 18, PROP1_TEMP, 3);
    _mav_put_uint8_t_array(buf, 21, PROP2_TEMP, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#else
    mavlink_test_jig_general_info_t packet;
    packet.Actuator_Position = Actuator_Position;
    packet.Arm_Type = Arm_Type;
    packet.DCM_MLX_PROGRAM = DCM_MLX_PROGRAM;
    packet.PROP1_MLX_PROGRAM = PROP1_MLX_PROGRAM;
    packet.PROP2_MLX_PROGRAM = PROP2_MLX_PROGRAM;
    mav_array_memcpy(packet.Limit_Switch_Status, Limit_Switch_Status, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.SPARM_Temp, SPARM_Temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.SPARM_LiDAR, SPARM_LiDAR, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.LM75_TEMP, LM75_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.DCM_TEMP, DCM_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP1_TEMP, PROP1_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP2_TEMP, PROP2_TEMP, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#endif
}

/**
 * @brief Pack a test_jig_general_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Arm_Type  Auto arm detection
 * @param Limit_Switch_Status  shared Limit Switch Status for brush, probe, 2 Magnets
 * @param Actuator_Position  actuator position
 * @param SPARM_Temp  SPARM temp
 * @param SPARM_LiDAR  SPARM LiDAR
 * @param LM75_TEMP  LM75 temp
 * @param DCM_TEMP  DCM temp
 * @param PROP1_TEMP  PROP1 temp
 * @param PROP2_TEMP  PROP2 temp
 * @param DCM_MLX_PROGRAM  DCM MLX program
 * @param PROP1_MLX_PROGRAM  PROP1 MLX program
 * @param PROP2_MLX_PROGRAM  PROP2 MLX program
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_jig_general_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Arm_Type,const uint8_t *Limit_Switch_Status,uint16_t Actuator_Position,const uint8_t *SPARM_Temp,const uint8_t *SPARM_LiDAR,const uint8_t *LM75_TEMP,const uint8_t *DCM_TEMP,const uint8_t *PROP1_TEMP,const uint8_t *PROP2_TEMP,uint8_t DCM_MLX_PROGRAM,uint8_t PROP1_MLX_PROGRAM,uint8_t PROP2_MLX_PROGRAM)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN];
    _mav_put_uint16_t(buf, 0, Actuator_Position);
    _mav_put_uint8_t(buf, 2, Arm_Type);
    _mav_put_uint8_t(buf, 24, DCM_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 25, PROP1_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 26, PROP2_MLX_PROGRAM);
    _mav_put_uint8_t_array(buf, 3, Limit_Switch_Status, 4);
    _mav_put_uint8_t_array(buf, 7, SPARM_Temp, 3);
    _mav_put_uint8_t_array(buf, 10, SPARM_LiDAR, 2);
    _mav_put_uint8_t_array(buf, 12, LM75_TEMP, 3);
    _mav_put_uint8_t_array(buf, 15, DCM_TEMP, 3);
    _mav_put_uint8_t_array(buf, 18, PROP1_TEMP, 3);
    _mav_put_uint8_t_array(buf, 21, PROP2_TEMP, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#else
    mavlink_test_jig_general_info_t packet;
    packet.Actuator_Position = Actuator_Position;
    packet.Arm_Type = Arm_Type;
    packet.DCM_MLX_PROGRAM = DCM_MLX_PROGRAM;
    packet.PROP1_MLX_PROGRAM = PROP1_MLX_PROGRAM;
    packet.PROP2_MLX_PROGRAM = PROP2_MLX_PROGRAM;
    mav_array_memcpy(packet.Limit_Switch_Status, Limit_Switch_Status, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.SPARM_Temp, SPARM_Temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.SPARM_LiDAR, SPARM_LiDAR, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.LM75_TEMP, LM75_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.DCM_TEMP, DCM_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP1_TEMP, PROP1_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP2_TEMP, PROP2_TEMP, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
}

/**
 * @brief Encode a test_jig_general_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_general_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_general_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_jig_general_info_t* test_jig_general_info)
{
    return mavlink_msg_test_jig_general_info_pack(system_id, component_id, msg, test_jig_general_info->Arm_Type, test_jig_general_info->Limit_Switch_Status, test_jig_general_info->Actuator_Position, test_jig_general_info->SPARM_Temp, test_jig_general_info->SPARM_LiDAR, test_jig_general_info->LM75_TEMP, test_jig_general_info->DCM_TEMP, test_jig_general_info->PROP1_TEMP, test_jig_general_info->PROP2_TEMP, test_jig_general_info->DCM_MLX_PROGRAM, test_jig_general_info->PROP1_MLX_PROGRAM, test_jig_general_info->PROP2_MLX_PROGRAM);
}

/**
 * @brief Encode a test_jig_general_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_general_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_general_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_jig_general_info_t* test_jig_general_info)
{
    return mavlink_msg_test_jig_general_info_pack_chan(system_id, component_id, chan, msg, test_jig_general_info->Arm_Type, test_jig_general_info->Limit_Switch_Status, test_jig_general_info->Actuator_Position, test_jig_general_info->SPARM_Temp, test_jig_general_info->SPARM_LiDAR, test_jig_general_info->LM75_TEMP, test_jig_general_info->DCM_TEMP, test_jig_general_info->PROP1_TEMP, test_jig_general_info->PROP2_TEMP, test_jig_general_info->DCM_MLX_PROGRAM, test_jig_general_info->PROP1_MLX_PROGRAM, test_jig_general_info->PROP2_MLX_PROGRAM);
}

/**
 * @brief Encode a test_jig_general_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param test_jig_general_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_jig_general_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_test_jig_general_info_t* test_jig_general_info)
{
    return mavlink_msg_test_jig_general_info_pack_status(system_id, component_id, _status, msg,  test_jig_general_info->Arm_Type, test_jig_general_info->Limit_Switch_Status, test_jig_general_info->Actuator_Position, test_jig_general_info->SPARM_Temp, test_jig_general_info->SPARM_LiDAR, test_jig_general_info->LM75_TEMP, test_jig_general_info->DCM_TEMP, test_jig_general_info->PROP1_TEMP, test_jig_general_info->PROP2_TEMP, test_jig_general_info->DCM_MLX_PROGRAM, test_jig_general_info->PROP1_MLX_PROGRAM, test_jig_general_info->PROP2_MLX_PROGRAM);
}

/**
 * @brief Send a test_jig_general_info message
 * @param chan MAVLink channel to send the message
 *
 * @param Arm_Type  Auto arm detection
 * @param Limit_Switch_Status  shared Limit Switch Status for brush, probe, 2 Magnets
 * @param Actuator_Position  actuator position
 * @param SPARM_Temp  SPARM temp
 * @param SPARM_LiDAR  SPARM LiDAR
 * @param LM75_TEMP  LM75 temp
 * @param DCM_TEMP  DCM temp
 * @param PROP1_TEMP  PROP1 temp
 * @param PROP2_TEMP  PROP2 temp
 * @param DCM_MLX_PROGRAM  DCM MLX program
 * @param PROP1_MLX_PROGRAM  PROP1 MLX program
 * @param PROP2_MLX_PROGRAM  PROP2 MLX program
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_jig_general_info_send(mavlink_channel_t chan, uint8_t Arm_Type, const uint8_t *Limit_Switch_Status, uint16_t Actuator_Position, const uint8_t *SPARM_Temp, const uint8_t *SPARM_LiDAR, const uint8_t *LM75_TEMP, const uint8_t *DCM_TEMP, const uint8_t *PROP1_TEMP, const uint8_t *PROP2_TEMP, uint8_t DCM_MLX_PROGRAM, uint8_t PROP1_MLX_PROGRAM, uint8_t PROP2_MLX_PROGRAM)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN];
    _mav_put_uint16_t(buf, 0, Actuator_Position);
    _mav_put_uint8_t(buf, 2, Arm_Type);
    _mav_put_uint8_t(buf, 24, DCM_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 25, PROP1_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 26, PROP2_MLX_PROGRAM);
    _mav_put_uint8_t_array(buf, 3, Limit_Switch_Status, 4);
    _mav_put_uint8_t_array(buf, 7, SPARM_Temp, 3);
    _mav_put_uint8_t_array(buf, 10, SPARM_LiDAR, 2);
    _mav_put_uint8_t_array(buf, 12, LM75_TEMP, 3);
    _mav_put_uint8_t_array(buf, 15, DCM_TEMP, 3);
    _mav_put_uint8_t_array(buf, 18, PROP1_TEMP, 3);
    _mav_put_uint8_t_array(buf, 21, PROP2_TEMP, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO, buf, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#else
    mavlink_test_jig_general_info_t packet;
    packet.Actuator_Position = Actuator_Position;
    packet.Arm_Type = Arm_Type;
    packet.DCM_MLX_PROGRAM = DCM_MLX_PROGRAM;
    packet.PROP1_MLX_PROGRAM = PROP1_MLX_PROGRAM;
    packet.PROP2_MLX_PROGRAM = PROP2_MLX_PROGRAM;
    mav_array_memcpy(packet.Limit_Switch_Status, Limit_Switch_Status, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.SPARM_Temp, SPARM_Temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.SPARM_LiDAR, SPARM_LiDAR, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.LM75_TEMP, LM75_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.DCM_TEMP, DCM_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP1_TEMP, PROP1_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.PROP2_TEMP, PROP2_TEMP, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO, (const char *)&packet, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#endif
}

/**
 * @brief Send a test_jig_general_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_jig_general_info_send_struct(mavlink_channel_t chan, const mavlink_test_jig_general_info_t* test_jig_general_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_jig_general_info_send(chan, test_jig_general_info->Arm_Type, test_jig_general_info->Limit_Switch_Status, test_jig_general_info->Actuator_Position, test_jig_general_info->SPARM_Temp, test_jig_general_info->SPARM_LiDAR, test_jig_general_info->LM75_TEMP, test_jig_general_info->DCM_TEMP, test_jig_general_info->PROP1_TEMP, test_jig_general_info->PROP2_TEMP, test_jig_general_info->DCM_MLX_PROGRAM, test_jig_general_info->PROP1_MLX_PROGRAM, test_jig_general_info->PROP2_MLX_PROGRAM);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO, (const char *)test_jig_general_info, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_jig_general_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Arm_Type, const uint8_t *Limit_Switch_Status, uint16_t Actuator_Position, const uint8_t *SPARM_Temp, const uint8_t *SPARM_LiDAR, const uint8_t *LM75_TEMP, const uint8_t *DCM_TEMP, const uint8_t *PROP1_TEMP, const uint8_t *PROP2_TEMP, uint8_t DCM_MLX_PROGRAM, uint8_t PROP1_MLX_PROGRAM, uint8_t PROP2_MLX_PROGRAM)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, Actuator_Position);
    _mav_put_uint8_t(buf, 2, Arm_Type);
    _mav_put_uint8_t(buf, 24, DCM_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 25, PROP1_MLX_PROGRAM);
    _mav_put_uint8_t(buf, 26, PROP2_MLX_PROGRAM);
    _mav_put_uint8_t_array(buf, 3, Limit_Switch_Status, 4);
    _mav_put_uint8_t_array(buf, 7, SPARM_Temp, 3);
    _mav_put_uint8_t_array(buf, 10, SPARM_LiDAR, 2);
    _mav_put_uint8_t_array(buf, 12, LM75_TEMP, 3);
    _mav_put_uint8_t_array(buf, 15, DCM_TEMP, 3);
    _mav_put_uint8_t_array(buf, 18, PROP1_TEMP, 3);
    _mav_put_uint8_t_array(buf, 21, PROP2_TEMP, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO, buf, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#else
    mavlink_test_jig_general_info_t *packet = (mavlink_test_jig_general_info_t *)msgbuf;
    packet->Actuator_Position = Actuator_Position;
    packet->Arm_Type = Arm_Type;
    packet->DCM_MLX_PROGRAM = DCM_MLX_PROGRAM;
    packet->PROP1_MLX_PROGRAM = PROP1_MLX_PROGRAM;
    packet->PROP2_MLX_PROGRAM = PROP2_MLX_PROGRAM;
    mav_array_memcpy(packet->Limit_Switch_Status, Limit_Switch_Status, sizeof(uint8_t)*4);
    mav_array_memcpy(packet->SPARM_Temp, SPARM_Temp, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->SPARM_LiDAR, SPARM_LiDAR, sizeof(uint8_t)*2);
    mav_array_memcpy(packet->LM75_TEMP, LM75_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->DCM_TEMP, DCM_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->PROP1_TEMP, PROP1_TEMP, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->PROP2_TEMP, PROP2_TEMP, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO, (const char *)packet, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE TEST_JIG_GENERAL_INFO UNPACKING


/**
 * @brief Get field Arm_Type from test_jig_general_info message
 *
 * @return  Auto arm detection
 */
static inline uint8_t mavlink_msg_test_jig_general_info_get_Arm_Type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field Limit_Switch_Status from test_jig_general_info message
 *
 * @return  shared Limit Switch Status for brush, probe, 2 Magnets
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_Limit_Switch_Status(const mavlink_message_t* msg, uint8_t *Limit_Switch_Status)
{
    return _MAV_RETURN_uint8_t_array(msg, Limit_Switch_Status, 4,  3);
}

/**
 * @brief Get field Actuator_Position from test_jig_general_info message
 *
 * @return  actuator position
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_Actuator_Position(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field SPARM_Temp from test_jig_general_info message
 *
 * @return  SPARM temp
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_SPARM_Temp(const mavlink_message_t* msg, uint8_t *SPARM_Temp)
{
    return _MAV_RETURN_uint8_t_array(msg, SPARM_Temp, 3,  7);
}

/**
 * @brief Get field SPARM_LiDAR from test_jig_general_info message
 *
 * @return  SPARM LiDAR
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_SPARM_LiDAR(const mavlink_message_t* msg, uint8_t *SPARM_LiDAR)
{
    return _MAV_RETURN_uint8_t_array(msg, SPARM_LiDAR, 2,  10);
}

/**
 * @brief Get field LM75_TEMP from test_jig_general_info message
 *
 * @return  LM75 temp
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_LM75_TEMP(const mavlink_message_t* msg, uint8_t *LM75_TEMP)
{
    return _MAV_RETURN_uint8_t_array(msg, LM75_TEMP, 3,  12);
}

/**
 * @brief Get field DCM_TEMP from test_jig_general_info message
 *
 * @return  DCM temp
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_DCM_TEMP(const mavlink_message_t* msg, uint8_t *DCM_TEMP)
{
    return _MAV_RETURN_uint8_t_array(msg, DCM_TEMP, 3,  15);
}

/**
 * @brief Get field PROP1_TEMP from test_jig_general_info message
 *
 * @return  PROP1 temp
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_PROP1_TEMP(const mavlink_message_t* msg, uint8_t *PROP1_TEMP)
{
    return _MAV_RETURN_uint8_t_array(msg, PROP1_TEMP, 3,  18);
}

/**
 * @brief Get field PROP2_TEMP from test_jig_general_info message
 *
 * @return  PROP2 temp
 */
static inline uint16_t mavlink_msg_test_jig_general_info_get_PROP2_TEMP(const mavlink_message_t* msg, uint8_t *PROP2_TEMP)
{
    return _MAV_RETURN_uint8_t_array(msg, PROP2_TEMP, 3,  21);
}

/**
 * @brief Get field DCM_MLX_PROGRAM from test_jig_general_info message
 *
 * @return  DCM MLX program
 */
static inline uint8_t mavlink_msg_test_jig_general_info_get_DCM_MLX_PROGRAM(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field PROP1_MLX_PROGRAM from test_jig_general_info message
 *
 * @return  PROP1 MLX program
 */
static inline uint8_t mavlink_msg_test_jig_general_info_get_PROP1_MLX_PROGRAM(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field PROP2_MLX_PROGRAM from test_jig_general_info message
 *
 * @return  PROP2 MLX program
 */
static inline uint8_t mavlink_msg_test_jig_general_info_get_PROP2_MLX_PROGRAM(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Decode a test_jig_general_info message into a struct
 *
 * @param msg The message to decode
 * @param test_jig_general_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_jig_general_info_decode(const mavlink_message_t* msg, mavlink_test_jig_general_info_t* test_jig_general_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    test_jig_general_info->Actuator_Position = mavlink_msg_test_jig_general_info_get_Actuator_Position(msg);
    test_jig_general_info->Arm_Type = mavlink_msg_test_jig_general_info_get_Arm_Type(msg);
    mavlink_msg_test_jig_general_info_get_Limit_Switch_Status(msg, test_jig_general_info->Limit_Switch_Status);
    mavlink_msg_test_jig_general_info_get_SPARM_Temp(msg, test_jig_general_info->SPARM_Temp);
    mavlink_msg_test_jig_general_info_get_SPARM_LiDAR(msg, test_jig_general_info->SPARM_LiDAR);
    mavlink_msg_test_jig_general_info_get_LM75_TEMP(msg, test_jig_general_info->LM75_TEMP);
    mavlink_msg_test_jig_general_info_get_DCM_TEMP(msg, test_jig_general_info->DCM_TEMP);
    mavlink_msg_test_jig_general_info_get_PROP1_TEMP(msg, test_jig_general_info->PROP1_TEMP);
    mavlink_msg_test_jig_general_info_get_PROP2_TEMP(msg, test_jig_general_info->PROP2_TEMP);
    test_jig_general_info->DCM_MLX_PROGRAM = mavlink_msg_test_jig_general_info_get_DCM_MLX_PROGRAM(msg);
    test_jig_general_info->PROP1_MLX_PROGRAM = mavlink_msg_test_jig_general_info_get_PROP1_MLX_PROGRAM(msg);
    test_jig_general_info->PROP2_MLX_PROGRAM = mavlink_msg_test_jig_general_info_get_PROP2_MLX_PROGRAM(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN? msg->len : MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN;
        memset(test_jig_general_info, 0, MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_LEN);
    memcpy(test_jig_general_info, _MAV_PAYLOAD(msg), len);
#endif
}
