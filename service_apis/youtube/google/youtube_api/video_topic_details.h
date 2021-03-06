// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2014-12-11, 22:05:47 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 125
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_TOPIC_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_TOPIC_DETAILS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Freebase topic information related to the video.
 *
 * @ingroup DataObject
 */
class VideoTopicDetails : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoTopicDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoTopicDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoTopicDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoTopicDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoTopicDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoTopicDetails");
  }

  /**
   * Determine if the '<code>relevantTopicIds</code>' attribute was set.
   *
   * @return true if the '<code>relevantTopicIds</code>' attribute was set.
   */
  bool has_relevant_topic_ids() const {
    return Storage().isMember("relevantTopicIds");
  }

  /**
   * Clears the '<code>relevantTopicIds</code>' attribute.
   */
  void clear_relevant_topic_ids() {
    MutableStorage()->removeMember("relevantTopicIds");
  }


  /**
   * Get a reference to the value of the '<code>relevantTopicIds</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_relevant_topic_ids() const {
     const Json::Value& storage = Storage("relevantTopicIds");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>relevantTopicIds</code>'
   * property.
   *
   * Similar to topic_id, except that these topics are merely relevant to the
   * video. These are topics that may be mentioned in, or appear in the video.
   * You can retrieve information about each topic using Freebase Topic API.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_relevantTopicIds() {
    Json::Value* storage = MutableStorage("relevantTopicIds");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>topicIds</code>' attribute was set.
   *
   * @return true if the '<code>topicIds</code>' attribute was set.
   */
  bool has_topic_ids() const {
    return Storage().isMember("topicIds");
  }

  /**
   * Clears the '<code>topicIds</code>' attribute.
   */
  void clear_topic_ids() {
    MutableStorage()->removeMember("topicIds");
  }


  /**
   * Get a reference to the value of the '<code>topicIds</code>' attribute.
   */
  const client::JsonCppArray<string > get_topic_ids() const {
     const Json::Value& storage = Storage("topicIds");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>topicIds</code>'
   * property.
   *
   * A list of Freebase topic IDs that are centrally associated with the video.
   * These are topics that are centrally featured in the video, and it can be
   * said that the video is mainly about each of these. You can retrieve
   * information about each topic using the Freebase Topic API.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_topicIds() {
    Json::Value* storage = MutableStorage("topicIds");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const VideoTopicDetails&);
};  // VideoTopicDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_TOPIC_DETAILS_H_
