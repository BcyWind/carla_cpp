// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Time.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_BUILTIN_INTERFACES_MSG_TIME_H_
#define _FAST_DDS_GENERATED_BUILTIN_INTERFACES_MSG_TIME_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Time_SOURCE)
#define Time_DllAPI __declspec( dllexport )
#else
#define Time_DllAPI __declspec( dllimport )
#endif // Time_SOURCE
#else
#define Time_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Time_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima

namespace builtin_interfaces {
    namespace msg {
        /*!
         * @brief This class represents the structure Time defined by the user in the IDL file.
         * @ingroup TIME
         */
        class Time
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Time();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Time();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object builtin_interfaces::msg::Time that will be copied.
             */
            eProsima_user_DllExport Time(
                    const Time& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object builtin_interfaces::msg::Time that will be copied.
             */
            eProsima_user_DllExport Time(
                    Time&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object builtin_interfaces::msg::Time that will be copied.
             */
            eProsima_user_DllExport Time& operator =(
                    const Time& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object builtin_interfaces::msg::Time that will be copied.
             */
            eProsima_user_DllExport Time& operator =(
                    Time&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x builtin_interfaces::msg::Time object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Time& x) const;

            /*!
             * @brief Comparison operator.
             * @param x builtin_interfaces::msg::Time object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Time& x) const;

            /*!
             * @brief This function sets a value in member sec
             * @param _sec New value for member sec
             */
            eProsima_user_DllExport void sec(
                    int32_t _sec);

            /*!
             * @brief This function returns the value of member sec
             * @return Value of member sec
             */
            eProsima_user_DllExport int32_t sec() const;

            /*!
             * @brief This function returns a reference to member sec
             * @return Reference to member sec
             */
            eProsima_user_DllExport int32_t& sec();

            /*!
             * @brief This function sets a value in member nanosec
             * @param _nanosec New value for member nanosec
             */
            eProsima_user_DllExport void nanosec(
                    uint32_t _nanosec);

            /*!
             * @brief This function returns the value of member nanosec
             * @return Value of member nanosec
             */
            eProsima_user_DllExport uint32_t nanosec() const;

            /*!
             * @brief This function returns a reference to member nanosec
             * @return Reference to member nanosec
             */
            eProsima_user_DllExport uint32_t& nanosec();

            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const builtin_interfaces::msg::Time& data,
                    size_t current_alignment = 0);

            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);

            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:
            int32_t m_sec;
            uint32_t m_nanosec;
        };
    } // namespace msg
} // namespace builtin_interfaces

#endif // _FAST_DDS_GENERATED_BUILTIN_INTERFACES_MSG_TIME_H_
