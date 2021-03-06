/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.ByteBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_BYTEBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_BYTEBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace java { namespace nio { class CharBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class ShortBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class DoubleBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }
namespace j2cpp { namespace java { namespace nio { class IntBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class LongBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class FloatBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/ByteOrder.hpp>
#include <java/nio/CharBuffer.hpp>
#include <java/nio/DoubleBuffer.hpp>
#include <java/nio/FloatBuffer.hpp>
#include <java/nio/IntBuffer.hpp>
#include <java/nio/LongBuffer.hpp>
#include <java/nio/ShortBuffer.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class ByteBuffer;
	class ByteBuffer
		: public object<ByteBuffer>
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
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)

		explicit ByteBuffer(jobject jobj)
		: object<ByteBuffer>(jobj)
		{
		}

		operator local_ref<java::nio::Buffer>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;


		static local_ref< java::nio::ByteBuffer > allocate(jint);
		static local_ref< java::nio::ByteBuffer > allocateDirect(jint);
		static local_ref< java::nio::ByteBuffer > wrap(local_ref< array<jbyte,1> >  const&);
		static local_ref< java::nio::ByteBuffer > wrap(local_ref< array<jbyte,1> >  const&, jint, jint);
		local_ref< array<jbyte,1> > array_();
		jint arrayOffset();
		local_ref< java::nio::CharBuffer > asCharBuffer();
		local_ref< java::nio::DoubleBuffer > asDoubleBuffer();
		local_ref< java::nio::FloatBuffer > asFloatBuffer();
		local_ref< java::nio::IntBuffer > asIntBuffer();
		local_ref< java::nio::LongBuffer > asLongBuffer();
		local_ref< java::nio::ByteBuffer > asReadOnlyBuffer();
		local_ref< java::nio::ShortBuffer > asShortBuffer();
		local_ref< java::nio::ByteBuffer > compact();
		jint compareTo(local_ref< java::nio::ByteBuffer >  const&);
		local_ref< java::nio::ByteBuffer > duplicate();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jbyte get();
		local_ref< java::nio::ByteBuffer > get(local_ref< array<jbyte,1> >  const&);
		local_ref< java::nio::ByteBuffer > get(local_ref< array<jbyte,1> >  const&, jint, jint);
		jbyte get(jint);
		jchar getChar();
		jchar getChar(jint);
		jdouble getDouble();
		jdouble getDouble(jint);
		jfloat getFloat();
		jfloat getFloat(jint);
		jint getInt();
		jint getInt(jint);
		jlong getLong();
		jlong getLong(jint);
		jshort getShort();
		jshort getShort(jint);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::ByteBuffer > order(local_ref< java::nio::ByteOrder >  const&);
		local_ref< java::nio::ByteBuffer > put(jbyte);
		local_ref< java::nio::ByteBuffer > put(local_ref< array<jbyte,1> >  const&);
		local_ref< java::nio::ByteBuffer > put(local_ref< array<jbyte,1> >  const&, jint, jint);
		local_ref< java::nio::ByteBuffer > put(local_ref< java::nio::ByteBuffer >  const&);
		local_ref< java::nio::ByteBuffer > put(jint, jbyte);
		local_ref< java::nio::ByteBuffer > putChar(jchar);
		local_ref< java::nio::ByteBuffer > putChar(jint, jchar);
		local_ref< java::nio::ByteBuffer > putDouble(jdouble);
		local_ref< java::nio::ByteBuffer > putDouble(jint, jdouble);
		local_ref< java::nio::ByteBuffer > putFloat(jfloat);
		local_ref< java::nio::ByteBuffer > putFloat(jint, jfloat);
		local_ref< java::nio::ByteBuffer > putInt(jint);
		local_ref< java::nio::ByteBuffer > putInt(jint, jint);
		local_ref< java::nio::ByteBuffer > putLong(jlong);
		local_ref< java::nio::ByteBuffer > putLong(jint, jlong);
		local_ref< java::nio::ByteBuffer > putShort(jshort);
		local_ref< java::nio::ByteBuffer > putShort(jint, jshort);
		local_ref< java::nio::ByteBuffer > slice();
		local_ref< java::lang::String > toString();
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class ByteBuffer

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_BYTEBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_BYTEBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_BYTEBUFFER_HPP_IMPL

namespace j2cpp {



java::nio::ByteBuffer::operator local_ref<java::nio::Buffer>() const
{
	return local_ref<java::nio::Buffer>(get_jobject());
}

java::nio::ByteBuffer::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::nio::ByteBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::allocate(jint a0)
{
	return call_static_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(1),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::ByteBuffer >
	>(a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::allocateDirect(jint a0)
{
	return call_static_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(2),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::ByteBuffer >
	>(a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::wrap(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(3),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::ByteBuffer >
	>(a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::wrap(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(4),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::ByteBuffer >
	>(a0, a1, a2);
}

local_ref< array<jbyte,1> > java::nio::ByteBuffer::array_()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(5),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint java::nio::ByteBuffer::arrayOffset()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(6),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::nio::CharBuffer > java::nio::ByteBuffer::asCharBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(7),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::nio::CharBuffer >
	>(get_jobject());
}

local_ref< java::nio::DoubleBuffer > java::nio::ByteBuffer::asDoubleBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(8),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject());
}

local_ref< java::nio::FloatBuffer > java::nio::ByteBuffer::asFloatBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(9),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::nio::FloatBuffer >
	>(get_jobject());
}

local_ref< java::nio::IntBuffer > java::nio::ByteBuffer::asIntBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(10),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::nio::IntBuffer >
	>(get_jobject());
}

local_ref< java::nio::LongBuffer > java::nio::ByteBuffer::asLongBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(11),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::nio::LongBuffer >
	>(get_jobject());
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::asReadOnlyBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(12),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject());
}

local_ref< java::nio::ShortBuffer > java::nio::ByteBuffer::asShortBuffer()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(13),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::nio::ShortBuffer >
	>(get_jobject());
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::compact()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(14),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject());
}

jint java::nio::ByteBuffer::compareTo(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(15),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::duplicate()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(16),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject());
}

jboolean java::nio::ByteBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(17),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

jbyte java::nio::ByteBuffer::get()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(18),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(18), 
		jbyte
	>(get_jobject());
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::get(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(19),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::get(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(20),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1, a2);
}

jbyte java::nio::ByteBuffer::get(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(21),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(21), 
		jbyte
	>(get_jobject(), a0);
}

jchar java::nio::ByteBuffer::getChar()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(22),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(22), 
		jchar
	>(get_jobject());
}

jchar java::nio::ByteBuffer::getChar(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(23),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(23), 
		jchar
	>(get_jobject(), a0);
}

jdouble java::nio::ByteBuffer::getDouble()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(24),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(24), 
		jdouble
	>(get_jobject());
}

jdouble java::nio::ByteBuffer::getDouble(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(25),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(25), 
		jdouble
	>(get_jobject(), a0);
}

jfloat java::nio::ByteBuffer::getFloat()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(26),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(26), 
		jfloat
	>(get_jobject());
}

jfloat java::nio::ByteBuffer::getFloat(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(27),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(27), 
		jfloat
	>(get_jobject(), a0);
}

jint java::nio::ByteBuffer::getInt()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(28),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(28), 
		jint
	>(get_jobject());
}

jint java::nio::ByteBuffer::getInt(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(29),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject(), a0);
}

jlong java::nio::ByteBuffer::getLong()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(30),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(30), 
		jlong
	>(get_jobject());
}

jlong java::nio::ByteBuffer::getLong(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(31),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(31), 
		jlong
	>(get_jobject(), a0);
}

jshort java::nio::ByteBuffer::getShort()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(32),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(32), 
		jshort
	>(get_jobject());
}

jshort java::nio::ByteBuffer::getShort(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(33),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(33), 
		jshort
	>(get_jobject(), a0);
}

jboolean java::nio::ByteBuffer::hasArray()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(34),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(34), 
		jboolean
	>(get_jobject());
}

jint java::nio::ByteBuffer::hashCode()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(35),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(35), 
		jint
	>(get_jobject());
}

jboolean java::nio::ByteBuffer::isDirect()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(36),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(36), 
		jboolean
	>(get_jobject());
}

local_ref< java::nio::ByteOrder > java::nio::ByteBuffer::order()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(37),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::nio::ByteOrder >
	>(get_jobject());
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::order(local_ref< java::nio::ByteOrder > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(38),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::put(jbyte a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(39),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::put(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(40),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::put(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(41),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::put(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(42),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::put(jint a0, jbyte a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(43),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putChar(jchar a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(44),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putChar(jint a0, jchar a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(45),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putDouble(jdouble a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(46),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putDouble(jint a0, jdouble a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(47),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putFloat(jfloat a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(48),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putFloat(jint a0, jfloat a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(49),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(49), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putInt(jint a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(50),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(50), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putInt(jint a0, jint a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(51),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(51), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putLong(jlong a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(52),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(52), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putLong(jint a0, jlong a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(53),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(53), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putShort(jshort a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(54),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(54), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::putShort(jint a0, jshort a1)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(55),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(55), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::ByteBuffer > java::nio::ByteBuffer::slice()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(56),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(56), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject());
}

local_ref< java::lang::String > java::nio::ByteBuffer::toString()
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(57),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(57), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::nio::ByteBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::ByteBuffer::J2CPP_CLASS_NAME,
		java::nio::ByteBuffer::J2CPP_METHOD_NAME(58),
		java::nio::ByteBuffer::J2CPP_METHOD_SIGNATURE(58), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::ByteBuffer,"java/nio/ByteBuffer")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,1,"allocate","(I)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,2,"allocateDirect","(I)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,3,"wrap","([B)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,4,"wrap","([BII)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,5,"array","()[B")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,6,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,7,"asCharBuffer","()Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,8,"asDoubleBuffer","()Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,9,"asFloatBuffer","()Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,10,"asIntBuffer","()Ljava/nio/IntBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,11,"asLongBuffer","()Ljava/nio/LongBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,12,"asReadOnlyBuffer","()Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,13,"asShortBuffer","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,14,"compact","()Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,15,"compareTo","(Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,16,"duplicate","()Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,17,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,18,"get","()B")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,19,"get","([B)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,20,"get","([BII)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,21,"get","(I)B")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,22,"getChar","()C")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,23,"getChar","(I)C")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,24,"getDouble","()D")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,25,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,26,"getFloat","()F")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,27,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,28,"getInt","()I")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,29,"getInt","(I)I")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,30,"getLong","()J")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,31,"getLong","(I)J")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,32,"getShort","()S")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,33,"getShort","(I)S")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,34,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,35,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,36,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,37,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,38,"order","(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,39,"put","(B)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,40,"put","([B)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,41,"put","([BII)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,42,"put","(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,43,"put","(IB)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,44,"putChar","(C)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,45,"putChar","(IC)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,46,"putDouble","(D)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,47,"putDouble","(ID)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,48,"putFloat","(F)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,49,"putFloat","(IF)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,50,"putInt","(I)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,51,"putInt","(II)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,52,"putLong","(J)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,53,"putLong","(IJ)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,54,"putShort","(S)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,55,"putShort","(IS)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,56,"slice","()Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,57,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::ByteBuffer,58,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_BYTEBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
