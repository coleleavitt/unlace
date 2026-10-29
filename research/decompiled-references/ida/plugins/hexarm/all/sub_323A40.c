void __fastcall __noreturn sub_323A40(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4EB8B4++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1AE5D0(a2);
    sub_6CAE0((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo();
      sub_6CAE0((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_323990(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_3835A0(a1);
}

