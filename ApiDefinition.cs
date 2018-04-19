using System;

using UIKit;
using Foundation;
using ObjCRuntime;
using CoreGraphics;
using System.Collections.Generic;

namespace PhoneNumberKit
{
    // @interface PhoneNumber
    [DisableDefaultCtor]
    [BaseType(typeof(NSObject))]
    interface PhoneNumber
    {
        // @property (readonly, copy, nonatomic) int * _Nonnull numberString;
        [Export("numberString", ArgumentSemantic.Copy)]
        string NumberString { get; }

        // @property (readonly, nonatomic) int countryCode;
        [Export("countryCode")]
        int CountryCode { get; }

        // @property (readonly, nonatomic) int leadingZero;
        [Export("leadingZero")]
        int LeadingZero { get; }

        // @property (readonly, nonatomic) int nationalNumber;
        [Export("nationalNumber")]
        int NationalNumber { get; }

        // @property (readonly, copy, nonatomic) int * _Nullable numberExtension;
        [NullAllowed, Export("numberExtension", ArgumentSemantic.Copy)]
        string NumberExtension { get; }

        // @property (readonly, nonatomic) enum PhoneNumberType type;
        [Export("type")]
        PhoneNumberType Type { get; }
    }

    // @interface PhoneNumberKit
    [BaseType(typeof(NSObject))]
    interface PhoneNumberKit
    {
        // -(PhoneNumber * _Nullable)parse:(id)numberString withRegion:(id)region ignoreType:(id)ignoreType error:(id)error __attribute__((warn_unused_result));
        [Export("parse:withRegion:ignoreType:error:")]
        [return: NullAllowed]
        PhoneNumber Parse(string numberString, string region, bool ignoreType, IntPtr error);

        // -(id)parse:(id)numberStrings withRegion:(id)region ignoreType:(id)ignoreType shouldReturnFailedEmptyNumbers:(id)shouldReturnFailedEmptyNumbers __attribute__((warn_unused_result));
        [Export("parse:withRegion:ignoreType:shouldReturnFailedEmptyNumbers:")]
        PhoneNumber[] Parse(string[] numberStrings, string region, bool ignoreType, bool shouldReturnFailedEmptyNumbers);

        // -(id)format:(PhoneNumber * _Nonnull)phoneNumber toType:(enum PhoneNumberFormat)formatType withPrefix:(id)prefix __attribute__((warn_unused_result));
        [Export("format:toType:withPrefix:")]
        string Format(PhoneNumber phoneNumber, PhoneNumberFormat formatType, bool prefix);

        // -(id)allCountries __attribute__((warn_unused_result));
        [Export("allCountries")]
        string[] AllCountries { get; }

        // -(id)countriesWithCode:(id)countryCode __attribute__((warn_unused_result));
        [Export("countriesWithCode:")]
        string[] CountriesWithCode(uint countryCode);

        // -(id)mainCountryForCode:(id)countryCode __attribute__((warn_unused_result));
        [Export("mainCountryForCode:")]
        string MainCountryForCode(uint countryCode);

        // -(id)leadingDigitsFor:(id)country __attribute__((warn_unused_result));
        [Export("leadingDigitsFor:")]
        string LeadingDigitsFor(string country);

        // -(id)getRegionCodeOf:(PhoneNumber * _Nonnull)phoneNumber __attribute__((warn_unused_result));
        [Export("getRegionCodeOf:")]
        string GetRegionCodeOf(PhoneNumber phoneNumber);

        // +(id)defaultRegionCode __attribute__((warn_unused_result));
        [Static]
        [Export("defaultRegionCode")]
        string DefaultRegionCode { get; }
    }

    // @interface PhoneNumberTextField
    [BaseType(typeof(UITextField))]
    interface PhoneNumberTextField
    {
        // @property (copy, nonatomic) int * _Nullable text;
        [NullAllowed, Export("text", ArgumentSemantic.Copy)]
        string Text { get; set; }

        [Wrap("WeakDelegate")]
        [NullAllowed]
        UITextFieldDelegate Delegate { get; set; }

        // @property (nonatomic, strong) id _Nullable delegate;
        [NullAllowed, Export("delegate", ArgumentSemantic.Strong)]
        UITextFieldDelegate WeakDelegate { get; set; }

        // -(instancetype _Nonnull)initWithFrame:(id)frame __attribute__((objc_designated_initializer));
        [Export("initWithFrame:")]
        [DesignatedInitializer]
        IntPtr Constructor(CGRect frame);

        // -(id)textField:(id)textField shouldChangeCharactersInRange:(id)range replacementString:(id)string __attribute__((warn_unused_result));
        [Export("textField:shouldChangeCharactersInRange:replacementString:")]
        bool TextField(UITextField textField, NSRange range, string str);

        // -(id)textFieldShouldBeginEditing:(id)textField __attribute__((warn_unused_result));
        [Export("textFieldShouldBeginEditing:")]
        bool TextFieldShouldBeginEditing(UITextField textField);

        // -(void)textFieldDidBeginEditing:(id)textField;
        [Export("textFieldDidBeginEditing:")]
        void TextFieldDidBeginEditing(UITextField textField);

        // -(id)textFieldShouldEndEditing:(id)textField __attribute__((warn_unused_result));
        [Export("textFieldShouldEndEditing:")]
        bool TextFieldShouldEndEditing(UITextField textField);

        // -(void)textFieldDidEndEditing:(id)textField;
        [Export("textFieldDidEndEditing:")]
        void TextFieldDidEndEditing(UITextField textField);

        // -(id)textFieldShouldClear:(id)textField __attribute__((warn_unused_result));
        [Export("textFieldShouldClear:")]
        bool TextFieldShouldClear(UITextField textField);

        // -(id)textFieldShouldReturn:(id)textField __attribute__((warn_unused_result));
        [Export("textFieldShouldReturn:")]
        bool TextFieldShouldReturn(UITextField textField);
    }
}
