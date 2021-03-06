/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.ListResourceBundle
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_DECL
#define J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { class ResourceBundle; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/ResourceBundle.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ListResourceBundle;
	class ListResourceBundle
		: public object<ListResourceBundle>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ListResourceBundle(jobject jobj)
		: object<ListResourceBundle>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::ResourceBundle>() const;


		ListResourceBundle();
		local_ref< java::util::Enumeration > getKeys();
		local_ref< java::lang::Object > handleGetObject(local_ref< java::lang::String >  const&);
	}; //class ListResourceBundle

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_IMPL
#define J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_IMPL

namespace j2cpp {



java::util::ListResourceBundle::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::ListResourceBundle::operator local_ref<java::util::ResourceBundle>() const
{
	return local_ref<java::util::ResourceBundle>(get_jobject());
}


java::util::ListResourceBundle::ListResourceBundle()
: object<java::util::ListResourceBundle>(
	call_new_object<
		java::util::ListResourceBundle::J2CPP_CLASS_NAME,
		java::util::ListResourceBundle::J2CPP_METHOD_NAME(0),
		java::util::ListResourceBundle::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



local_ref< java::util::Enumeration > java::util::ListResourceBundle::getKeys()
{
	return call_method<
		java::util::ListResourceBundle::J2CPP_CLASS_NAME,
		java::util::ListResourceBundle::J2CPP_METHOD_NAME(2),
		java::util::ListResourceBundle::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::ListResourceBundle::handleGetObject(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::ListResourceBundle::J2CPP_CLASS_NAME,
		java::util::ListResourceBundle::J2CPP_METHOD_NAME(3),
		java::util::ListResourceBundle::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::ListResourceBundle,"java/util/ListResourceBundle")
J2CPP_DEFINE_METHOD(java::util::ListResourceBundle,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ListResourceBundle,1,"getContents","()[[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::ListResourceBundle,2,"getKeys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::ListResourceBundle,3,"handleGetObject","(Ljava/lang/String;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LISTRESOURCEBUNDLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
