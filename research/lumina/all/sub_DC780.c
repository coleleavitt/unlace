void __fastcall sub_DC780(__int64 *a1, __int64 **a2, __int64 *a3)
{
  const char *v3; // rax
  __int64 *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rsi

  v3 = (const char *)*a3;
  if ( *a3 )
  {
    v6 = *a2;
    v7 = *a1;
    if ( v6 )
    {
      sub_C9250(*a1, v6);
      v3 = (const char *)*a3;
    }
    v8 = (__int64)v3;
    *a2 = sub_DC720(v7, v3);
    sub_C91C0(*a3, v8);
    *a3 = 0;
  }
}
