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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_localization.h"
#include "google/youtube_api/thumbnail_details.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a channel, including title, description and thumbnails.
 *
 * @ingroup DataObject
 */
class ChannelSnippet : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelSnippet");
  }

  /**
   * Determine if the '<code>defaultLanguage</code>' attribute was set.
   *
   * @return true if the '<code>defaultLanguage</code>' attribute was set.
   */
  bool has_default_language() const {
    return Storage().isMember("defaultLanguage");
  }

  /**
   * Clears the '<code>defaultLanguage</code>' attribute.
   */
  void clear_default_language() {
    MutableStorage()->removeMember("defaultLanguage");
  }


  /**
   * Get the value of the '<code>defaultLanguage</code>' attribute.
   */
  const StringPiece get_default_language() const {
    const Json::Value& v = Storage("defaultLanguage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultLanguage</code>' attribute.
   *
   * The language of the channel's default title and description.
   *
   * @param[in] value The new value.
   */
  void set_default_language(const StringPiece& value) {
    *MutableStorage("defaultLanguage") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * The description of the channel.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>localized</code>' attribute was set.
   *
   * @return true if the '<code>localized</code>' attribute was set.
   */
  bool has_localized() const {
    return Storage().isMember("localized");
  }

  /**
   * Clears the '<code>localized</code>' attribute.
   */
  void clear_localized() {
    MutableStorage()->removeMember("localized");
  }


  /**
   * Get a reference to the value of the '<code>localized</code>' attribute.
   */
  const ChannelLocalization get_localized() const {
     const Json::Value& storage = Storage("localized");
    return client::JsonValueToCppValueHelper<ChannelLocalization >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>localized</code>'
   * property.
   *
   * Localized title and description, read-only.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelLocalization mutable_localized() {
    Json::Value* storage = MutableStorage("localized");
    return client::JsonValueToMutableCppValueHelper<ChannelLocalization >(storage);
  }

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time that the channel was created. The value is specified in
   * ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>thumbnails</code>' attribute was set.
   *
   * @return true if the '<code>thumbnails</code>' attribute was set.
   */
  bool has_thumbnails() const {
    return Storage().isMember("thumbnails");
  }

  /**
   * Clears the '<code>thumbnails</code>' attribute.
   */
  void clear_thumbnails() {
    MutableStorage()->removeMember("thumbnails");
  }


  /**
   * Get a reference to the value of the '<code>thumbnails</code>' attribute.
   */
  const ThumbnailDetails get_thumbnails() const {
     const Json::Value& storage = Storage("thumbnails");
    return client::JsonValueToCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>thumbnails</code>'
   * property.
   *
   * A map of thumbnail images associated with the channel. For each object in
   * the map, the key is the name of the thumbnail image, and the value is an
   * object that contains other information about the thumbnail.
   *
   * @return The result can be modified to change the attribute value.
   */
  ThumbnailDetails mutable_thumbnails() {
    Json::Value* storage = MutableStorage("thumbnails");
    return client::JsonValueToMutableCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * The channel's title.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const ChannelSnippet&);
};  // ChannelSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_SNIPPET_H_
