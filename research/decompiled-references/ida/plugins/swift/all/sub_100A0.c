unsigned __int64 __fastcall sub_100A0(__int64 a1, int *a2, const char *a3, double a4)
{
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a3 && (get_flags_ex(a1, 4) & 0x4000) == 0 )
  {
    sub_C620((__int64 *)&v8, a2, a3);
    v6 = s1;
    if ( v9 )
      v6 = v8;
    if ( !(unsigned __int8)set_name(a1, v6, 2336) )
    {
      v7 = s1;
      if ( v9 )
        v7 = v8;
      sub_CB10((__int64)"could not set name '%s' at %a\n", v7, a4);
    }
    if ( v8 )
    {
      v9 = 0;
      qfree(v8);
    }
  }
  return v10 - __readfsqword(0x28u);
}

