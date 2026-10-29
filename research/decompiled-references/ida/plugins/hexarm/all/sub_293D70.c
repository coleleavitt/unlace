__int64 __fastcall sub_293D70(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __int64 tinfo_size; // r12
  char tinfo_property; // r12
  _QWORD *v7; // r14

  if ( *(_DWORD *)(a2 + 8) == 48 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v2 + 8) == 57 )
    {
      v4 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v4 + 8) == 68 && !strcmp(*(const char **)(v4 + 24), "va_arg") )
      {
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() == tinfo_size )
        {
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
          {
            v7 = *(_QWORD **)(v2 + 32);
            if ( v7[1] != 2 )
            {
              if ( !under_debugger )
                sub_3835A0(51553);
LABEL_15:
              BUG();
            }
            if ( *(_DWORD *)(*v7 + 80LL) == 68 )
            {
              print_tinfo();
              if ( !under_debugger )
                sub_3835A0(51554);
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  return 0;
}

