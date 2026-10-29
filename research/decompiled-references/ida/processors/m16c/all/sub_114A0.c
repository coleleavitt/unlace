__int64 __fastcall sub_114A0(__int64 a1)
{
  char byte; // al
  unsigned int v2; // eax
  __int64 v3; // r12
  int v4; // ebx
  unsigned int v5; // ebp
  char v6; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  byte = get_byte();
  v2 = sub_10D40(a1, *((unsigned int *)qword_1B060 + (byte & 0x1F)), 255, 0);
  v3 = *(_QWORD *)(a1 + 4352);
  v4 = *(_DWORD *)(a1 + 4360);
  v5 = v2;
  v6 = get_byte() & 3;
  if ( v6 == 3 )
    return 0;
  *(_BYTE *)(v3 + 40LL * v4 + 45) = byte_1AEE7[v6 & 3];
  return v5;
}

