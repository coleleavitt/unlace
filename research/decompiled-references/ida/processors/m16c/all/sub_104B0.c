__int64 __fastcall sub_104B0(__int64 a1)
{
  unsigned __int8 v1; // r12
  __int64 v2; // rbp
  char v3; // r12
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  v1 = 2 * get_byte();
  v2 = v1 & 0x1Cu | ((unsigned __int8)get_byte() >> 6);
  v3 = get_byte() & 1;
  result = sub_E930(a1, *((_DWORD *)qword_1B320 + v2));
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 45) = v3;
  return result;
}

