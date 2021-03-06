/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Void
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_VOID_HPP_DECL
#define J2CPP_JAVA_LANG_VOID_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Void;
	class Void
		: public object<Void>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)

		explicit Void(jobject jobj)
		: object<Void>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;



		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Class > > TYPE;
	}; //class Void

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_VOID_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_VOID_HPP_IMPL
#define J2CPP_JAVA_LANG_VOID_HPP_IMPL

namespace j2cpp {



java::lang::Void::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	java::lang::Void::J2CPP_CLASS_NAME,
	java::lang::Void::J2CPP_FIELD_NAME(0),
	java::lang::Void::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Class >
> java::lang::Void::TYPE;


J2CPP_DEFINE_CLASS(java::lang::Void,"java/lang/Void")
J2CPP_DEFINE_METHOD(java::lang::Void,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Void,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Void,0,"TYPE","Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_VOID_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
