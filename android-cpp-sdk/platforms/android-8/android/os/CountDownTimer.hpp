/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.CountDownTimer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_DECL
#define J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class CountDownTimer;
	class CountDownTimer
		: public object<CountDownTimer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit CountDownTimer(jobject jobj)
		: object<CountDownTimer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CountDownTimer(jlong, jlong);
		void cancel();
		local_ref< android::os::CountDownTimer > start();
		void onTick(jlong);
		void onFinish();
	}; //class CountDownTimer

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_IMPL
#define J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_IMPL

namespace j2cpp {



android::os::CountDownTimer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::CountDownTimer::CountDownTimer(jlong a0, jlong a1)
: object<android::os::CountDownTimer>(
	call_new_object<
		android::os::CountDownTimer::J2CPP_CLASS_NAME,
		android::os::CountDownTimer::J2CPP_METHOD_NAME(0),
		android::os::CountDownTimer::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::os::CountDownTimer::cancel()
{
	return call_method<
		android::os::CountDownTimer::J2CPP_CLASS_NAME,
		android::os::CountDownTimer::J2CPP_METHOD_NAME(1),
		android::os::CountDownTimer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

local_ref< android::os::CountDownTimer > android::os::CountDownTimer::start()
{
	return call_method<
		android::os::CountDownTimer::J2CPP_CLASS_NAME,
		android::os::CountDownTimer::J2CPP_METHOD_NAME(2),
		android::os::CountDownTimer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::CountDownTimer >
	>(get_jobject());
}

void android::os::CountDownTimer::onTick(jlong a0)
{
	return call_method<
		android::os::CountDownTimer::J2CPP_CLASS_NAME,
		android::os::CountDownTimer::J2CPP_METHOD_NAME(3),
		android::os::CountDownTimer::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::os::CountDownTimer::onFinish()
{
	return call_method<
		android::os::CountDownTimer::J2CPP_CLASS_NAME,
		android::os::CountDownTimer::J2CPP_METHOD_NAME(4),
		android::os::CountDownTimer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::CountDownTimer,"android/os/CountDownTimer")
J2CPP_DEFINE_METHOD(android::os::CountDownTimer,0,"<init>","(JJ)V")
J2CPP_DEFINE_METHOD(android::os::CountDownTimer,1,"cancel","()V")
J2CPP_DEFINE_METHOD(android::os::CountDownTimer,2,"start","()Landroid/os/CountDownTimer;")
J2CPP_DEFINE_METHOD(android::os::CountDownTimer,3,"onTick","(J)V")
J2CPP_DEFINE_METHOD(android::os::CountDownTimer,4,"onFinish","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_COUNTDOWNTIMER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
