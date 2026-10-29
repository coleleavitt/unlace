__int64 __fastcall sub_244880(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char tinfo_property; // al
  char v7; // r14
  __int64 tinfo_size; // r14
  unsigned int v9; // ebx

  tinfo_property = get_tinfo_property();
  if ( tinfo_property
    && ((tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0)
    && (get_tinfo_property(), v7 = get_tinfo_property(), clear_tinfo_t(), (v7 & 0x3F) != 0x30)
    && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size())
    && (v9 = sub_242EC0(*(_QWORD *)(a3 + 24), a1, a4), (_BYTE)v9) )
  {
    sub_251BD0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
    sub_240540(a2, *(_QWORD *)(a1 + 112), 0);
    sub_240540(a3, *(_QWORD *)(a1 + 112), 0);
  }
  else
  {
    v9 = 0;
  }
  clear_tinfo_t();
  return v9;
}

