__int64 __fastcall sub_11A40(__int64 a1)
{
  char byte; // al
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  byte = get_byte();
  result = sub_10AC0(a1, *((_DWORD *)qword_1B060 + (byte & 0x1F)), 2u, 255, 0);
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 45) = 1;
  return result;
}

