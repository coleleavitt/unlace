void __fastcall sub_4B7A0(char *a1, __int64 a2)
{
  __int64 v2; // r12

  if ( a2 - (__int64)a1 <= 2016 )
  {
    sub_2A000((__int64)a1, a2);
  }
  else
  {
    v2 = 144 * ((__int64)(0x8E38E38E38E38E39LL * ((a2 - (__int64)a1) >> 4)) >> 1);
    sub_4B7A0(a1, &a1[v2]);
    sub_4B7A0(&a1[v2], a2);
    sub_4B630(
      a1,
      (__int64 *)&a1[v2],
      a2,
      0x8E38E38E38E38E39LL * (v2 >> 4),
      0x8E38E38E38E38E39LL * ((a2 - (__int64)&a1[v2]) >> 4));
  }
}

