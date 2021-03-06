/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.xpath.XPathVariableResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <javax/xml/namespace/QName.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathVariableResolver;
	class XPathVariableResolver
		: public object<XPathVariableResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit XPathVariableResolver(jobject jobj)
		: object<XPathVariableResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > resolveVariable(local_ref< javax::xml::namespace::QName >  const&);
	}; //class XPathVariableResolver

} //namespace xpath
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL

namespace j2cpp {



javax::xml::xpath::XPathVariableResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > javax::xml::xpath::XPathVariableResolver::resolveVariable(local_ref< javax::xml::namespace::QName > const &a0)
{
	return call_method<
		javax::xml::xpath::XPathVariableResolver::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathVariableResolver::J2CPP_METHOD_NAME(0),
		javax::xml::xpath::XPathVariableResolver::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathVariableResolver,"javax/xml/xpath/XPathVariableResolver")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathVariableResolver,0,"resolveVariable","(Ljavax/xml/namespace/QName;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
