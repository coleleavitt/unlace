__int64 __fastcall sub_26DD50(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // r12d
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r15
  char tinfo_property; // al
  char v10; // r13
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // [rsp+13h] [rbp-85h]
  int v15; // [rsp+14h] [rbp-84h]
  int tinfo_size; // [rsp+18h] [rbp-80h]

  v4 = 0;
  if ( a2[1] )
  {
    while ( !(unsigned __int8)compare_tinfo() )
    {
      if ( (unsigned __int64)(int)++v4 >= a2[1] )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    tinfo_size = get_tinfo_size();
    if ( !a2[1] )
      goto LABEL_31;
    v15 = -1;
    v6 = 0;
    v4 = -1;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *a2 + (v7 << 6);
        if ( tinfo_size == (unsigned int)get_tinfo_size() )
        {
          if ( ((tinfo_property = get_tinfo_property(), (tinfo_property & 0xFu) <= 0xA)
             || (tinfo_property & 0x3F) == 0x2D)
            && ((v13 = get_tinfo_property(), (v13 & 0xFu) <= 0xA) || (v13 & 0x3F) == 0x2D) )
          {
            if ( v15 == -1 )
              v15 = v6;
            v14 = 1;
          }
          else
          {
            v14 = 0;
          }
          v10 = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((v10 & 0xF) == 9) )
          {
            v11 = get_tinfo_property();
            if ( (v11 & 0xE) == 0 && (v11 & 0x30) != 0 )
            {
              v12 = get_tinfo_property();
              if ( (v12 & 0xFu) <= 0xA || (v12 & 0x3F) == 0x2D )
                return v6;
            }
            if ( (unsigned __int8)sub_326300(*a1, v8 + 56, a3) )
              return v6;
            if ( v4 == -1 )
              break;
          }
        }
        v7 = (int)++v6;
        if ( (unsigned __int64)(int)v6 >= a2[1] )
          goto LABEL_29;
      }
      if ( v14 )
        v4 = v6;
      v7 = (int)++v6;
    }
    while ( (unsigned __int64)(int)v6 < a2[1] );
LABEL_29:
    if ( v4 == -1 )
    {
      v4 = v15;
      if ( v15 == -1 )
      {
LABEL_31:
        if ( (get_tinfo_property() & 0x2F) == 0xD )
          get_tinfo_details();
        return (unsigned int)-1;
      }
    }
  }
  return v4;
}

