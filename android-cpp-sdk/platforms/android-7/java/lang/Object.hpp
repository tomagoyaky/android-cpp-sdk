/*================================================================================
  code generated by: java2cpp
  class: java.lang.Object
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OBJECT_HPP_DECL
#define J2CPP_JAVA_LANG_OBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Object;
	class Object
		: public cpp_object<Object>
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

		explicit Object(jobject jobj)
		: cpp_object<Object>(jobj)
		{
		}



		Object();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Class > getClass();
		cpp_int hashCode();
		void notify();
		void notifyAll();
		local_ref< java::lang::String > toString();
		void wait();
		void wait(cpp_long const&);
		void wait(cpp_long const&, cpp_int const&);
	}; //class Object

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OBJECT_HPP_IMPL
#define J2CPP_JAVA_LANG_OBJECT_HPP_IMPL

namespace j2cpp {




java::lang::Object::Object()
: cpp_object<java::lang::Object>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::Object::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::Object::J2CPP_CLASS_NAME, java::lang::Object::J2CPP_METHOD_NAME(0), java::lang::Object::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



cpp_boolean java::lang::Object::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< java::lang::Class > java::lang::Object::getClass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::lang::Object::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void java::lang::Object::notify()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::lang::Object::notifyAll()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Object::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::lang::Object::wait()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::lang::Object::wait(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void java::lang::Object::wait(cpp_long const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Object,"java/lang/Object")
J2CPP_DEFINE_METHOD(java::lang::Object,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Object,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::Object,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Object,3,"finalize","()V")
J2CPP_DEFINE_METHOD(java::lang::Object,4,"getClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Object,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Object,6,"notify","()V")
J2CPP_DEFINE_METHOD(java::lang::Object,7,"notifyAll","()V")
J2CPP_DEFINE_METHOD(java::lang::Object,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Object,9,"wait","()V")
J2CPP_DEFINE_METHOD(java::lang::Object,10,"wait","(J)V")
J2CPP_DEFINE_METHOD(java::lang::Object,11,"wait","(JI)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION