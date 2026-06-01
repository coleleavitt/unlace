__int64 __fastcall sub_FDD0(__int64 a1)
{
  char v1; // bp
  unsigned __int8 v2; // al
  __int64 *v3; // rdx

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  v1 = 2 * get_byte();
  v2 = v1 & 0x1C | ((unsigned __int8)get_byte() >> 6);
  v3 = qword_1B520;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 31LL) & 2) != 0 )
    v3 = qword_1B4A0;
  return sub_E930(a1, *((_DWORD *)v3 + v2));
}

