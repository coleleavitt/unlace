__int64 __fastcall sub_CBC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  __int64 v3; // r12
  char byte; // al
  __int64 result; // rax
  __int64 v6; // rcx
  char v7; // si
  int v8; // edx
  __int64 v9; // rcx

  v1 = *(int *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  v3 = v2 + 40 * v1;
  *(_WORD *)(v3 + 64) |= 1u;
  byte = get_byte();
  result = sub_CAB0(a1, byte & 3);
  v6 = *(_QWORD *)(v3 + 48);
  v7 = *(_BYTE *)(v3 + 45);
  v8 = (char)v6;
  if ( v7 )
  {
    v8 = (__int16)v6;
    if ( v7 != 1 )
      v8 = *(_QWORD *)(v3 + 48);
  }
  v9 = v2 + 40 * v1;
  *(_BYTE *)(v9 + 45) = 2;
  *(_QWORD *)(v9 + 48) = v8;
  return result;
}

