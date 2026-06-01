__int64 __fastcall sub_C000(__int64 a1, __int64 a2, int a3)
{
  char v3; // al
  int v4; // edx
  __int64 v5; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 4;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 >> 2) & 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
  v3 = a3;
  v4 = (a3 >> 4) & 0x7E;
  v5 = v4 | v3 & 1u;
  if ( (v4 & 0x40) != 0 )
  {
    v5 = ((unsigned int)v5 ^ 0x7F) + 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v5;
  return 1;
}

