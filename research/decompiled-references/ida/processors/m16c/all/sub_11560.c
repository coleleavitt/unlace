__int64 __fastcall sub_11560(__int64 a1)
{
  unsigned __int8 v1; // bp
  unsigned __int8 byte; // al
  unsigned int v3; // eax
  __int64 v4; // r12
  int v5; // ebx
  unsigned int v6; // ebp
  char v7; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  v1 = 2 * get_byte();
  byte = get_byte();
  v3 = sub_10D40(a1, *((unsigned int *)qword_1AFE0 + (v1 & 0x18u | (byte >> 5))), 255, 1);
  v4 = *(_QWORD *)(a1 + 4352);
  v5 = *(_DWORD *)(a1 + 4360);
  v6 = v3;
  v7 = get_byte() & 3;
  if ( v7 == 3 )
    return 0;
  *(_BYTE *)(v4 + 40LL * v5 + 45) = byte_1AEE4[v7 & 3];
  return v6;
}

