# This is a CMake file for YouTube Data API v3
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_youtube_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/youtube_api/..."
add_library(google_youtube_api STATIC
            access_policy.cc
            activity.cc
            activity_content_details.cc
            activity_content_details_bulletin.cc
            activity_content_details_channel_item.cc
            activity_content_details_comment.cc
            activity_content_details_favorite.cc
            activity_content_details_like.cc
            activity_content_details_playlist_item.cc
            activity_content_details_promoted_item.cc
            activity_content_details_recommendation.cc
            activity_content_details_social.cc
            activity_content_details_subscription.cc
            activity_content_details_upload.cc
            activity_list_response.cc
            activity_snippet.cc
            cdn_settings.cc
            channel.cc
            channel_audit_details.cc
            channel_banner_resource.cc
            channel_branding_settings.cc
            channel_content_details.cc
            channel_content_owner_details.cc
            channel_conversion_ping.cc
            channel_conversion_pings.cc
            channel_list_response.cc
            channel_localization.cc
            channel_section.cc
            channel_section_content_details.cc
            channel_section_list_response.cc
            channel_section_snippet.cc
            channel_settings.cc
            channel_snippet.cc
            channel_statistics.cc
            channel_status.cc
            channel_topic_details.cc
            content_rating.cc
            geo_point.cc
            guide_category.cc
            guide_category_list_response.cc
            guide_category_snippet.cc
            i18n_language.cc
            i18n_language_list_response.cc
            i18n_language_snippet.cc
            i18n_region.cc
            i18n_region_list_response.cc
            i18n_region_snippet.cc
            image_settings.cc
            ingestion_info.cc
            invideo_branding.cc
            invideo_position.cc
            invideo_promotion.cc
            invideo_timing.cc
            language_tag.cc
            live_broadcast.cc
            live_broadcast_content_details.cc
            live_broadcast_list_response.cc
            live_broadcast_snippet.cc
            live_broadcast_status.cc
            live_stream.cc
            live_stream_content_details.cc
            live_stream_list_response.cc
            live_stream_snippet.cc
            live_stream_status.cc
            localized_property.cc
            localized_string.cc
            monitor_stream_info.cc
            page_info.cc
            playlist.cc
            playlist_content_details.cc
            playlist_item.cc
            playlist_item_content_details.cc
            playlist_item_list_response.cc
            playlist_item_snippet.cc
            playlist_item_status.cc
            playlist_list_response.cc
            playlist_player.cc
            playlist_snippet.cc
            playlist_status.cc
            promoted_item.cc
            promoted_item_id.cc
            property_value.cc
            resource_id.cc
            search_list_response.cc
            search_result.cc
            search_result_snippet.cc
            subscription.cc
            subscription_content_details.cc
            subscription_list_response.cc
            subscription_snippet.cc
            subscription_subscriber_snippet.cc
            thumbnail.cc
            thumbnail_details.cc
            thumbnail_set_response.cc
            token_pagination.cc
            video.cc
            video_age_gating.cc
            video_category.cc
            video_category_list_response.cc
            video_category_snippet.cc
            video_content_details.cc
            video_content_details_region_restriction.cc
            video_conversion_ping.cc
            video_conversion_pings.cc
            video_file_details.cc
            video_file_details_audio_stream.cc
            video_file_details_video_stream.cc
            video_get_rating_response.cc
            video_list_response.cc
            video_live_streaming_details.cc
            video_monetization_details.cc
            video_player.cc
            video_processing_details.cc
            video_processing_details_processing_progress.cc
            video_project_details.cc
            video_rating.cc
            video_recording_details.cc
            video_snippet.cc
            video_statistics.cc
            video_status.cc
            video_suggestions.cc
            video_suggestions_tag_suggestion.cc
            video_topic_details.cc
            watch_settings.cc
            you_tube_service.cc)
target_link_libraries(google_youtube_api googleapis_http)
target_link_libraries(google_youtube_api googleapis_internal)
target_link_libraries(google_youtube_api googleapis_jsoncpp)
target_link_libraries(google_youtube_api googleapis_utils)
