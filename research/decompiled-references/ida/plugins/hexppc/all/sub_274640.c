__int64 __fastcall sub_274640(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // r12d
  int v5; // eax
  int tinfo_size; // ebp
  int v7; // eax

  v2 = *a2;
  if ( !(unsigned __int8)*a1 )
    return (unsigned int)-((_BYTE)v2 != 0);
  if ( !(_BYTE)v2 )
    return 1;
  if ( (get_tinfo_property() & 0x3F) != 1 && (get_tinfo_property() & 0x3F) != 1 )
  {
    v4 = sub_32A000(a1, 2);
    v5 = sub_32A000(a2, 2);
    if ( v4 == v5 )
    {
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        return 1;
      }
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
        || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        tinfo_size = get_tinfo_size();
        v7 = get_tinfo_size();
        if ( tinfo_size >= v7 )
          return tinfo_size > v7;
      }
    }
    else if ( v4 <= v5 )
    {
      return 1;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (get_tinfo_property() & 0x3F) != 1 )
    return 1;
  return (unsigned int)-((get_tinfo_property() & 0x3F) != 1);
}

