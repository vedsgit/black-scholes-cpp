﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("bg_BG"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Bulgarian locale for Bulgaria"),.source=tsc("Linux Society Bulgaria\t\t;\t\tfast_io"),.address=tsc("develop@linux.zonebg.com\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Delyan Toshev\t\t;\t\tfast_io"),.email=tsc("delyant@yahoo.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Bulgarian"),.territory=tsc("Bulgaria"),.revision=tsc("2.0.1"),.date=tsc("2002-09-10")},.monetary={.int_curr_symbol=tsc("BGN "),.currency_symbol=tsc("лв."),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc(""),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("нд"),tsc("пн"),tsc("вт"),tsc("ср"),tsc("чт"),tsc("пт"),tsc("сб")},.day={tsc("неделя"),tsc("понеделник"),tsc("вторник"),tsc("сряда"),tsc("четвъртък"),tsc("петък"),tsc("събота")},.abmon={tsc("яну"),tsc("фев"),tsc("мар"),tsc("апр"),tsc("май"),tsc("юни"),tsc("юли"),tsc("авг"),tsc("сеп"),tsc("окт"),tsc("ное"),tsc("дек")},.mon={tsc("януари"),tsc("февруари"),tsc("март"),tsc("април"),tsc("май"),tsc("юни"),tsc("юли"),tsc("август"),tsc("септември"),tsc("октомври"),tsc("ноември"),tsc("декември")},.d_t_fmt=tsc("%x (%a) %X"),.d_fmt=tsc("%e.%m.%Y"),.t_fmt=tsc("%k:%M:%S"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%x (%a) %X %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYdDoOДд]"),.noexpr=tsc("^[-0nNkKНн]"),.yesstr=tsc("да"),.nostr=tsc("не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("(+%c %a) %l"),.tel_dom_fmt=tsc("(0%a) %l"),.int_select=tsc("00"),.int_prefix=tsc("359")},.name={.name_fmt=tsc("%s%t%g%t%m%t%f"),.name_miss=tsc("г-жица"),.name_mr=tsc("г-дин"),.name_mrs=tsc("г-жа"),.name_ms=tsc("г-жа")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%sN%h, %e, %r%N%z %T%N%c%N"),.country_name=tsc("България"),.country_post=tsc("BG"),.country_ab2=tsc("BG"),.country_ab3=tsc("BGR"),.country_num=100,.country_car=tsc("BG"),.country_isbn=tsc("954"),.lang_name=tsc("български"),.lang_ab=tsc("bg"),.lang_term=tsc("bul"),.lang_lib=tsc("bul")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"bg_BG"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Bulgarian locale for Bulgaria"),.source=tsc(L"Linux Society Bulgaria\t\t;\t\tfast_io"),.address=tsc(L"develop@linux.zonebg.com\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Delyan Toshev\t\t;\t\tfast_io"),.email=tsc(L"delyant@yahoo.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Bulgarian"),.territory=tsc(L"Bulgaria"),.revision=tsc(L"2.0.1"),.date=tsc(L"2002-09-10")},.monetary={.int_curr_symbol=tsc(L"BGN "),.currency_symbol=tsc(L"лв."),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L""),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"нд"),tsc(L"пн"),tsc(L"вт"),tsc(L"ср"),tsc(L"чт"),tsc(L"пт"),tsc(L"сб")},.day={tsc(L"неделя"),tsc(L"понеделник"),tsc(L"вторник"),tsc(L"сряда"),tsc(L"четвъртък"),tsc(L"петък"),tsc(L"събота")},.abmon={tsc(L"яну"),tsc(L"фев"),tsc(L"мар"),tsc(L"апр"),tsc(L"май"),tsc(L"юни"),tsc(L"юли"),tsc(L"авг"),tsc(L"сеп"),tsc(L"окт"),tsc(L"ное"),tsc(L"дек")},.mon={tsc(L"януари"),tsc(L"февруари"),tsc(L"март"),tsc(L"април"),tsc(L"май"),tsc(L"юни"),tsc(L"юли"),tsc(L"август"),tsc(L"септември"),tsc(L"октомври"),tsc(L"ноември"),tsc(L"декември")},.d_t_fmt=tsc(L"%x (%a) %X"),.d_fmt=tsc(L"%e.%m.%Y"),.t_fmt=tsc(L"%k:%M:%S"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%x (%a) %X %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYdDoOДд]"),.noexpr=tsc(L"^[-0nNkKНн]"),.yesstr=tsc(L"да"),.nostr=tsc(L"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"(+%c %a) %l"),.tel_dom_fmt=tsc(L"(0%a) %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"359")},.name={.name_fmt=tsc(L"%s%t%g%t%m%t%f"),.name_miss=tsc(L"г-жица"),.name_mr=tsc(L"г-дин"),.name_mrs=tsc(L"г-жа"),.name_ms=tsc(L"г-жа")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%sN%h, %e, %r%N%z %T%N%c%N"),.country_name=tsc(L"България"),.country_post=tsc(L"BG"),.country_ab2=tsc(L"BG"),.country_ab3=tsc(L"BGR"),.country_num=100,.country_car=tsc(L"BG"),.country_isbn=tsc(L"954"),.lang_name=tsc(L"български"),.lang_ab=tsc(L"bg"),.lang_term=tsc(L"bul"),.lang_lib=tsc(L"bul")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"bg_BG"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Bulgarian locale for Bulgaria"),.source=tsc(u8"Linux Society Bulgaria\t\t;\t\tfast_io"),.address=tsc(u8"develop@linux.zonebg.com\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Delyan Toshev\t\t;\t\tfast_io"),.email=tsc(u8"delyant@yahoo.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Bulgarian"),.territory=tsc(u8"Bulgaria"),.revision=tsc(u8"2.0.1"),.date=tsc(u8"2002-09-10")},.monetary={.int_curr_symbol=tsc(u8"BGN "),.currency_symbol=tsc(u8"лв."),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8""),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"нд"),tsc(u8"пн"),tsc(u8"вт"),tsc(u8"ср"),tsc(u8"чт"),tsc(u8"пт"),tsc(u8"сб")},.day={tsc(u8"неделя"),tsc(u8"понеделник"),tsc(u8"вторник"),tsc(u8"сряда"),tsc(u8"четвъртък"),tsc(u8"петък"),tsc(u8"събота")},.abmon={tsc(u8"яну"),tsc(u8"фев"),tsc(u8"мар"),tsc(u8"апр"),tsc(u8"май"),tsc(u8"юни"),tsc(u8"юли"),tsc(u8"авг"),tsc(u8"сеп"),tsc(u8"окт"),tsc(u8"ное"),tsc(u8"дек")},.mon={tsc(u8"януари"),tsc(u8"февруари"),tsc(u8"март"),tsc(u8"април"),tsc(u8"май"),tsc(u8"юни"),tsc(u8"юли"),tsc(u8"август"),tsc(u8"септември"),tsc(u8"октомври"),tsc(u8"ноември"),tsc(u8"декември")},.d_t_fmt=tsc(u8"%x (%a) %X"),.d_fmt=tsc(u8"%e.%m.%Y"),.t_fmt=tsc(u8"%k:%M:%S"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%x (%a) %X %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYdDoOДд]"),.noexpr=tsc(u8"^[-0nNkKНн]"),.yesstr=tsc(u8"да"),.nostr=tsc(u8"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"(+%c %a) %l"),.tel_dom_fmt=tsc(u8"(0%a) %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"359")},.name={.name_fmt=tsc(u8"%s%t%g%t%m%t%f"),.name_miss=tsc(u8"г-жица"),.name_mr=tsc(u8"г-дин"),.name_mrs=tsc(u8"г-жа"),.name_ms=tsc(u8"г-жа")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%sN%h, %e, %r%N%z %T%N%c%N"),.country_name=tsc(u8"България"),.country_post=tsc(u8"BG"),.country_ab2=tsc(u8"BG"),.country_ab3=tsc(u8"BGR"),.country_num=100,.country_car=tsc(u8"BG"),.country_isbn=tsc(u8"954"),.lang_name=tsc(u8"български"),.lang_ab=tsc(u8"bg"),.lang_term=tsc(u8"bul"),.lang_lib=tsc(u8"bul")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"bg_BG"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Bulgarian locale for Bulgaria"),.source=tsc(u"Linux Society Bulgaria\t\t;\t\tfast_io"),.address=tsc(u"develop@linux.zonebg.com\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Delyan Toshev\t\t;\t\tfast_io"),.email=tsc(u"delyant@yahoo.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Bulgarian"),.territory=tsc(u"Bulgaria"),.revision=tsc(u"2.0.1"),.date=tsc(u"2002-09-10")},.monetary={.int_curr_symbol=tsc(u"BGN "),.currency_symbol=tsc(u"лв."),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u""),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"нд"),tsc(u"пн"),tsc(u"вт"),tsc(u"ср"),tsc(u"чт"),tsc(u"пт"),tsc(u"сб")},.day={tsc(u"неделя"),tsc(u"понеделник"),tsc(u"вторник"),tsc(u"сряда"),tsc(u"четвъртък"),tsc(u"петък"),tsc(u"събота")},.abmon={tsc(u"яну"),tsc(u"фев"),tsc(u"мар"),tsc(u"апр"),tsc(u"май"),tsc(u"юни"),tsc(u"юли"),tsc(u"авг"),tsc(u"сеп"),tsc(u"окт"),tsc(u"ное"),tsc(u"дек")},.mon={tsc(u"януари"),tsc(u"февруари"),tsc(u"март"),tsc(u"април"),tsc(u"май"),tsc(u"юни"),tsc(u"юли"),tsc(u"август"),tsc(u"септември"),tsc(u"октомври"),tsc(u"ноември"),tsc(u"декември")},.d_t_fmt=tsc(u"%x (%a) %X"),.d_fmt=tsc(u"%e.%m.%Y"),.t_fmt=tsc(u"%k:%M:%S"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%x (%a) %X %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYdDoOДд]"),.noexpr=tsc(u"^[-0nNkKНн]"),.yesstr=tsc(u"да"),.nostr=tsc(u"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"(+%c %a) %l"),.tel_dom_fmt=tsc(u"(0%a) %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"359")},.name={.name_fmt=tsc(u"%s%t%g%t%m%t%f"),.name_miss=tsc(u"г-жица"),.name_mr=tsc(u"г-дин"),.name_mrs=tsc(u"г-жа"),.name_ms=tsc(u"г-жа")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%sN%h, %e, %r%N%z %T%N%c%N"),.country_name=tsc(u"България"),.country_post=tsc(u"BG"),.country_ab2=tsc(u"BG"),.country_ab3=tsc(u"BGR"),.country_num=100,.country_car=tsc(u"BG"),.country_isbn=tsc(u"954"),.lang_name=tsc(u"български"),.lang_ab=tsc(u"bg"),.lang_term=tsc(u"bul"),.lang_lib=tsc(u"bul")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"bg_BG"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Bulgarian locale for Bulgaria"),.source=tsc(U"Linux Society Bulgaria\t\t;\t\tfast_io"),.address=tsc(U"develop@linux.zonebg.com\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Delyan Toshev\t\t;\t\tfast_io"),.email=tsc(U"delyant@yahoo.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Bulgarian"),.territory=tsc(U"Bulgaria"),.revision=tsc(U"2.0.1"),.date=tsc(U"2002-09-10")},.monetary={.int_curr_symbol=tsc(U"BGN "),.currency_symbol=tsc(U"лв."),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U""),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"нд"),tsc(U"пн"),tsc(U"вт"),tsc(U"ср"),tsc(U"чт"),tsc(U"пт"),tsc(U"сб")},.day={tsc(U"неделя"),tsc(U"понеделник"),tsc(U"вторник"),tsc(U"сряда"),tsc(U"четвъртък"),tsc(U"петък"),tsc(U"събота")},.abmon={tsc(U"яну"),tsc(U"фев"),tsc(U"мар"),tsc(U"апр"),tsc(U"май"),tsc(U"юни"),tsc(U"юли"),tsc(U"авг"),tsc(U"сеп"),tsc(U"окт"),tsc(U"ное"),tsc(U"дек")},.mon={tsc(U"януари"),tsc(U"февруари"),tsc(U"март"),tsc(U"април"),tsc(U"май"),tsc(U"юни"),tsc(U"юли"),tsc(U"август"),tsc(U"септември"),tsc(U"октомври"),tsc(U"ноември"),tsc(U"декември")},.d_t_fmt=tsc(U"%x (%a) %X"),.d_fmt=tsc(U"%e.%m.%Y"),.t_fmt=tsc(U"%k:%M:%S"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%x (%a) %X %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYdDoOДд]"),.noexpr=tsc(U"^[-0nNkKНн]"),.yesstr=tsc(U"да"),.nostr=tsc(U"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"(+%c %a) %l"),.tel_dom_fmt=tsc(U"(0%a) %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"359")},.name={.name_fmt=tsc(U"%s%t%g%t%m%t%f"),.name_miss=tsc(U"г-жица"),.name_mr=tsc(U"г-дин"),.name_mrs=tsc(U"г-жа"),.name_ms=tsc(U"г-жа")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%sN%h, %e, %r%N%z %T%N%c%N"),.country_name=tsc(U"България"),.country_post=tsc(U"BG"),.country_ab2=tsc(U"BG"),.country_ab3=tsc(U"BGR"),.country_num=100,.country_car=tsc(U"BG"),.country_isbn=tsc(U"954"),.lang_name=tsc(U"български"),.lang_ab=tsc(U"bg"),.lang_term=tsc(U"bul"),.lang_lib=tsc(U"bul")},.measurement={.measurement=1}};


}
}

#include"../main.h"