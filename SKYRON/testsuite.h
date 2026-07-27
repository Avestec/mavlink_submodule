/** @file
 *    @brief MAVLink comm protocol testsuite generated from SKYRON.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef SKYRON_TESTSUITE_H
#define SKYRON_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_all(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_SKYRON(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_all(system_id, component_id, last_msg);
    mavlink_test_SKYRON(system_id, component_id, last_msg);
}
#endif

#include "../all/testsuite.h"


static void mavlink_test_sensor_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Sensor_Status >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sensor_status_t packet_in = {
        5,{ 72, 73 },{ 206, 207 },{ 84, 85, 86 },{ 29, 30, 31 },{ 230, 231, 232 },{ 175, 176, 177 },{ 120, 121, 122 },65
    };
    mavlink_sensor_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.arm = packet_in.arm;
        packet1.vehicle = packet_in.vehicle;
        
        mav_array_memcpy(packet1.voltage, packet_in.voltage, sizeof(uint8_t)*2);
        mav_array_memcpy(packet1.front_distance, packet_in.front_distance, sizeof(uint8_t)*2);
        mav_array_memcpy(packet1.DCM_temp, packet_in.DCM_temp, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.Surface_temp, packet_in.Surface_temp, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.Canopy_temp, packet_in.Canopy_temp, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.Prop1_temp, packet_in.Prop1_temp, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.Prop2_temp, packet_in.Prop2_temp, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Sensor_Status_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Sensor_Status_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sensor_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sensor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sensor_status_pack(system_id, component_id, &msg , packet1.arm , packet1.voltage , packet1.front_distance , packet1.DCM_temp , packet1.Surface_temp , packet1.Canopy_temp , packet1.Prop1_temp , packet1.Prop2_temp , packet1.vehicle );
    mavlink_msg_sensor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sensor_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.arm , packet1.voltage , packet1.front_distance , packet1.DCM_temp , packet1.Surface_temp , packet1.Canopy_temp , packet1.Prop1_temp , packet1.Prop2_temp , packet1.vehicle );
    mavlink_msg_sensor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sensor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sensor_status_send(MAVLINK_COMM_1 , packet1.arm , packet1.voltage , packet1.front_distance , packet1.DCM_temp , packet1.Surface_temp , packet1.Canopy_temp , packet1.Prop1_temp , packet1.Prop2_temp , packet1.vehicle );
    mavlink_msg_sensor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Sensor_Status") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Sensor_Status) != NULL);
#endif
}

static void mavlink_test_olympus_reading(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Olympus_Reading >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_olympus_reading_t packet_in = {
        { 5, 6, 7 }
    };
    mavlink_olympus_reading_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_olympus_reading_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_olympus_reading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_olympus_reading_pack(system_id, component_id, &msg , packet1.data );
    mavlink_msg_olympus_reading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_olympus_reading_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data );
    mavlink_msg_olympus_reading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_olympus_reading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_olympus_reading_send(MAVLINK_COMM_1 , packet1.data );
    mavlink_msg_olympus_reading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Olympus_Reading") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Olympus_Reading) != NULL);
#endif
}

static void mavlink_test_mt_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MT_Gimbal >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mt_gimbal_t packet_in = {
        17.0,17
    };
    mavlink_mt_gimbal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Movement = packet_in.Movement;
        packet1.Home = packet_in.Home;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_gimbal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mt_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_gimbal_pack(system_id, component_id, &msg , packet1.Movement , packet1.Home );
    mavlink_msg_mt_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_gimbal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Movement , packet1.Home );
    mavlink_msg_mt_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mt_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_gimbal_send(MAVLINK_COMM_1 , packet1.Movement , packet1.Home );
    mavlink_msg_mt_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MT_Gimbal") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MT_Gimbal) != NULL);
#endif
}

static void mavlink_test_encoder_count(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Encoder_Count >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_encoder_count_t packet_in = {
        963497464
    };
    mavlink_encoder_count_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Encoder_count = packet_in.Encoder_count;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Encoder_Count_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Encoder_Count_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_encoder_count_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_encoder_count_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_encoder_count_pack(system_id, component_id, &msg , packet1.Encoder_count );
    mavlink_msg_encoder_count_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_encoder_count_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Encoder_count );
    mavlink_msg_encoder_count_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_encoder_count_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_encoder_count_send(MAVLINK_COMM_1 , packet1.Encoder_count );
    mavlink_msg_encoder_count_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Encoder_Count") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Encoder_Count) != NULL);
#endif
}

static void mavlink_test_ut_thickness(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_UT_Thickness >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ut_thickness_t packet_in = {
        17.0
    };
    mavlink_ut_thickness_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.UT_Thickness = packet_in.UT_Thickness;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_UT_Thickness_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_UT_Thickness_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_thickness_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ut_thickness_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_thickness_pack(system_id, component_id, &msg , packet1.UT_Thickness );
    mavlink_msg_ut_thickness_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_thickness_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.UT_Thickness );
    mavlink_msg_ut_thickness_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ut_thickness_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_thickness_send(MAVLINK_COMM_1 , packet1.UT_Thickness );
    mavlink_msg_ut_thickness_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("UT_Thickness") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_UT_Thickness) != NULL);
#endif
}

static void mavlink_test_ut_waveform(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_UT_Waveform >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ut_waveform_t packet_in = {
        5,{ 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65 },182
    };
    mavlink_ut_waveform_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Order = packet_in.Order;
        packet1.Version = packet_in.Version;
        
        mav_array_memcpy(packet1.UT_Waveform, packet_in.UT_Waveform, sizeof(uint8_t)*250);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_UT_Waveform_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_UT_Waveform_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_waveform_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ut_waveform_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_waveform_pack(system_id, component_id, &msg , packet1.Order , packet1.UT_Waveform , packet1.Version );
    mavlink_msg_ut_waveform_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_waveform_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Order , packet1.UT_Waveform , packet1.Version );
    mavlink_msg_ut_waveform_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ut_waveform_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_waveform_send(MAVLINK_COMM_1 , packet1.Order , packet1.UT_Waveform , packet1.Version );
    mavlink_msg_ut_waveform_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("UT_Waveform") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_UT_Waveform) != NULL);
#endif
}

static void mavlink_test_ut_speed(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_UT_Speed >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ut_speed_t packet_in = {
        17235
    };
    mavlink_ut_speed_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Speed = packet_in.Speed;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_UT_Speed_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_UT_Speed_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_speed_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ut_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_speed_pack(system_id, component_id, &msg , packet1.Speed );
    mavlink_msg_ut_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_speed_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Speed );
    mavlink_msg_ut_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ut_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ut_speed_send(MAVLINK_COMM_1 , packet1.Speed );
    mavlink_msg_ut_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("UT_Speed") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_UT_Speed) != NULL);
#endif
}

static void mavlink_test_fusion_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Fusion_data >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_fusion_data_t packet_in = {
        17.0,45.0
    };
    mavlink_fusion_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.distance = packet_in.distance;
        packet1.rotatory = packet_in.rotatory;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Fusion_data_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Fusion_data_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fusion_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_fusion_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fusion_data_pack(system_id, component_id, &msg , packet1.distance , packet1.rotatory );
    mavlink_msg_fusion_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fusion_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.distance , packet1.rotatory );
    mavlink_msg_fusion_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_fusion_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fusion_data_send(MAVLINK_COMM_1 , packet1.distance , packet1.rotatory );
    mavlink_msg_fusion_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Fusion_data") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Fusion_data) != NULL);
#endif
}

static void mavlink_test_mt_og(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MT_OG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mt_og_t packet_in = {
        { 5, 6, 7 }
    };
    mavlink_mt_og_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MT_OG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MT_OG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_og_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mt_og_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_og_pack(system_id, component_id, &msg , packet1.data );
    mavlink_msg_mt_og_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_og_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data );
    mavlink_msg_mt_og_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mt_og_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mt_og_send(MAVLINK_COMM_1 , packet1.data );
    mavlink_msg_mt_og_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MT_OG") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MT_OG) != NULL);
#endif
}

static void mavlink_test_gas_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Gas_data >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gas_data_t packet_in = {
        17.0,963497672,73.0,101.0,129.0,157.0
    };
    mavlink_gas_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.concentration = packet_in.concentration;
        packet1.Gas_ID = packet_in.Gas_ID;
        packet1.temperature = packet_in.temperature;
        packet1.pressure = packet_in.pressure;
        packet1.rel_hum = packet_in.rel_hum;
        packet1.abs_hum = packet_in.abs_hum;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Gas_data_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Gas_data_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gas_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gas_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gas_data_pack(system_id, component_id, &msg , packet1.concentration , packet1.Gas_ID , packet1.temperature , packet1.pressure , packet1.rel_hum , packet1.abs_hum );
    mavlink_msg_gas_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gas_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.concentration , packet1.Gas_ID , packet1.temperature , packet1.pressure , packet1.rel_hum , packet1.abs_hum );
    mavlink_msg_gas_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gas_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gas_data_send(MAVLINK_COMM_1 , packet1.concentration , packet1.Gas_ID , packet1.temperature , packet1.pressure , packet1.rel_hum , packet1.abs_hum );
    mavlink_msg_gas_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Gas_data") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Gas_data) != NULL);
#endif
}

static void mavlink_test_onboard_computer_nuc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_computer_nuc_t packet_in = {
        963497464,17,84,151,218,29
    };
    mavlink_onboard_computer_nuc_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.ROScore_state = packet_in.ROScore_state;
        packet1.SLAM_state = packet_in.SLAM_state;
        packet1.MAVROS_state = packet_in.MAVROS_state;
        packet1.converter_state = packet_in.converter_state;
        packet1.recording_state = packet_in.recording_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_nuc_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_computer_nuc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_nuc_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.ROScore_state , packet1.SLAM_state , packet1.MAVROS_state , packet1.converter_state , packet1.recording_state );
    mavlink_msg_onboard_computer_nuc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_nuc_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.ROScore_state , packet1.SLAM_state , packet1.MAVROS_state , packet1.converter_state , packet1.recording_state );
    mavlink_msg_onboard_computer_nuc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_computer_nuc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_nuc_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.ROScore_state , packet1.SLAM_state , packet1.MAVROS_state , packet1.converter_state , packet1.recording_state );
    mavlink_msg_onboard_computer_nuc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_COMPUTER_NUC") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_COMPUTER_NUC) != NULL);
#endif
}

static void mavlink_test_operation_launch(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPERATION_LAUNCH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_operation_launch_t packet_in = {
        963497464,17,84,"GHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABC","EFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZA","CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXY",217,"BCDEFGHIJKLMNOPQRSTUVWXYZABCD"
    };
    mavlink_operation_launch_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.relocalization = packet_in.relocalization;
        
        mav_array_memcpy(packet1.project_name, packet_in.project_name, sizeof(char)*50);
        mav_array_memcpy(packet1.asset_name, packet_in.asset_name, sizeof(char)*50);
        mav_array_memcpy(packet1.inspection_name, packet_in.inspection_name, sizeof(char)*50);
        mav_array_memcpy(packet1.operation_name, packet_in.operation_name, sizeof(char)*30);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPERATION_LAUNCH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPERATION_LAUNCH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_operation_launch_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_operation_launch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_operation_launch_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.target_system , packet1.target_component , packet1.project_name , packet1.asset_name , packet1.inspection_name , packet1.relocalization , packet1.operation_name );
    mavlink_msg_operation_launch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_operation_launch_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.target_system , packet1.target_component , packet1.project_name , packet1.asset_name , packet1.inspection_name , packet1.relocalization , packet1.operation_name );
    mavlink_msg_operation_launch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_operation_launch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_operation_launch_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.target_system , packet1.target_component , packet1.project_name , packet1.asset_name , packet1.inspection_name , packet1.relocalization , packet1.operation_name );
    mavlink_msg_operation_launch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPERATION_LAUNCH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPERATION_LAUNCH) != NULL);
#endif
}

static void mavlink_test_message_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MESSAGE_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_message_ack_t packet_in = {
        17235,139,206,963497672,29,96
    };
    mavlink_message_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.message = packet_in.message;
        packet1.result = packet_in.result;
        packet1.progress = packet_in.progress;
        packet1.result_param2 = packet_in.result_param2;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MESSAGE_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_message_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_message_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_message_ack_pack(system_id, component_id, &msg , packet1.message , packet1.result , packet1.progress , packet1.result_param2 , packet1.target_system , packet1.target_component );
    mavlink_msg_message_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_message_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.message , packet1.result , packet1.progress , packet1.result_param2 , packet1.target_system , packet1.target_component );
    mavlink_msg_message_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_message_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_message_ack_send(MAVLINK_COMM_1 , packet1.message , packet1.result , packet1.progress , packet1.result_param2 , packet1.target_system , packet1.target_component );
    mavlink_msg_message_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MESSAGE_ACK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MESSAGE_ACK) != NULL);
#endif
}

static void mavlink_test_onboard_computer_health_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_computer_health_status_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFG"
    };
    mavlink_onboard_computer_health_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.storage_total_capacity = packet_in.storage_total_capacity;
        packet1.storage_used_capacity = packet_in.storage_used_capacity;
        packet1.storage_available_capacity = packet_in.storage_available_capacity;
        packet1.memory_percent = packet_in.memory_percent;
        packet1.cpu_percent = packet_in.cpu_percent;
        packet1.temperature = packet_in.temperature;
        
        mav_array_memcpy(packet1.computer_name, packet_in.computer_name, sizeof(char)*32);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_health_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_computer_health_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_health_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.storage_total_capacity , packet1.storage_used_capacity , packet1.storage_available_capacity , packet1.memory_percent , packet1.cpu_percent , packet1.temperature , packet1.computer_name );
    mavlink_msg_onboard_computer_health_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_health_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.storage_total_capacity , packet1.storage_used_capacity , packet1.storage_available_capacity , packet1.memory_percent , packet1.cpu_percent , packet1.temperature , packet1.computer_name );
    mavlink_msg_onboard_computer_health_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_computer_health_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_health_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.storage_total_capacity , packet1.storage_used_capacity , packet1.storage_available_capacity , packet1.memory_percent , packet1.cpu_percent , packet1.temperature , packet1.computer_name );
    mavlink_msg_onboard_computer_health_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_COMPUTER_HEALTH_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS) != NULL);
#endif
}

static void mavlink_test_slam_position_estimate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_slam_position_estimate_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0
    };
    mavlink_slam_position_estimate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.usec = packet_in.usec;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.q1 = packet_in.q1;
        packet1.q2 = packet_in.q2;
        packet1.q3 = packet_in.q3;
        packet1.q4 = packet_in.q4;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slam_position_estimate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_slam_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slam_position_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.q1 , packet1.q2 , packet1.q3 , packet1.q4 );
    mavlink_msg_slam_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slam_position_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.q1 , packet1.q2 , packet1.q3 , packet1.q4 );
    mavlink_msg_slam_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_slam_position_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slam_position_estimate_send(MAVLINK_COMM_1 , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.q1 , packet1.q2 , packet1.q3 , packet1.q4 );
    mavlink_msg_slam_position_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SLAM_POSITION_ESTIMATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE) != NULL);
#endif
}

static void mavlink_test_actuator_position(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ACTUATOR_POSITION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_actuator_position_t packet_in = {
        5,72
    };
    mavlink_actuator_position_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Target = packet_in.Target;
        packet1.Actual = packet_in.Actual;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ACTUATOR_POSITION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_actuator_position_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_actuator_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_actuator_position_pack(system_id, component_id, &msg , packet1.Target , packet1.Actual );
    mavlink_msg_actuator_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_actuator_position_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Target , packet1.Actual );
    mavlink_msg_actuator_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_actuator_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_actuator_position_send(MAVLINK_COMM_1 , packet1.Target , packet1.Actual );
    mavlink_msg_actuator_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ACTUATOR_POSITION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ACTUATOR_POSITION) != NULL);
#endif
}

static void mavlink_test_avesaid_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVESAID_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_avesaid_status_t packet_in = {
        93372036854775807ULL,29,96,163,230,41,108
    };
    mavlink_avesaid_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.flag_mode_attachment_enabled = packet_in.flag_mode_attachment_enabled;
        packet1.flag_mode_partial_attachment_enabled = packet_in.flag_mode_partial_attachment_enabled;
        packet1.flag_magnet_enabled = packet_in.flag_magnet_enabled;
        packet1.flag_height_source_baro_enabled = packet_in.flag_height_source_baro_enabled;
        packet1.flag_height_source_slam_enabled = packet_in.flag_height_source_slam_enabled;
        packet1.flag_payload_enabled = packet_in.flag_payload_enabled;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_avesaid_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_avesaid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_avesaid_status_pack(system_id, component_id, &msg , packet1.timestamp , packet1.flag_mode_attachment_enabled , packet1.flag_mode_partial_attachment_enabled , packet1.flag_magnet_enabled , packet1.flag_height_source_baro_enabled , packet1.flag_height_source_slam_enabled , packet1.flag_payload_enabled );
    mavlink_msg_avesaid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_avesaid_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.flag_mode_attachment_enabled , packet1.flag_mode_partial_attachment_enabled , packet1.flag_magnet_enabled , packet1.flag_height_source_baro_enabled , packet1.flag_height_source_slam_enabled , packet1.flag_payload_enabled );
    mavlink_msg_avesaid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_avesaid_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_avesaid_status_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.flag_mode_attachment_enabled , packet1.flag_mode_partial_attachment_enabled , packet1.flag_magnet_enabled , packet1.flag_height_source_baro_enabled , packet1.flag_height_source_slam_enabled , packet1.flag_payload_enabled );
    mavlink_msg_avesaid_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVESAID_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVESAID_STATUS) != NULL);
#endif
}

static void mavlink_test_test_jig(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Test_JIG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_test_jig_t packet_in = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVW"
    };
    mavlink_test_jig_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.Target, packet_in.Target, sizeof(char)*50);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Test_JIG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Test_JIG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_test_jig_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_pack(system_id, component_id, &msg , packet1.Target );
    mavlink_msg_test_jig_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Target );
    mavlink_msg_test_jig_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_test_jig_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_send(MAVLINK_COMM_1 , packet1.Target );
    mavlink_msg_test_jig_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Test_JIG") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Test_JIG) != NULL);
#endif
}

static void mavlink_test_test_jig_general_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_test_jig_general_info_t packet_in = {
        17235,139,{ 206, 207, 208, 209 },{ 218, 219, 220 },{ 163, 164 },{ 41, 42, 43 },{ 242, 243, 244 },{ 187, 188, 189 },{ 132, 133, 134 },77,144,211
    };
    mavlink_test_jig_general_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Actuator_Position = packet_in.Actuator_Position;
        packet1.Arm_Type = packet_in.Arm_Type;
        packet1.DCM_MLX_PROGRAM = packet_in.DCM_MLX_PROGRAM;
        packet1.PROP1_MLX_PROGRAM = packet_in.PROP1_MLX_PROGRAM;
        packet1.PROP2_MLX_PROGRAM = packet_in.PROP2_MLX_PROGRAM;
        
        mav_array_memcpy(packet1.Limit_Switch_Status, packet_in.Limit_Switch_Status, sizeof(uint8_t)*4);
        mav_array_memcpy(packet1.SPARM_Temp, packet_in.SPARM_Temp, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.SPARM_LiDAR, packet_in.SPARM_LiDAR, sizeof(uint8_t)*2);
        mav_array_memcpy(packet1.LM75_TEMP, packet_in.LM75_TEMP, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.DCM_TEMP, packet_in.DCM_TEMP, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.PROP1_TEMP, packet_in.PROP1_TEMP, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.PROP2_TEMP, packet_in.PROP2_TEMP, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_general_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_test_jig_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_general_info_pack(system_id, component_id, &msg , packet1.Arm_Type , packet1.Limit_Switch_Status , packet1.Actuator_Position , packet1.SPARM_Temp , packet1.SPARM_LiDAR , packet1.LM75_TEMP , packet1.DCM_TEMP , packet1.PROP1_TEMP , packet1.PROP2_TEMP , packet1.DCM_MLX_PROGRAM , packet1.PROP1_MLX_PROGRAM , packet1.PROP2_MLX_PROGRAM );
    mavlink_msg_test_jig_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_general_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Arm_Type , packet1.Limit_Switch_Status , packet1.Actuator_Position , packet1.SPARM_Temp , packet1.SPARM_LiDAR , packet1.LM75_TEMP , packet1.DCM_TEMP , packet1.PROP1_TEMP , packet1.PROP2_TEMP , packet1.DCM_MLX_PROGRAM , packet1.PROP1_MLX_PROGRAM , packet1.PROP2_MLX_PROGRAM );
    mavlink_msg_test_jig_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_test_jig_general_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_general_info_send(MAVLINK_COMM_1 , packet1.Arm_Type , packet1.Limit_Switch_Status , packet1.Actuator_Position , packet1.SPARM_Temp , packet1.SPARM_LiDAR , packet1.LM75_TEMP , packet1.DCM_TEMP , packet1.PROP1_TEMP , packet1.PROP2_TEMP , packet1.DCM_MLX_PROGRAM , packet1.PROP1_MLX_PROGRAM , packet1.PROP2_MLX_PROGRAM );
    mavlink_msg_test_jig_general_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TEST_JIG_GENERAL_INFO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TEST_JIG_GENERAL_INFO) != NULL);
#endif
}

static void mavlink_test_test_jig_action_req(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TEST_JIG_ACTION_REQ >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_test_jig_action_req_t packet_in = {
        5
    };
    mavlink_test_jig_action_req_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.General_Request = packet_in.General_Request;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TEST_JIG_ACTION_REQ_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TEST_JIG_ACTION_REQ_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_action_req_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_test_jig_action_req_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_action_req_pack(system_id, component_id, &msg , packet1.General_Request );
    mavlink_msg_test_jig_action_req_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_action_req_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.General_Request );
    mavlink_msg_test_jig_action_req_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_test_jig_action_req_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_action_req_send(MAVLINK_COMM_1 , packet1.General_Request );
    mavlink_msg_test_jig_action_req_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TEST_JIG_ACTION_REQ") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TEST_JIG_ACTION_REQ) != NULL);
#endif
}

static void mavlink_test_test_jig_arm_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TEST_JIG_ARM_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_test_jig_arm_info_t packet_in = {
        5
    };
    mavlink_test_jig_arm_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Arm_Type = packet_in.Arm_Type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TEST_JIG_ARM_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_arm_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_test_jig_arm_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_arm_info_pack(system_id, component_id, &msg , packet1.Arm_Type );
    mavlink_msg_test_jig_arm_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_arm_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Arm_Type );
    mavlink_msg_test_jig_arm_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_test_jig_arm_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_arm_info_send(MAVLINK_COMM_1 , packet1.Arm_Type );
    mavlink_msg_test_jig_arm_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TEST_JIG_ARM_INFO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TEST_JIG_ARM_INFO) != NULL);
#endif
}

static void mavlink_test_firmware_hex(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Firmware_Hex >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_firmware_hex_t packet_in = {
        963497464,17,{ 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67 }
    };
    mavlink_firmware_hex_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Address = packet_in.Address;
        packet1.Length = packet_in.Length;
        
        mav_array_memcpy(packet1.Data, packet_in.Data, sizeof(uint8_t)*240);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_hex_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_firmware_hex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_hex_pack(system_id, component_id, &msg , packet1.Address , packet1.Length , packet1.Data );
    mavlink_msg_firmware_hex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_hex_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Address , packet1.Length , packet1.Data );
    mavlink_msg_firmware_hex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_firmware_hex_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_hex_send(MAVLINK_COMM_1 , packet1.Address , packet1.Length , packet1.Data );
    mavlink_msg_firmware_hex_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Firmware_Hex") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Firmware_Hex) != NULL);
#endif
}

static void mavlink_test_firmware_cs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Firmware_CS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_firmware_cs_t packet_in = {
        5
    };
    mavlink_firmware_cs_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Checksum = packet_in.Checksum;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Firmware_CS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Firmware_CS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_cs_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_firmware_cs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_cs_pack(system_id, component_id, &msg , packet1.Checksum );
    mavlink_msg_firmware_cs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_cs_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Checksum );
    mavlink_msg_firmware_cs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_firmware_cs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_cs_send(MAVLINK_COMM_1 , packet1.Checksum );
    mavlink_msg_firmware_cs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Firmware_CS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Firmware_CS) != NULL);
#endif
}

static void mavlink_test_firmware_version(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_Firmware_Version >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_firmware_version_t packet_in = {
        17235,17339,17443,151
    };
    mavlink_firmware_version_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.MAJOR = packet_in.MAJOR;
        packet1.MINOR = packet_in.MINOR;
        packet1.PATCH = packet_in.PATCH;
        packet1.target_device = packet_in.target_device;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_Firmware_Version_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_Firmware_Version_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_version_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_version_pack(system_id, component_id, &msg , packet1.target_device , packet1.MAJOR , packet1.MINOR , packet1.PATCH );
    mavlink_msg_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_version_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_device , packet1.MAJOR , packet1.MINOR , packet1.PATCH );
    mavlink_msg_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_firmware_version_send(MAVLINK_COMM_1 , packet1.target_device , packet1.MAJOR , packet1.MINOR , packet1.PATCH );
    mavlink_msg_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("Firmware_Version") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_Firmware_Version) != NULL);
#endif
}

static void mavlink_test_test_jig_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TEST_JIG_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_test_jig_mode_t packet_in = {
        5
    };
    mavlink_test_jig_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TEST_JIG_MODE = packet_in.TEST_JIG_MODE;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TEST_JIG_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_test_jig_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_mode_pack(system_id, component_id, &msg , packet1.TEST_JIG_MODE );
    mavlink_msg_test_jig_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TEST_JIG_MODE );
    mavlink_msg_test_jig_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_test_jig_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_test_jig_mode_send(MAVLINK_COMM_1 , packet1.TEST_JIG_MODE );
    mavlink_msg_test_jig_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TEST_JIG_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TEST_JIG_MODE) != NULL);
#endif
}

static void mavlink_test_crawler_heading(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CRAWLER_HEADING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_crawler_heading_t packet_in = {
        17.0
    };
    mavlink_crawler_heading_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.CRAWLER_HEADING = packet_in.CRAWLER_HEADING;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_crawler_heading_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_crawler_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_crawler_heading_pack(system_id, component_id, &msg , packet1.CRAWLER_HEADING );
    mavlink_msg_crawler_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_crawler_heading_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.CRAWLER_HEADING );
    mavlink_msg_crawler_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_crawler_heading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_crawler_heading_send(MAVLINK_COMM_1 , packet1.CRAWLER_HEADING );
    mavlink_msg_crawler_heading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CRAWLER_HEADING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CRAWLER_HEADING) != NULL);
#endif
}

static void mavlink_test_onboard_computer_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_computer_info_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,963498296,963498504,963498712,963498920,18899,235,46,113,"LMNOPQRSTUVWXYZ","BCDEFGHIJKL","NOPQRSTUVWXYZABCDEFGHIJKLMNOPQR","TUVWXYZABCDEFGHIJKLMNOP","RSTUVWX","ZABCDEFGHIJKLMNOP","RSTUVWXYZABCDEF","HIJKLMNOPQRSTUV","XYZABCDEFGHIJKLMNOPQRST","VWXYZAB","DEFGHIJKL","NOPQRSTUV","XYZABCD","FGHIJKLMNO"
    };
    mavlink_onboard_computer_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.uid = packet_in.uid;
        packet1.total_memory = packet_in.total_memory;
        packet1.total_storage = packet_in.total_storage;
        packet1.total_operation_time = packet_in.total_operation_time;
        packet1.boot_count = packet_in.boot_count;
        packet1.processor_speed = packet_in.processor_speed;
        packet1.processor_cores = packet_in.processor_cores;
        packet1.processor_threads = packet_in.processor_threads;
        packet1.robot_type = packet_in.robot_type;
        
        mav_array_memcpy(packet1.software_version, packet_in.software_version, sizeof(char)*16);
        mav_array_memcpy(packet1.software_build_date, packet_in.software_build_date, sizeof(char)*12);
        mav_array_memcpy(packet1.computer_name, packet_in.computer_name, sizeof(char)*32);
        mav_array_memcpy(packet1.processor_model, packet_in.processor_model, sizeof(char)*24);
        mav_array_memcpy(packet1.architecture, packet_in.architecture, sizeof(char)*8);
        mav_array_memcpy(packet1.mac_address, packet_in.mac_address, sizeof(char)*18);
        mav_array_memcpy(packet1.ip_address, packet_in.ip_address, sizeof(char)*16);
        mav_array_memcpy(packet1.os_distro, packet_in.os_distro, sizeof(char)*16);
        mav_array_memcpy(packet1.kernel_version, packet_in.kernel_version, sizeof(char)*24);
        mav_array_memcpy(packet1.ros_distro, packet_in.ros_distro, sizeof(char)*8);
        mav_array_memcpy(packet1.l4t_version, packet_in.l4t_version, sizeof(char)*10);
        mav_array_memcpy(packet1.cuda_version, packet_in.cuda_version, sizeof(char)*10);
        mav_array_memcpy(packet1.jetpack_version, packet_in.jetpack_version, sizeof(char)*8);
        mav_array_memcpy(packet1.robot_serial_number, packet_in.robot_serial_number, sizeof(char)*11);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_computer_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_info_pack(system_id, component_id, &msg , packet1.time_usec , packet1.uid , packet1.total_memory , packet1.total_storage , packet1.total_operation_time , packet1.boot_count , packet1.processor_speed , packet1.processor_cores , packet1.processor_threads , packet1.robot_type , packet1.software_version , packet1.software_build_date , packet1.computer_name , packet1.processor_model , packet1.architecture , packet1.mac_address , packet1.ip_address , packet1.os_distro , packet1.kernel_version , packet1.ros_distro , packet1.l4t_version , packet1.cuda_version , packet1.jetpack_version , packet1.robot_serial_number );
    mavlink_msg_onboard_computer_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.uid , packet1.total_memory , packet1.total_storage , packet1.total_operation_time , packet1.boot_count , packet1.processor_speed , packet1.processor_cores , packet1.processor_threads , packet1.robot_type , packet1.software_version , packet1.software_build_date , packet1.computer_name , packet1.processor_model , packet1.architecture , packet1.mac_address , packet1.ip_address , packet1.os_distro , packet1.kernel_version , packet1.ros_distro , packet1.l4t_version , packet1.cuda_version , packet1.jetpack_version , packet1.robot_serial_number );
    mavlink_msg_onboard_computer_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_computer_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_info_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.uid , packet1.total_memory , packet1.total_storage , packet1.total_operation_time , packet1.boot_count , packet1.processor_speed , packet1.processor_cores , packet1.processor_threads , packet1.robot_type , packet1.software_version , packet1.software_build_date , packet1.computer_name , packet1.processor_model , packet1.architecture , packet1.mac_address , packet1.ip_address , packet1.os_distro , packet1.kernel_version , packet1.ros_distro , packet1.l4t_version , packet1.cuda_version , packet1.jetpack_version , packet1.robot_serial_number );
    mavlink_msg_onboard_computer_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_COMPUTER_INFO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO) != NULL);
#endif
}

static void mavlink_test_brush_speed(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BRUSH_SPEED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_brush_speed_t packet_in = {
        963497464
    };
    mavlink_brush_speed_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TPS = packet_in.TPS;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_brush_speed_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_brush_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_brush_speed_pack(system_id, component_id, &msg , packet1.TPS );
    mavlink_msg_brush_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_brush_speed_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TPS );
    mavlink_msg_brush_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_brush_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_brush_speed_send(MAVLINK_COMM_1 , packet1.TPS );
    mavlink_msg_brush_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("BRUSH_SPEED") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_BRUSH_SPEED) != NULL);
#endif
}

static void mavlink_test_self_driving_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SELF_DRIVING_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_self_driving_status_t packet_in = {
        5,72
    };
    mavlink_self_driving_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.retrieval = packet_in.retrieval;
        packet1.weld_follow = packet_in.weld_follow;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SELF_DRIVING_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SELF_DRIVING_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_self_driving_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_self_driving_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_self_driving_status_pack(system_id, component_id, &msg , packet1.retrieval , packet1.weld_follow );
    mavlink_msg_self_driving_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_self_driving_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.retrieval , packet1.weld_follow );
    mavlink_msg_self_driving_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_self_driving_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_self_driving_status_send(MAVLINK_COMM_1 , packet1.retrieval , packet1.weld_follow );
    mavlink_msg_self_driving_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SELF_DRIVING_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SELF_DRIVING_STATUS) != NULL);
#endif
}

static void mavlink_test_onboard_pose_estimation_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_pose_estimation_status_t packet_in = {
        93372036854775807ULL,963497880,41,108,175,242,53,120,187,254,65
    };
    mavlink_onboard_pose_estimation_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.active_sources = packet_in.active_sources;
        packet1.lidar_slam_state = packet_in.lidar_slam_state;
        packet1.visual_slam_state = packet_in.visual_slam_state;
        packet1.vio_state = packet_in.vio_state;
        packet1.vps_state = packet_in.vps_state;
        packet1.lidar_hw_state = packet_in.lidar_hw_state;
        packet1.stereo_cam_hw_state = packet_in.stereo_cam_hw_state;
        packet1.reserved0 = packet_in.reserved0;
        packet1.reserved1 = packet_in.reserved1;
        packet1.reserved2 = packet_in.reserved2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_pose_estimation_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_pose_estimation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_pose_estimation_status_pack(system_id, component_id, &msg , packet1.timestamp , packet1.lidar_slam_state , packet1.visual_slam_state , packet1.vio_state , packet1.vps_state , packet1.lidar_hw_state , packet1.stereo_cam_hw_state , packet1.active_sources , packet1.reserved0 , packet1.reserved1 , packet1.reserved2 );
    mavlink_msg_onboard_pose_estimation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_pose_estimation_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.lidar_slam_state , packet1.visual_slam_state , packet1.vio_state , packet1.vps_state , packet1.lidar_hw_state , packet1.stereo_cam_hw_state , packet1.active_sources , packet1.reserved0 , packet1.reserved1 , packet1.reserved2 );
    mavlink_msg_onboard_pose_estimation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_pose_estimation_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_pose_estimation_status_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.lidar_slam_state , packet1.visual_slam_state , packet1.vio_state , packet1.vps_state , packet1.lidar_hw_state , packet1.stereo_cam_hw_state , packet1.active_sources , packet1.reserved0 , packet1.reserved1 , packet1.reserved2 );
    mavlink_msg_onboard_pose_estimation_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_POSE_ESTIMATION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_POSE_ESTIMATION_STATUS) != NULL);
#endif
}

static void mavlink_test_onboard_computer_modules_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_computer_modules_status_t packet_in = {
        93372036854775807ULL,29,96,163,230,41,108,175,242,53,120,187
    };
    mavlink_onboard_computer_modules_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.ros_state = packet_in.ros_state;
        packet1.autopilot_connection_state = packet_in.autopilot_connection_state;
        packet1.GCS_connection_state = packet_in.GCS_connection_state;
        packet1.firmware_connection_state = packet_in.firmware_connection_state;
        packet1.primary_camera_state = packet_in.primary_camera_state;
        packet1.video_stream_state = packet_in.video_stream_state;
        packet1.recording_state = packet_in.recording_state;
        packet1.pose_estimation_state = packet_in.pose_estimation_state;
        packet1.collision_avoidance_state = packet_in.collision_avoidance_state;
        packet1.collision_detection_state = packet_in.collision_detection_state;
        packet1.navigation_state = packet_in.navigation_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_modules_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_computer_modules_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_modules_status_pack(system_id, component_id, &msg , packet1.timestamp , packet1.ros_state , packet1.autopilot_connection_state , packet1.GCS_connection_state , packet1.firmware_connection_state , packet1.primary_camera_state , packet1.video_stream_state , packet1.recording_state , packet1.pose_estimation_state , packet1.collision_avoidance_state , packet1.collision_detection_state , packet1.navigation_state );
    mavlink_msg_onboard_computer_modules_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_modules_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.ros_state , packet1.autopilot_connection_state , packet1.GCS_connection_state , packet1.firmware_connection_state , packet1.primary_camera_state , packet1.video_stream_state , packet1.recording_state , packet1.pose_estimation_state , packet1.collision_avoidance_state , packet1.collision_detection_state , packet1.navigation_state );
    mavlink_msg_onboard_computer_modules_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_computer_modules_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_computer_modules_status_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.ros_state , packet1.autopilot_connection_state , packet1.GCS_connection_state , packet1.firmware_connection_state , packet1.primary_camera_state , packet1.video_stream_state , packet1.recording_state , packet1.pose_estimation_state , packet1.collision_avoidance_state , packet1.collision_detection_state , packet1.navigation_state );
    mavlink_msg_onboard_computer_modules_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_COMPUTER_MODULES_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_COMPUTER_MODULES_STATUS) != NULL);
#endif
}

static void mavlink_test_twod_lidar(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TWOD_LIDAR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_twod_lidar_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132 }
    };
    mavlink_twod_lidar_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.distance_buffer, packet_in.distance_buffer, sizeof(uint8_t)*128);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_twod_lidar_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_twod_lidar_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_twod_lidar_pack(system_id, component_id, &msg , packet1.distance_buffer );
    mavlink_msg_twod_lidar_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_twod_lidar_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.distance_buffer );
    mavlink_msg_twod_lidar_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_twod_lidar_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_twod_lidar_send(MAVLINK_COMM_1 , packet1.distance_buffer );
    mavlink_msg_twod_lidar_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TWOD_LIDAR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TWOD_LIDAR) != NULL);
#endif
}

static void mavlink_test_SKYRON(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_sensor_status(system_id, component_id, last_msg);
    mavlink_test_olympus_reading(system_id, component_id, last_msg);
    mavlink_test_mt_gimbal(system_id, component_id, last_msg);
    mavlink_test_encoder_count(system_id, component_id, last_msg);
    mavlink_test_ut_thickness(system_id, component_id, last_msg);
    mavlink_test_ut_waveform(system_id, component_id, last_msg);
    mavlink_test_ut_speed(system_id, component_id, last_msg);
    mavlink_test_fusion_data(system_id, component_id, last_msg);
    mavlink_test_mt_og(system_id, component_id, last_msg);
    mavlink_test_gas_data(system_id, component_id, last_msg);
    mavlink_test_onboard_computer_nuc(system_id, component_id, last_msg);
    mavlink_test_operation_launch(system_id, component_id, last_msg);
    mavlink_test_message_ack(system_id, component_id, last_msg);
    mavlink_test_onboard_computer_health_status(system_id, component_id, last_msg);
    mavlink_test_slam_position_estimate(system_id, component_id, last_msg);
    mavlink_test_actuator_position(system_id, component_id, last_msg);
    mavlink_test_avesaid_status(system_id, component_id, last_msg);
    mavlink_test_test_jig(system_id, component_id, last_msg);
    mavlink_test_test_jig_general_info(system_id, component_id, last_msg);
    mavlink_test_test_jig_action_req(system_id, component_id, last_msg);
    mavlink_test_test_jig_arm_info(system_id, component_id, last_msg);
    mavlink_test_firmware_hex(system_id, component_id, last_msg);
    mavlink_test_firmware_cs(system_id, component_id, last_msg);
    mavlink_test_firmware_version(system_id, component_id, last_msg);
    mavlink_test_test_jig_mode(system_id, component_id, last_msg);
    mavlink_test_crawler_heading(system_id, component_id, last_msg);
    mavlink_test_onboard_computer_info(system_id, component_id, last_msg);
    mavlink_test_brush_speed(system_id, component_id, last_msg);
    mavlink_test_self_driving_status(system_id, component_id, last_msg);
    mavlink_test_onboard_pose_estimation_status(system_id, component_id, last_msg);
    mavlink_test_onboard_computer_modules_status(system_id, component_id, last_msg);
    mavlink_test_twod_lidar(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SKYRON_TESTSUITE_H
