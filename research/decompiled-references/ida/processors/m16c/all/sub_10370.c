__int64 __fastcall sub_10370(__int64 a1)
{
  char v1; // bl
  unsigned __int16 byte; // ax
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  v1 = (unsigned __int8)get_byte() >> 2;
  byte = get_byte();
  result = sub_E930(a1, *((_DWORD *)qword_1B420 + ((byte >> 4) & 3 | v1 & 0x1Cu)));
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 45) = 0;
  return result;
}

