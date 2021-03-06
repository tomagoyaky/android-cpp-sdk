/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.BackupDataOutput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class BackupDataOutput;
	class BackupDataOutput
		: public object<BackupDataOutput>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit BackupDataOutput(jobject jobj)
		: object<BackupDataOutput>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint writeEntityHeader(local_ref< java::lang::String >  const&, jint);
		jint writeEntityData(local_ref< array<jbyte,1> >  const&, jint);
	}; //class BackupDataOutput

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_IMPL

namespace j2cpp {



android::app::backup::BackupDataOutput::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::app::backup::BackupDataOutput::writeEntityHeader(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::app::backup::BackupDataOutput::J2CPP_CLASS_NAME,
		android::app::backup::BackupDataOutput::J2CPP_METHOD_NAME(1),
		android::app::backup::BackupDataOutput::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::app::backup::BackupDataOutput::writeEntityData(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_method<
		android::app::backup::BackupDataOutput::J2CPP_CLASS_NAME,
		android::app::backup::BackupDataOutput::J2CPP_METHOD_NAME(2),
		android::app::backup::BackupDataOutput::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::app::backup::BackupDataOutput,"android/app/backup/BackupDataOutput")
J2CPP_DEFINE_METHOD(android::app::backup::BackupDataOutput,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupDataOutput,1,"writeEntityHeader","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::app::backup::BackupDataOutput,2,"writeEntityData","([BI)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
