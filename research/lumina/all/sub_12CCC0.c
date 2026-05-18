void __fastcall sub_12CCC0(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r12d
  __m128i *v6; // rax
  __m128i *v7; // [rsp+8h] [rbp-20h]

  v4 = *a1;
  if ( a2 )
  {
    v5 = a3;
    v6 = sub_DD6E0(*a1, a2, 0, nullptr);
    if ( !*(_BYTE *)(v4 + 103) )
    {
      v7 = v6;
      sub_1253C0((__int64)a1, (__int64)v6, v5, 16, a4);
      v6 = v7;
    }
    if ( v6 )
      sub_D7720(v4, (__int64)v6);
  }
  else if ( !*(_BYTE *)(v4 + 103) )
  {
    sub_1253C0((__int64)a1, 0, a3, 16, a4);
  }
}
