// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PhoneNumberKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



enum PhoneNumberType : NSInteger;

/// Parsed phone number object
/// <ul>
///   <li>
///     numberString: String used to generate phone number struct
///   </li>
///   <li>
///     countryCode: Country dialing code as an unsigned. Int.
///   </li>
///   <li>
///     leadingZero: Some countries (e.g. Italy) require leading zeros. Bool.
///   </li>
///   <li>
///     nationalNumber: National number as an unsigned. Int.
///   </li>
///   <li>
///     numberExtension: Extension if available. String. Optional
///   </li>
///   <li>
///     type: Computed phone number type on access. Returns from an enumeration - PNPhoneNumberType.
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("PhoneNumber")
@interface PhoneNumber : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull numberString;
@property (nonatomic, readonly) uint64_t countryCode;
@property (nonatomic, readonly) BOOL leadingZero;
@property (nonatomic, readonly) uint64_t nationalNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable numberExtension;
@property (nonatomic, readonly) enum PhoneNumberType type;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end







typedef SWIFT_ENUM_NAMED(NSInteger, PhoneNumberFormat, "PhoneNumberFormat") {
  e164 SWIFT_COMPILE_NAME("e164") = 0,
  international SWIFT_COMPILE_NAME("international") = 1,
  national SWIFT_COMPILE_NAME("national") = 2,
};


SWIFT_CLASS_NAMED("PhoneNumberKit")
@interface PhoneNumberKit : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Parses a number string, used to create PhoneNumber objects. Throws.
/// \param numberString the raw number string.
///
/// \param region ISO 639 compliant region code.
///
/// \param ignoreType Avoids number type checking for faster performance.
///
///
/// returns:
/// PhoneNumber object.
- (PhoneNumber * _Nullable)parse:(NSString * _Nonnull)numberString withRegion:(NSString * _Nonnull)region ignoreType:(BOOL)ignoreType error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Parses an array of number strings. Optimised for performance. Invalid numbers are ignored in the resulting array
/// \param numberStrings array of raw number strings.
///
/// \param region ISO 639 compliant region code.
///
/// \param ignoreType Avoids number type checking for faster performance.
///
///
/// returns:
/// array of PhoneNumber objects.
- (NSArray<PhoneNumber *> * _Nonnull)parse:(NSArray<NSString *> * _Nonnull)numberStrings withRegion:(NSString * _Nonnull)region ignoreType:(BOOL)ignoreType shouldReturnFailedEmptyNumbers:(BOOL)shouldReturnFailedEmptyNumbers SWIFT_WARN_UNUSED_RESULT;
/// Formats a PhoneNumber object for dispaly.
/// \param phoneNumber PhoneNumber object.
///
/// \param formatType PhoneNumberFormat enum.
///
/// \param prefix whether or not to include the prefix.
///
///
/// returns:
/// Formatted representation of the PhoneNumber.
- (NSString * _Nonnull)format:(PhoneNumber * _Nonnull)phoneNumber toType:(enum PhoneNumberFormat)formatType withPrefix:(BOOL)prefix SWIFT_WARN_UNUSED_RESULT;
/// Get a list of all the countries in the metadata database
///
/// returns:
/// An array of ISO 639 compliant region codes.
- (NSArray<NSString *> * _Nonnull)allCountries SWIFT_WARN_UNUSED_RESULT;
/// Get an array of ISO 639 compliant region codes corresponding to a given country code.
/// \param countryCode international country code (e.g 44 for the UK).
///
///
/// returns:
/// optional array of ISO 639 compliant region codes.
- (NSArray<NSString *> * _Nullable)countriesWithCode:(uint64_t)countryCode SWIFT_WARN_UNUSED_RESULT;
/// Get an main ISO 639 compliant region code for a given country code.
/// \param countryCode international country code (e.g 1 for the US).
///
///
/// returns:
/// ISO 639 compliant region code string.
- (NSString * _Nullable)mainCountryForCode:(uint64_t)countryCode SWIFT_WARN_UNUSED_RESULT;
/// Get leading digits for an ISO 639 compliant region code.
/// \param country ISO 639 compliant region code.
///
///
/// returns:
/// leading digits (e.g. 876 for Jamaica).
- (NSString * _Nullable)leadingDigitsFor:(NSString * _Nonnull)country SWIFT_WARN_UNUSED_RESULT;
/// Determine the region code of a given phone number.
/// \param phoneNumber PhoneNumber object
///
///
/// returns:
/// Region code, eg “US”, or nil if the region cannot be determined.
- (NSString * _Nullable)getRegionCodeOf:(PhoneNumber * _Nonnull)phoneNumber SWIFT_WARN_UNUSED_RESULT;
/// Get a user’s default region code
///
/// returns:
/// A computed value for the user’s current region - based on the iPhone’s carrier and if not available, the device region.
+ (NSString * _Nonnull)defaultRegionCode SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

/// Custom text field that formats phone numbers
SWIFT_CLASS_NAMED("PhoneNumberTextField")
@interface PhoneNumberTextField : UITextField <UITextFieldDelegate>
/// Override setText so number will be automatically formatted when setting text by code
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) id <UITextFieldDelegate> _Nullable delegate;
/// Init with frame
/// \param frame UITextfield F
///
///
/// returns:
/// UITextfield
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Init with coder
/// \param aDecoder decoder
///
///
/// returns:
/// UITextfield
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldClear:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
@end

/// Phone number type enumeration
/// <ul>
///   <li>
///     fixedLine: Fixed line numbers
///   </li>
///   <li>
///     mobile: Mobile numbers
///   </li>
///   <li>
///     fixedOrMobile: Either fixed or mobile numbers if we can’t tell conclusively.
///   </li>
///   <li>
///     pager: Pager numbers
///   </li>
///   <li>
///     personalNumber: Personal number numbers
///   </li>
///   <li>
///     premiumRate: Premium rate numbers
///   </li>
///   <li>
///     sharedCost: Shared cost numbers
///   </li>
///   <li>
///     tollFree: Toll free numbers
///   </li>
///   <li>
///     voicemail: Voice mail numbers
///   </li>
///   <li>
///     vOIP: Voip numbers
///   </li>
///   <li>
///     uan: UAN numbers
///   </li>
///   <li>
///     unknown: Unknown number type
///   </li>
/// </ul>
typedef SWIFT_ENUM_NAMED(NSInteger, PhoneNumberType, "PhoneNumberType") {
  PhoneNumberTypeFixedLine = 0,
  PhoneNumberTypeMobile = 1,
  PhoneNumberTypeFixedOrMobile = 2,
  PhoneNumberTypePager = 3,
  PhoneNumberTypePersonalNumber = 4,
  PhoneNumberTypePremiumRate = 5,
  PhoneNumberTypeSharedCost = 6,
  PhoneNumberTypeTollFree = 7,
  PhoneNumberTypeVoicemail = 8,
  PhoneNumberTypeVoip = 9,
  PhoneNumberTypeUan = 10,
  PhoneNumberTypeUnknown = 11,
  PhoneNumberTypeNotParsed = 12,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
