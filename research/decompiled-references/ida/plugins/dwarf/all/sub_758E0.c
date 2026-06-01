unsigned __int64 __fastcall sub_758E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 tinfo_property; // [rsp+8h] [rbp-130h] BYREF
  __m128i v5[16]; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_84A60(v5);
  v2 = a1 + 56;
  if ( (unsigned __int8)sub_9B3F0(a2, v5) && (unsigned __int8)sub_62AC0(*(__m128i **)a1, (_BYTE *)(a1 + 56), v5) )
  {
    if ( (get_tinfo_property(*(_QWORD *)(a1 + 56), 2) & 0xF) == 0xC )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 56), 24);
      copy_tinfo_t(v2, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
    }
  }
  else
  {
    tinfo_property = 1;
    copy_tinfo_t(v2, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
  }
  sub_1B750((__int64)v5);
  return v6 - __readfsqword(0x28u);
}

