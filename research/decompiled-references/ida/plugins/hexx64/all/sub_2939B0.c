__int64 __fastcall sub_2939B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 tinfo_size; // r12
  char tinfo_property; // r12
  _QWORD *v8; // r14

  if ( *(_DWORD *)(a2 + 8) == 48 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v3 + 8) == 57 )
    {
      v5 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v5 + 8) == 68 && !strcmp(*(const char **)(v5 + 24), "va_arg") )
      {
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() == tinfo_size )
        {
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
          {
            v8 = *(_QWORD **)(v3 + 32);
            if ( v8[1] != 2 )
            {
              if ( !under_debugger )
                sub_383060(0xC961u, a3);
LABEL_15:
              BUG();
            }
            if ( *(_DWORD *)(*v8 + 80LL) == 68 )
            {
              print_tinfo();
              if ( !under_debugger )
                sub_383060(0xC962u, 0.0);
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  return 0;
}

