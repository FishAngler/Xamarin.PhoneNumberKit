using System;

namespace PhoneNumberKit
{
    public enum PhoneNumberFormat
    {
        e164 = 0,
        international = 1,
        national = 2
    }

    public enum PhoneNumberType
    {
        FixedLine = 0,
        Mobile = 1,
        FixedOrMobile = 2,
        Pager = 3,
        PersonalNumber = 4,
        PremiumRate = 5,
        SharedCost = 6,
        TollFree = 7,
        Voicemail = 8,
        Voip = 9,
        Uan = 10,
        Unknown = 11,
        NotParsed = 12
    }
}
