__int64 __fastcall sub_2CC0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-48h]
  __int128 v10; // [rsp+8h] [rbp-40h]

  v6 = 0;
  v7 = 0x800000;
  while ( !(unsigned __int8)callui(27, a2, a3, a4, a5, a6, v9, v10, *((_QWORD *)&v10 + 1)) )
  {
    a2 = (const char *)v7;
    v9 = 0;
    v10 = 0;
    if ( get_ea_name() > 0 )
    {
      a2 = "%s EQU 0%ah\n";
      sub_2760();
      ++v6;
      if ( (_BYTE)v7 )
        goto LABEL_5;
LABEL_8:
      a2 = nullptr;
      show_auto();
      ++v7;
    }
    else
    {
      if ( !(_BYTE)v7 )
        goto LABEL_8;
LABEL_5:
      if ( ++v7 == 8454144 )
        return v6;
    }
  }
  return v6;
}

