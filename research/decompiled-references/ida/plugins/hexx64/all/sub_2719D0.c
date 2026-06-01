__int64 __fastcall sub_2719D0(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r12d
  unsigned int v4; // ebp
  char tinfo_property; // al
  char v6; // r13
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // [rsp+13h] [rbp-85h]
  int v11; // [rsp+14h] [rbp-84h]
  int tinfo_size; // [rsp+18h] [rbp-80h]

  v2 = 0;
  if ( a2[1] )
  {
    while ( !(unsigned __int8)compare_tinfo() )
    {
      if ( (unsigned __int64)(int)++v2 >= a2[1] )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    tinfo_size = get_tinfo_size();
    if ( !a2[1] )
      goto LABEL_31;
    v11 = -1;
    v4 = 0;
    v2 = -1;
    do
    {
      while ( 1 )
      {
        if ( tinfo_size == (unsigned int)get_tinfo_size() )
        {
          if ( ((tinfo_property = get_tinfo_property(), (tinfo_property & 0xFu) <= 0xA)
             || (tinfo_property & 0x3F) == 0x2D)
            && ((v9 = get_tinfo_property(), (v9 & 0xFu) <= 0xA) || (v9 & 0x3F) == 0x2D) )
          {
            if ( v11 == -1 )
              v11 = v4;
            v10 = 1;
          }
          else
          {
            v10 = 0;
          }
          v6 = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((v6 & 0xF) == 9) )
          {
            v7 = get_tinfo_property();
            if ( (v7 & 0xE) == 0 && (v7 & 0x30) != 0 )
            {
              v8 = get_tinfo_property();
              if ( (v8 & 0xFu) <= 0xA || (v8 & 0x3F) == 0x2D )
                return v4;
            }
            if ( (unsigned __int8)sub_32A510(*a1) )
              return v4;
            if ( v2 == -1 )
              break;
          }
        }
        if ( (unsigned __int64)(int)++v4 >= a2[1] )
          goto LABEL_29;
      }
      if ( v10 )
        v2 = v4;
      ++v4;
    }
    while ( (unsigned __int64)(int)v4 < a2[1] );
LABEL_29:
    if ( v2 == -1 )
    {
      v2 = v11;
      if ( v11 == -1 )
      {
LABEL_31:
        if ( (get_tinfo_property() & 0x2F) == 0xD )
          get_tinfo_details();
        return (unsigned int)-1;
      }
    }
  }
  return v2;
}

