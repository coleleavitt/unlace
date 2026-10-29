_QWORD *__fastcall sub_125260(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx

  v4 = sub_1251B0(a1, a2, a3, a4);
  if ( (get_tinfo_property() & 0xF) == 9 )
    *((_DWORD *)v4 + 1) |= 0x10u;
  return v4;
}

