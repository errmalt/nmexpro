#ifndef INCLUDED_com_mybo_framework_tweener_easing_Back
#define INCLUDED_com_mybo_framework_tweener_easing_Back

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/Public.h>
HX_DECLARE_CLASS5(com,mybo,framework,tweener,easing,Back)
HX_DECLARE_CLASS1(haxe,Public)
namespace com{
namespace mybo{
namespace framework{
namespace tweener{
namespace easing{


class Back_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Back_obj OBJ_;
		Back_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Back_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Back_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::Public_obj *()
			{ return new ::haxe::Public_delegate_< Back_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Back"); }

		static double easeIn( double t,double b,double c,double d);
		static Dynamic easeIn_dyn();

		static double easeOut( double t,double b,double c,double d);
		static Dynamic easeOut_dyn();

		static double easeInOut( double t,double b,double c,double d);
		static Dynamic easeInOut_dyn();

};

} // end namespace com
} // end namespace mybo
} // end namespace framework
} // end namespace tweener
} // end namespace easing

#endif /* INCLUDED_com_mybo_framework_tweener_easing_Back */ 
