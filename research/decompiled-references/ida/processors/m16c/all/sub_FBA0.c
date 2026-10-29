__int64 __fastcall sub_FBA0(__int64 a1)
{
  char v1; // bl
  unsigned __int8 v2; // bl
  __int64 *v3; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  v1 = (unsigned __int8)get_byte() >> 2;
  v2 = ((unsigned __int16)get_byte() >> 4) & 3 | v1 & 0x1C;
  v3 = qword_1B520;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 31LL) & 2) != 0 )
    v3 = qword_1B4A0;
  return sub_E930(a1, *((_DWORD *)v3 + v2));
}

