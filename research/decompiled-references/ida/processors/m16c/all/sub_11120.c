__int64 __fastcall sub_11120(__int64 a1)
{
  unsigned __int8 v1; // bp
  unsigned __int8 byte; // al
  __int64 result; // rax

  v1 = 2 * get_byte();
  byte = get_byte();
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  result = sub_10D40(a1, *((unsigned int *)qword_1AFE0 + (v1 & 0x18u | (byte >> 5))), 255, 255);
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 45) = 3;
  return result;
}

