_QWORD *__fastcall sub_1206A0(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *v2; // rbx

  v2 = sub_1205F0(a1, a2);
  if ( (get_tinfo_property() & 0xF) == 9 )
    *((_DWORD *)v2 + 1) |= 0x10u;
  return v2;
}

