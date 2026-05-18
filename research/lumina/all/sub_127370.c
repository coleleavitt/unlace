void __fastcall sub_127370(__int64 *a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // rbp
  __m128i *v6; // rax
  __m128i *v7; // [rsp+8h] [rbp-20h]

  v4 = *a1;
  if ( a2 )
  {
    v6 = sub_DD6E0(*a1, a2, 0, nullptr);
    if ( !*(_BYTE *)(v4 + 103) && a1[2] )
    {
      v7 = v6;
      sub_127300((__int64)a1, (unsigned __int8 *)v6, a3, a4);
      v6 = v7;
    }
    if ( v6 )
      sub_D7720(v4, (__int64)v6);
  }
  else if ( !*(_BYTE *)(v4 + 103) && a1[2] )
  {
    sub_127300((__int64)a1, nullptr, a3, a4);
  }
}
