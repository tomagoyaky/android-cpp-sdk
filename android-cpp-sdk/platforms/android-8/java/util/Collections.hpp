/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Collections
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COLLECTIONS_HPP_DECL
#define J2CPP_JAVA_UTIL_COLLECTIONS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace java { namespace util { class Random; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }
namespace j2cpp { namespace java { namespace util { class SortedSet; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Random.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>
#include <java/util/SortedSet.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Collections;
	class Collections
		: public object<Collections>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit Collections(jobject jobj)
		: object<Collections>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jint binarySearch(local_ref< java::util::List >  const&, local_ref< java::lang::Object >  const&);
		static jint binarySearch(local_ref< java::util::List >  const&, local_ref< java::lang::Object >  const&, local_ref< java::util::Comparator >  const&);
		static void copy(local_ref< java::util::List >  const&, local_ref< java::util::List >  const&);
		static local_ref< java::util::Enumeration > enumeration(local_ref< java::util::Collection >  const&);
		static void fill(local_ref< java::util::List >  const&, local_ref< java::lang::Object >  const&);
		static local_ref< java::lang::Object > max(local_ref< java::util::Collection >  const&);
		static local_ref< java::lang::Object > max(local_ref< java::util::Collection >  const&, local_ref< java::util::Comparator >  const&);
		static local_ref< java::lang::Object > min(local_ref< java::util::Collection >  const&);
		static local_ref< java::lang::Object > min(local_ref< java::util::Collection >  const&, local_ref< java::util::Comparator >  const&);
		static local_ref< java::util::List > nCopies(jint, local_ref< java::lang::Object >  const&);
		static void reverse(local_ref< java::util::List >  const&);
		static local_ref< java::util::Comparator > reverseOrder();
		static local_ref< java::util::Comparator > reverseOrder(local_ref< java::util::Comparator >  const&);
		static void shuffle(local_ref< java::util::List >  const&);
		static void shuffle(local_ref< java::util::List >  const&, local_ref< java::util::Random >  const&);
		static local_ref< java::util::Set > singleton(local_ref< java::lang::Object >  const&);
		static local_ref< java::util::List > singletonList(local_ref< java::lang::Object >  const&);
		static local_ref< java::util::Map > singletonMap(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void sort(local_ref< java::util::List >  const&);
		static void sort(local_ref< java::util::List >  const&, local_ref< java::util::Comparator >  const&);
		static void swap(local_ref< java::util::List >  const&, jint, jint);
		static jboolean replaceAll(local_ref< java::util::List >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void rotate(local_ref< java::util::List >  const&, jint);
		static jint indexOfSubList(local_ref< java::util::List >  const&, local_ref< java::util::List >  const&);
		static jint lastIndexOfSubList(local_ref< java::util::List >  const&, local_ref< java::util::List >  const&);
		static local_ref< java::util::ArrayList > list(local_ref< java::util::Enumeration >  const&);
		static local_ref< java::util::Collection > synchronizedCollection(local_ref< java::util::Collection >  const&);
		static local_ref< java::util::List > synchronizedList(local_ref< java::util::List >  const&);
		static local_ref< java::util::Map > synchronizedMap(local_ref< java::util::Map >  const&);
		static local_ref< java::util::Set > synchronizedSet(local_ref< java::util::Set >  const&);
		static local_ref< java::util::SortedMap > synchronizedSortedMap(local_ref< java::util::SortedMap >  const&);
		static local_ref< java::util::SortedSet > synchronizedSortedSet(local_ref< java::util::SortedSet >  const&);
		static local_ref< java::util::Collection > unmodifiableCollection(local_ref< java::util::Collection >  const&);
		static local_ref< java::util::List > unmodifiableList(local_ref< java::util::List >  const&);
		static local_ref< java::util::Map > unmodifiableMap(local_ref< java::util::Map >  const&);
		static local_ref< java::util::Set > unmodifiableSet(local_ref< java::util::Set >  const&);
		static local_ref< java::util::SortedMap > unmodifiableSortedMap(local_ref< java::util::SortedMap >  const&);
		static local_ref< java::util::SortedSet > unmodifiableSortedSet(local_ref< java::util::SortedSet >  const&);
		static jint frequency(local_ref< java::util::Collection >  const&, local_ref< java::lang::Object >  const&);
		static local_ref< java::util::List > emptyList();
		static local_ref< java::util::Set > emptySet();
		static local_ref< java::util::Map > emptyMap();
		static local_ref< java::util::Collection > checkedCollection(local_ref< java::util::Collection >  const&, local_ref< java::lang::Class >  const&);
		static local_ref< java::util::Map > checkedMap(local_ref< java::util::Map >  const&, local_ref< java::lang::Class >  const&, local_ref< java::lang::Class >  const&);
		static local_ref< java::util::List > checkedList(local_ref< java::util::List >  const&, local_ref< java::lang::Class >  const&);
		static local_ref< java::util::Set > checkedSet(local_ref< java::util::Set >  const&, local_ref< java::lang::Class >  const&);
		static local_ref< java::util::SortedMap > checkedSortedMap(local_ref< java::util::SortedMap >  const&, local_ref< java::lang::Class >  const&, local_ref< java::lang::Class >  const&);
		static local_ref< java::util::SortedSet > checkedSortedSet(local_ref< java::util::SortedSet >  const&, local_ref< java::lang::Class >  const&);
		static jboolean addAll(local_ref< java::util::Collection >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static jboolean disjoint(local_ref< java::util::Collection >  const&, local_ref< java::util::Collection >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::util::List > > EMPTY_LIST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::util::Set > > EMPTY_SET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::util::Map > > EMPTY_MAP;
	}; //class Collections

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COLLECTIONS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COLLECTIONS_HPP_IMPL
#define J2CPP_JAVA_UTIL_COLLECTIONS_HPP_IMPL

namespace j2cpp {



java::util::Collections::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint java::util::Collections::binarySearch(local_ref< java::util::List > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(1),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(a0, a1);
}

jint java::util::Collections::binarySearch(local_ref< java::util::List > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::util::Comparator > const &a2)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(2),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(a0, a1, a2);
}

void java::util::Collections::copy(local_ref< java::util::List > const &a0, local_ref< java::util::List > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(3),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(a0, a1);
}

local_ref< java::util::Enumeration > java::util::Collections::enumeration(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(4),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Enumeration >
	>(a0);
}

void java::util::Collections::fill(local_ref< java::util::List > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(5),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0, a1);
}

local_ref< java::lang::Object > java::util::Collections::max(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(6),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(a0);
}

local_ref< java::lang::Object > java::util::Collections::max(local_ref< java::util::Collection > const &a0, local_ref< java::util::Comparator > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(7),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(a0, a1);
}

local_ref< java::lang::Object > java::util::Collections::min(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(8),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(a0);
}

local_ref< java::lang::Object > java::util::Collections::min(local_ref< java::util::Collection > const &a0, local_ref< java::util::Comparator > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(9),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(a0, a1);
}

local_ref< java::util::List > java::util::Collections::nCopies(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(10),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::List >
	>(a0, a1);
}

void java::util::Collections::reverse(local_ref< java::util::List > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(11),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(a0);
}

local_ref< java::util::Comparator > java::util::Collections::reverseOrder()
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(12),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::Comparator >
	>();
}

local_ref< java::util::Comparator > java::util::Collections::reverseOrder(local_ref< java::util::Comparator > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(13),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Comparator >
	>(a0);
}

void java::util::Collections::shuffle(local_ref< java::util::List > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(14),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(a0);
}

void java::util::Collections::shuffle(local_ref< java::util::List > const &a0, local_ref< java::util::Random > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(15),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(a0, a1);
}

local_ref< java::util::Set > java::util::Collections::singleton(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(16),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::util::Set >
	>(a0);
}

local_ref< java::util::List > java::util::Collections::singletonList(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(17),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::util::List >
	>(a0);
}

local_ref< java::util::Map > java::util::Collections::singletonMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(18),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::util::Map >
	>(a0, a1);
}

void java::util::Collections::sort(local_ref< java::util::List > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(19),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(a0);
}

void java::util::Collections::sort(local_ref< java::util::List > const &a0, local_ref< java::util::Comparator > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(20),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(a0, a1);
}

void java::util::Collections::swap(local_ref< java::util::List > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(21),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(a0, a1, a2);
}

jboolean java::util::Collections::replaceAll(local_ref< java::util::List > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(22),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(a0, a1, a2);
}

void java::util::Collections::rotate(local_ref< java::util::List > const &a0, jint a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(23),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(a0, a1);
}

jint java::util::Collections::indexOfSubList(local_ref< java::util::List > const &a0, local_ref< java::util::List > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(24),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(a0, a1);
}

jint java::util::Collections::lastIndexOfSubList(local_ref< java::util::List > const &a0, local_ref< java::util::List > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(25),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(a0, a1);
}

local_ref< java::util::ArrayList > java::util::Collections::list(local_ref< java::util::Enumeration > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(26),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::util::ArrayList >
	>(a0);
}

local_ref< java::util::Collection > java::util::Collections::synchronizedCollection(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(27),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::util::Collection >
	>(a0);
}

local_ref< java::util::List > java::util::Collections::synchronizedList(local_ref< java::util::List > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(28),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::util::List >
	>(a0);
}

local_ref< java::util::Map > java::util::Collections::synchronizedMap(local_ref< java::util::Map > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(29),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::util::Map >
	>(a0);
}

local_ref< java::util::Set > java::util::Collections::synchronizedSet(local_ref< java::util::Set > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(30),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::util::Set >
	>(a0);
}

local_ref< java::util::SortedMap > java::util::Collections::synchronizedSortedMap(local_ref< java::util::SortedMap > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(31),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::util::SortedMap >
	>(a0);
}

local_ref< java::util::SortedSet > java::util::Collections::synchronizedSortedSet(local_ref< java::util::SortedSet > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(32),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::util::SortedSet >
	>(a0);
}

local_ref< java::util::Collection > java::util::Collections::unmodifiableCollection(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(33),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::util::Collection >
	>(a0);
}

local_ref< java::util::List > java::util::Collections::unmodifiableList(local_ref< java::util::List > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(34),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::util::List >
	>(a0);
}

local_ref< java::util::Map > java::util::Collections::unmodifiableMap(local_ref< java::util::Map > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(35),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::util::Map >
	>(a0);
}

local_ref< java::util::Set > java::util::Collections::unmodifiableSet(local_ref< java::util::Set > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(36),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::util::Set >
	>(a0);
}

local_ref< java::util::SortedMap > java::util::Collections::unmodifiableSortedMap(local_ref< java::util::SortedMap > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(37),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::util::SortedMap >
	>(a0);
}

local_ref< java::util::SortedSet > java::util::Collections::unmodifiableSortedSet(local_ref< java::util::SortedSet > const &a0)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(38),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::util::SortedSet >
	>(a0);
}

jint java::util::Collections::frequency(local_ref< java::util::Collection > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(39),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(39), 
		jint
	>(a0, a1);
}

local_ref< java::util::List > java::util::Collections::emptyList()
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(40),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::util::List >
	>();
}

local_ref< java::util::Set > java::util::Collections::emptySet()
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(41),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::util::Set >
	>();
}

local_ref< java::util::Map > java::util::Collections::emptyMap()
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(42),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::util::Map >
	>();
}

local_ref< java::util::Collection > java::util::Collections::checkedCollection(local_ref< java::util::Collection > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(43),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< java::util::Collection >
	>(a0, a1);
}

local_ref< java::util::Map > java::util::Collections::checkedMap(local_ref< java::util::Map > const &a0, local_ref< java::lang::Class > const &a1, local_ref< java::lang::Class > const &a2)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(44),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< java::util::Map >
	>(a0, a1, a2);
}

local_ref< java::util::List > java::util::Collections::checkedList(local_ref< java::util::List > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(45),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::util::List >
	>(a0, a1);
}

local_ref< java::util::Set > java::util::Collections::checkedSet(local_ref< java::util::Set > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(46),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::util::Set >
	>(a0, a1);
}

local_ref< java::util::SortedMap > java::util::Collections::checkedSortedMap(local_ref< java::util::SortedMap > const &a0, local_ref< java::lang::Class > const &a1, local_ref< java::lang::Class > const &a2)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(47),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::util::SortedMap >
	>(a0, a1, a2);
}

local_ref< java::util::SortedSet > java::util::Collections::checkedSortedSet(local_ref< java::util::SortedSet > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(48),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::util::SortedSet >
	>(a0, a1);
}

jboolean java::util::Collections::addAll(local_ref< java::util::Collection > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(49),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(49), 
		jboolean
	>(a0, a1);
}

jboolean java::util::Collections::disjoint(local_ref< java::util::Collection > const &a0, local_ref< java::util::Collection > const &a1)
{
	return call_static_method<
		java::util::Collections::J2CPP_CLASS_NAME,
		java::util::Collections::J2CPP_METHOD_NAME(50),
		java::util::Collections::J2CPP_METHOD_SIGNATURE(50), 
		jboolean
	>(a0, a1);
}



static_field<
	java::util::Collections::J2CPP_CLASS_NAME,
	java::util::Collections::J2CPP_FIELD_NAME(0),
	java::util::Collections::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::util::List >
> java::util::Collections::EMPTY_LIST;

static_field<
	java::util::Collections::J2CPP_CLASS_NAME,
	java::util::Collections::J2CPP_FIELD_NAME(1),
	java::util::Collections::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::util::Set >
> java::util::Collections::EMPTY_SET;

static_field<
	java::util::Collections::J2CPP_CLASS_NAME,
	java::util::Collections::J2CPP_FIELD_NAME(2),
	java::util::Collections::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::util::Map >
> java::util::Collections::EMPTY_MAP;


J2CPP_DEFINE_CLASS(java::util::Collections,"java/util/Collections")
J2CPP_DEFINE_METHOD(java::util::Collections,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Collections,1,"binarySearch","(Ljava/util/List;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::Collections,2,"binarySearch","(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I")
J2CPP_DEFINE_METHOD(java::util::Collections,3,"copy","(Ljava/util/List;Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,4,"enumeration","(Ljava/util/Collection;)Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::Collections,5,"fill","(Ljava/util/List;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,6,"max","(Ljava/util/Collection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Collections,7,"max","(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Collections,8,"min","(Ljava/util/Collection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Collections,9,"min","(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Collections,10,"nCopies","(ILjava/lang/Object;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,11,"reverse","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,12,"reverseOrder","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::Collections,13,"reverseOrder","(Ljava/util/Comparator;)Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::Collections,14,"shuffle","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,15,"shuffle","(Ljava/util/List;Ljava/util/Random;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,16,"singleton","(Ljava/lang/Object;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Collections,17,"singletonList","(Ljava/lang/Object;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,18,"singletonMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::util::Collections,19,"sort","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,20,"sort","(Ljava/util/List;Ljava/util/Comparator;)V")
J2CPP_DEFINE_METHOD(java::util::Collections,21,"swap","(Ljava/util/List;II)V")
J2CPP_DEFINE_METHOD(java::util::Collections,22,"replaceAll","(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Collections,23,"rotate","(Ljava/util/List;I)V")
J2CPP_DEFINE_METHOD(java::util::Collections,24,"indexOfSubList","(Ljava/util/List;Ljava/util/List;)I")
J2CPP_DEFINE_METHOD(java::util::Collections,25,"lastIndexOfSubList","(Ljava/util/List;Ljava/util/List;)I")
J2CPP_DEFINE_METHOD(java::util::Collections,26,"list","(Ljava/util/Enumeration;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(java::util::Collections,27,"synchronizedCollection","(Ljava/util/Collection;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::Collections,28,"synchronizedList","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,29,"synchronizedMap","(Ljava/util/Map;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::util::Collections,30,"synchronizedSet","(Ljava/util/Set;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Collections,31,"synchronizedSortedMap","(Ljava/util/SortedMap;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::Collections,32,"synchronizedSortedSet","(Ljava/util/SortedSet;)Ljava/util/SortedSet;")
J2CPP_DEFINE_METHOD(java::util::Collections,33,"unmodifiableCollection","(Ljava/util/Collection;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::Collections,34,"unmodifiableList","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,35,"unmodifiableMap","(Ljava/util/Map;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::util::Collections,36,"unmodifiableSet","(Ljava/util/Set;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Collections,37,"unmodifiableSortedMap","(Ljava/util/SortedMap;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::Collections,38,"unmodifiableSortedSet","(Ljava/util/SortedSet;)Ljava/util/SortedSet;")
J2CPP_DEFINE_METHOD(java::util::Collections,39,"frequency","(Ljava/util/Collection;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::Collections,40,"emptyList","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,41,"emptySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Collections,42,"emptyMap","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::util::Collections,43,"checkedCollection","(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::Collections,44,"checkedMap","(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::util::Collections,45,"checkedList","(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::Collections,46,"checkedSet","(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Collections,47,"checkedSortedMap","(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::Collections,48,"checkedSortedSet","(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;")
J2CPP_DEFINE_METHOD(java::util::Collections,49,"addAll","(Ljava/util/Collection;[java.lang.Object)Z")
J2CPP_DEFINE_METHOD(java::util::Collections,50,"disjoint","(Ljava/util/Collection;Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::Collections,51,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::util::Collections,0,"EMPTY_LIST","Ljava/util/List;")
J2CPP_DEFINE_FIELD(java::util::Collections,1,"EMPTY_SET","Ljava/util/Set;")
J2CPP_DEFINE_FIELD(java::util::Collections,2,"EMPTY_MAP","Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COLLECTIONS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
