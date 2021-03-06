/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ContentResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentValues.hpp>
#include <android/content/Context.hpp>
#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentResolver;
	class ContentResolver
		: public object<ContentResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
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

		explicit ContentResolver(jobject jobj)
		: object<ContentResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ContentResolver(local_ref< android::content::Context > const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri >  const&);
		local_ref< android::database::Cursor > query(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::io::InputStream > openInputStream(local_ref< android::net::Uri >  const&);
		local_ref< java::io::OutputStream > openOutputStream(local_ref< android::net::Uri >  const&);
		local_ref< java::io::OutputStream > openOutputStream(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::os::ParcelFileDescriptor > openFileDescriptor(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::content::res::AssetFileDescriptor > openAssetFileDescriptor(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&);
		jint bulkInsert(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< android::content::ContentValues >, 1> >  const&);
		jint delete_(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jint update(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void registerContentObserver(local_ref< android::net::Uri >  const&, jboolean, local_ref< android::database::ContentObserver >  const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver >  const&);
		void notifyChange(local_ref< android::net::Uri >  const&, local_ref< android::database::ContentObserver >  const&);
		void notifyChange(local_ref< android::net::Uri >  const&, local_ref< android::database::ContentObserver >  const&, jboolean);
		void startSync(local_ref< android::net::Uri >  const&, local_ref< android::os::Bundle >  const&);
		static void validateSyncExtrasBundle(local_ref< android::os::Bundle >  const&);
		void cancelSync(local_ref< android::net::Uri >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SYNC_EXTRAS_ACCOUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SYNC_EXTRAS_EXPEDITED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > SYNC_EXTRAS_FORCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > SYNC_EXTRAS_UPLOAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > SCHEME_CONTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > SCHEME_ANDROID_RESOURCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > SCHEME_FILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > CURSOR_ITEM_BASE_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > CURSOR_DIR_BASE_TYPE;
	}; //class ContentResolver

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL

namespace j2cpp {



android::content::ContentResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::ContentResolver::ContentResolver(local_ref< android::content::Context > const &a0)
: object<android::content::ContentResolver>(
	call_new_object<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(0),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > android::content::ContentResolver::getType(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(1),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::content::ContentResolver::query(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(2),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< java::io::InputStream > android::content::ContentResolver::openInputStream(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(3),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::InputStream >
	>(get_jobject(), a0);
}

local_ref< java::io::OutputStream > android::content::ContentResolver::openOutputStream(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(4),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::io::OutputStream >
	>(get_jobject(), a0);
}

local_ref< java::io::OutputStream > android::content::ContentResolver::openOutputStream(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(5),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::OutputStream >
	>(get_jobject(), a0, a1);
}

local_ref< android::os::ParcelFileDescriptor > android::content::ContentResolver::openFileDescriptor(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(6),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::os::ParcelFileDescriptor >
	>(get_jobject(), a0, a1);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::ContentResolver::openAssetFileDescriptor(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(7),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::content::res::AssetFileDescriptor >
	>(get_jobject(), a0, a1);
}

local_ref< android::net::Uri > android::content::ContentResolver::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(8),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::net::Uri >
	>(get_jobject(), a0, a1);
}

jint android::content::ContentResolver::bulkInsert(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< android::content::ContentValues >, 1> > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(9),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::content::ContentResolver::delete_(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(10),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint android::content::ContentResolver::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(11),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject(), a0, a1, a2, a3);
}

void android::content::ContentResolver::registerContentObserver(local_ref< android::net::Uri > const &a0, jboolean a1, local_ref< android::database::ContentObserver > const &a2)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(12),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::content::ContentResolver::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(13),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::content::ContentResolver::notifyChange(local_ref< android::net::Uri > const &a0, local_ref< android::database::ContentObserver > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(14),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

void android::content::ContentResolver::notifyChange(local_ref< android::net::Uri > const &a0, local_ref< android::database::ContentObserver > const &a1, jboolean a2)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(15),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::content::ContentResolver::startSync(local_ref< android::net::Uri > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(16),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}

void android::content::ContentResolver::validateSyncExtrasBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_static_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(17),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(a0);
}

void android::content::ContentResolver::cancelSync(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentResolver::J2CPP_CLASS_NAME,
		android::content::ContentResolver::J2CPP_METHOD_NAME(18),
		android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(0),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_ACCOUNT;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(1),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_EXPEDITED;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(2),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_FORCE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(3),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_UPLOAD;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(4),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(5),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(6),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_CONTENT;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(7),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_ANDROID_RESOURCE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(8),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_FILE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(9),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::content::ContentResolver::CURSOR_ITEM_BASE_TYPE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(10),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::content::ContentResolver::CURSOR_DIR_BASE_TYPE;


J2CPP_DEFINE_CLASS(android::content::ContentResolver,"android/content/ContentResolver")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,1,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,2,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,3,"openInputStream","(Landroid/net/Uri;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,4,"openOutputStream","(Landroid/net/Uri;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,5,"openOutputStream","(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,6,"openFileDescriptor","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,7,"openAssetFileDescriptor","(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,8,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,9,"bulkInsert","(Landroid/net/Uri;[android.content.ContentValues)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,10,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,11,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,12,"registerContentObserver","(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,13,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,14,"notifyChange","(Landroid/net/Uri;Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,15,"notifyChange","(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,16,"startSync","(Landroid/net/Uri;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,17,"validateSyncExtrasBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,18,"cancelSync","(Landroid/net/Uri;)V")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,0,"SYNC_EXTRAS_ACCOUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,1,"SYNC_EXTRAS_EXPEDITED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,2,"SYNC_EXTRAS_FORCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,3,"SYNC_EXTRAS_UPLOAD","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,4,"SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,5,"SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,6,"SCHEME_CONTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,7,"SCHEME_ANDROID_RESOURCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,8,"SCHEME_FILE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,9,"CURSOR_ITEM_BASE_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,10,"CURSOR_DIR_BASE_TYPE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
