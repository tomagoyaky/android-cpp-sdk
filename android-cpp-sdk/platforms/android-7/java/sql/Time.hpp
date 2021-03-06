/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Time
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIME_HPP_DECL
#define J2CPP_JAVA_SQL_TIME_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Time;
	class Time
		: public object<Time>
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

		explicit Time(jobject jobj)
		: object<Time>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::util::Date>() const;


		Time(jint, jint, jint);
		Time(jlong);
		jint getDate();
		jint getDay();
		jint getMonth();
		jint getYear();
		void setDate(jint);
		void setMonth(jint);
		void setYear(jint);
		void setTime(jlong);
		local_ref< java::lang::String > toString();
		static local_ref< java::sql::Time > valueOf(local_ref< java::lang::String >  const&);
	}; //class Time

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIME_HPP_IMPL
#define J2CPP_JAVA_SQL_TIME_HPP_IMPL

namespace j2cpp {



java::sql::Time::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::sql::Time::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::sql::Time::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::sql::Time::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::sql::Time::operator local_ref<java::util::Date>() const
{
	return local_ref<java::util::Date>(get_jobject());
}


java::sql::Time::Time(jint a0, jint a1, jint a2)
: object<java::sql::Time>(
	call_new_object<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(0),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



java::sql::Time::Time(jlong a0)
: object<java::sql::Time>(
	call_new_object<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(1),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::sql::Time::getDate()
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(2),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint java::sql::Time::getDay()
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(3),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint java::sql::Time::getMonth()
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(4),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint java::sql::Time::getYear()
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(5),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void java::sql::Time::setDate(jint a0)
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(6),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void java::sql::Time::setMonth(jint a0)
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(7),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::sql::Time::setYear(jint a0)
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(8),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::sql::Time::setTime(jlong a0)
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(9),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::sql::Time::toString()
{
	return call_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(10),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::sql::Time > java::sql::Time::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::sql::Time::J2CPP_CLASS_NAME,
		java::sql::Time::J2CPP_METHOD_NAME(11),
		java::sql::Time::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::sql::Time >
	>(a0);
}


J2CPP_DEFINE_CLASS(java::sql::Time,"java/sql/Time")
J2CPP_DEFINE_METHOD(java::sql::Time,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(java::sql::Time,1,"<init>","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Time,2,"getDate","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,3,"getDay","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,4,"getMonth","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,5,"getYear","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,6,"setDate","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,7,"setMonth","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,8,"setYear","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,9,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Time,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Time,11,"valueOf","(Ljava/lang/String;)Ljava/sql/Time;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
