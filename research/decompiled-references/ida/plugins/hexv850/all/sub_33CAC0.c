__int64 __fastcall sub_33CAC0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 not_tail; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned int tinfo_property; // ebx
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  not_tail = a2;
  v12[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 1416) & 0x20) != 0 )
    sub_33C350(a1);
  v5 = a2 + a3;
  if ( a2 >= a2 + a3 )
  {
    return 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 1168);
    if ( v6 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1160) + 16 * v8);
        if ( not_tail < v9[1] && *v9 < v5 )
          return 1;
        v8 = ++v7;
        if ( v7 >= v6 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( (get_flags_ex() & 0x600) == 0x200 && (get_flags_ex() & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      v12[0] = 0;
      tinfo_property = sub_37B020(a1, not_tail, v12, 0);
      if ( (_BYTE)tinfo_property )
      {
        tinfo_property = get_tinfo_property();
        LOBYTE(tinfo_property) = (unsigned __int8)tinfo_property >> 7;
      }
      clear_tinfo_t();
    }
  }
  return tinfo_property;
}

