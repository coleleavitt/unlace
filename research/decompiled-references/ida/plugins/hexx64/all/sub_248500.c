__int64 __fastcall sub_248500(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, double a5)
{
  char tinfo_property; // al
  char v8; // r14
  __int64 tinfo_size; // r14
  unsigned int v10; // ebx

  tinfo_property = get_tinfo_property();
  if ( tinfo_property
    && ((tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0)
    && (get_tinfo_property(), v8 = get_tinfo_property(), clear_tinfo_t(), (v8 & 0x3F) != 0x30)
    && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size())
    && (v10 = sub_246B40(*(_QWORD *)(a3 + 24), a1, a4, a5), (_BYTE)v10) )
  {
    sub_255850(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
    sub_2441C0(a2, *(_QWORD *)(a1 + 112), 0, a5);
    sub_2441C0(a3, *(_QWORD *)(a1 + 112), 0, a5);
  }
  else
  {
    v10 = 0;
  }
  clear_tinfo_t();
  return v10;
}

