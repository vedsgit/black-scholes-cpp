﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("nhn_MX"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Central Nahuatl for Mexico"),.source=tsc("RAP\t\t;\t\tfast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Central Nahuatl"),.territory=tsc("Mexico"),.revision=tsc("1.0"),.date=tsc("2012-08-19")},.monetary={.int_curr_symbol=tsc("MXN "),.currency_symbol=tsc("$"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("teo"),tsc("cei"),tsc("ome"),tsc("yei"),tsc("nau"),tsc("mac"),tsc("chi")},.day={tsc("teoilhuitl"),tsc("ceilhuitl"),tsc("omeilhuitl"),tsc("yeilhuitl"),tsc("nahuilhuitl"),tsc("macuililhuitl"),tsc("chicuaceilhuitl")},.abmon={tsc("ene"),tsc("feb"),tsc("mar"),tsc("abr"),tsc("may"),tsc("jun"),tsc("jul"),tsc("ago"),tsc("sep"),tsc("oct"),tsc("nov"),tsc("dic")},.mon={tsc("enero"),tsc("febrero"),tsc("marzo"),tsc("abril"),tsc("mayo"),tsc("junio"),tsc("julio"),tsc("agosto"),tsc("septiembre"),tsc("octubre"),tsc("noviembre"),tsc("diciembre")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1sSqQyY]"),.noexpr=tsc("^[-0nNaA]"),.yesstr=tsc("quema"),.nostr=tsc("ahmo")},.paper={.width=216,.height=279},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("52")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Mexihco"),.country_ab2=tsc("MX"),.country_ab3=tsc("MEX"),.country_num=484,.country_car=tsc("MEX"),.lang_name=tsc("Tlahco nāhuatlahtōlli"),.lang_term=tsc("nhn"),.lang_lib=tsc("nhn")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"nhn_MX"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Central Nahuatl for Mexico"),.source=tsc(L"RAP\t\t;\t\tfast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Central Nahuatl"),.territory=tsc(L"Mexico"),.revision=tsc(L"1.0"),.date=tsc(L"2012-08-19")},.monetary={.int_curr_symbol=tsc(L"MXN "),.currency_symbol=tsc(L"$"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"teo"),tsc(L"cei"),tsc(L"ome"),tsc(L"yei"),tsc(L"nau"),tsc(L"mac"),tsc(L"chi")},.day={tsc(L"teoilhuitl"),tsc(L"ceilhuitl"),tsc(L"omeilhuitl"),tsc(L"yeilhuitl"),tsc(L"nahuilhuitl"),tsc(L"macuililhuitl"),tsc(L"chicuaceilhuitl")},.abmon={tsc(L"ene"),tsc(L"feb"),tsc(L"mar"),tsc(L"abr"),tsc(L"may"),tsc(L"jun"),tsc(L"jul"),tsc(L"ago"),tsc(L"sep"),tsc(L"oct"),tsc(L"nov"),tsc(L"dic")},.mon={tsc(L"enero"),tsc(L"febrero"),tsc(L"marzo"),tsc(L"abril"),tsc(L"mayo"),tsc(L"junio"),tsc(L"julio"),tsc(L"agosto"),tsc(L"septiembre"),tsc(L"octubre"),tsc(L"noviembre"),tsc(L"diciembre")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1sSqQyY]"),.noexpr=tsc(L"^[-0nNaA]"),.yesstr=tsc(L"quema"),.nostr=tsc(L"ahmo")},.paper={.width=216,.height=279},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"52")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Mexihco"),.country_ab2=tsc(L"MX"),.country_ab3=tsc(L"MEX"),.country_num=484,.country_car=tsc(L"MEX"),.lang_name=tsc(L"Tlahco nāhuatlahtōlli"),.lang_term=tsc(L"nhn"),.lang_lib=tsc(L"nhn")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"nhn_MX"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Central Nahuatl for Mexico"),.source=tsc(u8"RAP\t\t;\t\tfast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Central Nahuatl"),.territory=tsc(u8"Mexico"),.revision=tsc(u8"1.0"),.date=tsc(u8"2012-08-19")},.monetary={.int_curr_symbol=tsc(u8"MXN "),.currency_symbol=tsc(u8"$"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"teo"),tsc(u8"cei"),tsc(u8"ome"),tsc(u8"yei"),tsc(u8"nau"),tsc(u8"mac"),tsc(u8"chi")},.day={tsc(u8"teoilhuitl"),tsc(u8"ceilhuitl"),tsc(u8"omeilhuitl"),tsc(u8"yeilhuitl"),tsc(u8"nahuilhuitl"),tsc(u8"macuililhuitl"),tsc(u8"chicuaceilhuitl")},.abmon={tsc(u8"ene"),tsc(u8"feb"),tsc(u8"mar"),tsc(u8"abr"),tsc(u8"may"),tsc(u8"jun"),tsc(u8"jul"),tsc(u8"ago"),tsc(u8"sep"),tsc(u8"oct"),tsc(u8"nov"),tsc(u8"dic")},.mon={tsc(u8"enero"),tsc(u8"febrero"),tsc(u8"marzo"),tsc(u8"abril"),tsc(u8"mayo"),tsc(u8"junio"),tsc(u8"julio"),tsc(u8"agosto"),tsc(u8"septiembre"),tsc(u8"octubre"),tsc(u8"noviembre"),tsc(u8"diciembre")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1sSqQyY]"),.noexpr=tsc(u8"^[-0nNaA]"),.yesstr=tsc(u8"quema"),.nostr=tsc(u8"ahmo")},.paper={.width=216,.height=279},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"52")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Mexihco"),.country_ab2=tsc(u8"MX"),.country_ab3=tsc(u8"MEX"),.country_num=484,.country_car=tsc(u8"MEX"),.lang_name=tsc(u8"Tlahco nāhuatlahtōlli"),.lang_term=tsc(u8"nhn"),.lang_lib=tsc(u8"nhn")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"nhn_MX"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Central Nahuatl for Mexico"),.source=tsc(u"RAP\t\t;\t\tfast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Central Nahuatl"),.territory=tsc(u"Mexico"),.revision=tsc(u"1.0"),.date=tsc(u"2012-08-19")},.monetary={.int_curr_symbol=tsc(u"MXN "),.currency_symbol=tsc(u"$"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"teo"),tsc(u"cei"),tsc(u"ome"),tsc(u"yei"),tsc(u"nau"),tsc(u"mac"),tsc(u"chi")},.day={tsc(u"teoilhuitl"),tsc(u"ceilhuitl"),tsc(u"omeilhuitl"),tsc(u"yeilhuitl"),tsc(u"nahuilhuitl"),tsc(u"macuililhuitl"),tsc(u"chicuaceilhuitl")},.abmon={tsc(u"ene"),tsc(u"feb"),tsc(u"mar"),tsc(u"abr"),tsc(u"may"),tsc(u"jun"),tsc(u"jul"),tsc(u"ago"),tsc(u"sep"),tsc(u"oct"),tsc(u"nov"),tsc(u"dic")},.mon={tsc(u"enero"),tsc(u"febrero"),tsc(u"marzo"),tsc(u"abril"),tsc(u"mayo"),tsc(u"junio"),tsc(u"julio"),tsc(u"agosto"),tsc(u"septiembre"),tsc(u"octubre"),tsc(u"noviembre"),tsc(u"diciembre")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1sSqQyY]"),.noexpr=tsc(u"^[-0nNaA]"),.yesstr=tsc(u"quema"),.nostr=tsc(u"ahmo")},.paper={.width=216,.height=279},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"52")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Mexihco"),.country_ab2=tsc(u"MX"),.country_ab3=tsc(u"MEX"),.country_num=484,.country_car=tsc(u"MEX"),.lang_name=tsc(u"Tlahco nāhuatlahtōlli"),.lang_term=tsc(u"nhn"),.lang_lib=tsc(u"nhn")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"nhn_MX"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Central Nahuatl for Mexico"),.source=tsc(U"RAP\t\t;\t\tfast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Central Nahuatl"),.territory=tsc(U"Mexico"),.revision=tsc(U"1.0"),.date=tsc(U"2012-08-19")},.monetary={.int_curr_symbol=tsc(U"MXN "),.currency_symbol=tsc(U"$"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"teo"),tsc(U"cei"),tsc(U"ome"),tsc(U"yei"),tsc(U"nau"),tsc(U"mac"),tsc(U"chi")},.day={tsc(U"teoilhuitl"),tsc(U"ceilhuitl"),tsc(U"omeilhuitl"),tsc(U"yeilhuitl"),tsc(U"nahuilhuitl"),tsc(U"macuililhuitl"),tsc(U"chicuaceilhuitl")},.abmon={tsc(U"ene"),tsc(U"feb"),tsc(U"mar"),tsc(U"abr"),tsc(U"may"),tsc(U"jun"),tsc(U"jul"),tsc(U"ago"),tsc(U"sep"),tsc(U"oct"),tsc(U"nov"),tsc(U"dic")},.mon={tsc(U"enero"),tsc(U"febrero"),tsc(U"marzo"),tsc(U"abril"),tsc(U"mayo"),tsc(U"junio"),tsc(U"julio"),tsc(U"agosto"),tsc(U"septiembre"),tsc(U"octubre"),tsc(U"noviembre"),tsc(U"diciembre")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1sSqQyY]"),.noexpr=tsc(U"^[-0nNaA]"),.yesstr=tsc(U"quema"),.nostr=tsc(U"ahmo")},.paper={.width=216,.height=279},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"52")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Mexihco"),.country_ab2=tsc(U"MX"),.country_ab3=tsc(U"MEX"),.country_num=484,.country_car=tsc(U"MEX"),.lang_name=tsc(U"Tlahco nāhuatlahtōlli"),.lang_term=tsc(U"nhn"),.lang_lib=tsc(U"nhn")},.measurement={.measurement=1}};


}
}

#include"../main.h"