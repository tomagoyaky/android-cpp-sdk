/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.CamcorderProfile
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_DECL
#define J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace media {

	class CamcorderProfile;
	class CamcorderProfile
		: public object<CamcorderProfile>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)

		explicit CamcorderProfile(jobject jobj)
		: object<CamcorderProfile>(jobj)
		, duration(jobj)
		, quality(jobj)
		, fileFormat(jobj)
		, videoCodec(jobj)
		, videoBitRate(jobj)
		, videoFrameRate(jobj)
		, videoFrameWidth(jobj)
		, videoFrameHeight(jobj)
		, audioCodec(jobj)
		, audioBitRate(jobj)
		, audioSampleRate(jobj)
		, audioChannels(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::media::CamcorderProfile > get(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > QUALITY_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > QUALITY_HIGH;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > duration;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > quality;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > fileFormat;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > videoCodec;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > videoBitRate;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > videoFrameRate;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > videoFrameWidth;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > videoFrameHeight;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > audioCodec;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > audioBitRate;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > audioSampleRate;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > audioChannels;
	}; //class CamcorderProfile

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_IMPL

namespace j2cpp {



android::media::CamcorderProfile::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::media::CamcorderProfile > android::media::CamcorderProfile::get(jint a0)
{
	return call_static_method<
		android::media::CamcorderProfile::J2CPP_CLASS_NAME,
		android::media::CamcorderProfile::J2CPP_METHOD_NAME(1),
		android::media::CamcorderProfile::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::media::CamcorderProfile >
	>(a0);
}


static_field<
	android::media::CamcorderProfile::J2CPP_CLASS_NAME,
	android::media::CamcorderProfile::J2CPP_FIELD_NAME(0),
	android::media::CamcorderProfile::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::CamcorderProfile::QUALITY_LOW;

static_field<
	android::media::CamcorderProfile::J2CPP_CLASS_NAME,
	android::media::CamcorderProfile::J2CPP_FIELD_NAME(1),
	android::media::CamcorderProfile::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::CamcorderProfile::QUALITY_HIGH;


J2CPP_DEFINE_CLASS(android::media::CamcorderProfile,"android/media/CamcorderProfile")
J2CPP_DEFINE_METHOD(android::media::CamcorderProfile,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::CamcorderProfile,1,"get","(I)Landroid/media/CamcorderProfile;")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,0,"QUALITY_LOW","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,1,"QUALITY_HIGH","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,2,"duration","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,3,"quality","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,4,"fileFormat","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,5,"videoCodec","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,6,"videoBitRate","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,7,"videoFrameRate","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,8,"videoFrameWidth","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,9,"videoFrameHeight","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,10,"audioCodec","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,11,"audioBitRate","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,12,"audioSampleRate","I")
J2CPP_DEFINE_FIELD(android::media::CamcorderProfile,13,"audioChannels","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_CAMCORDERPROFILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
