unsigned __int64 __fastcall sub_4EB00(const char *a1, __int16 a2, const char *a3, double a4, double a5, __m128 a6)
{
  char *v7; // rsi
  __int64 v8; // rdx
  __m128i v10[856]; // [rsp+0h] [rbp-35A8h] BYREF
  unsigned __int64 v11; // [rsp+3588h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  find_plugin();
  find_plugin();
  sub_24AC0((__int64)v10, a2);
  if ( strstr(a3, "Apple DYLD cache") )
  {
    v7 = (char *)a1;
    sub_45B20(v10, a1, a3, a4, a5, a6);
  }
  else
  {
    v7 = (char *)a1;
    if ( strstr(a3, "Apple XNU kernelcache") )
      sub_4D830(v10, (__int64)a1, a3);
    else
      sub_457E0(v10, (__int64)a1, a3);
  }
  sub_4D7D0(v10, v7, v8);
  if ( (getinf() & 1) != 0 )
  {
    find_plugin();
    run_plugin();
  }
  sub_1CFD0(v10);
  return v11 - __readfsqword(0x28u);
}

