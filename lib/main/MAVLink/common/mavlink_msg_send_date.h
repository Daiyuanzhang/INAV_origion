#pragma once
// MESSAGE ATTITUDE PACKING

//#define MAVLINK_MSG_ID_ATTITUDE 30

// #define DATE_LEN 50
// typedef struct __mavlink_attitude_t {
// uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
// char _string_sending[DATE_LEN];

// } mavlink_date_send_t;


// #define MAVLINK_MSG_ID_DATE_SEND_LEN 28
// #define MAVLINK_MSG_ID_DATE_SEND_MIN_LEN 28
// #define MAVLINK_MSG_ID_DATE_SEND_30_LEN 28
// #define MAVLINK_MSG_ID_DATE_SEND_30_MIN_LEN 28

// #define MAVLINK_MSG_ID_DATE_SEND_CRC 39
// #define MAVLINK_MSG_ID_DATE_SEND_30_CRC 39



/**
 * @brief Pack a attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
// static inline uint16_t mavlink_msg_date_send_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
//                                uint32_t time_boot_ms)
// {

//     mavlink_date_send_t packet;
//     packet.time_boot_ms = time_boot_ms;
//     packet._string_sending = "this is testing message";

//     memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DATE_SEND_LEN);


//     msg->msgid = MAVLINK_MSG_ID_DATE_SEND;
//     return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DATE_SEND_MIN_LEN, MAVLINK_MSG_ID_DATE_SEND_LEN, MAVLINK_MSG_ID_DATE_SEND_CRC);
// }

