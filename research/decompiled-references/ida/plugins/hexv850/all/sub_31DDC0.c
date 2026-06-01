void __fastcall __noreturn sub_31DDC0(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4C2A74++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1A9E90(a2);
    sub_68620((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo();
      sub_68620((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_31DD10(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_37CFE0(a1);
}

