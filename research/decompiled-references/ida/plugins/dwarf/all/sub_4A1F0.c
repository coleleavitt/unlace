void __fastcall sub_4A1F0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v4; // r12

  if ( a2 - a1 <= 2016 )
  {
    sub_409F0(a1, a2, a3);
  }
  else
  {
    v4 = 144 * ((__int64)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 4)) >> 1);
    sub_4A1F0(a1, a1 + v4);
    sub_4A1F0(a1 + v4, a2);
    sub_4A050(
      a1,
      a1 + v4,
      a2,
      0x8E38E38E38E38E39LL * (v4 >> 4),
      0x8E38E38E38E38E39LL * ((a2 - (a1 + v4)) >> 4),
      (unsigned __int8 (__fastcall *)(__int64, __int64))a3);
  }
}

