__int64 __fastcall sub_261E60(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  int flags; // eax
  __int64 v6; // rdi
  char tinfo_property; // al

  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000
    || (v3 = sub_261C30(a1, a2, nullptr, nullptr), (_BYTE)v3) )
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      tinfo_property = get_tinfo_property();
      if ( tinfo_property < 0 )
      {
        v3 = 0;
        goto LABEL_7;
      }
      if ( (tinfo_property & 0x40) != 0 )
        goto LABEL_6;
      v6 = *(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(v6 + 604) & 0x40) == 0 )
        goto LABEL_6;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(v6 + 604) & 0x40) == 0 )
        goto LABEL_6;
    }
    if ( a3 )
    {
      LOBYTE(v3) = (unsigned int)sub_3439A0(v6, a2) != 0;
      goto LABEL_7;
    }
LABEL_6:
    v3 = 1;
LABEL_7:
    clear_tinfo_t();
  }
  return v3;
}

