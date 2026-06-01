__int64 __fastcall sub_DA20(__int64 a1)
{
  unsigned int v1; // edx
  char v2; // al
  char v3; // cl
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax

  v1 = 0;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000FFFFLL) != 0x2000000009LL )
    return v1;
  v2 = *(_BYTE *)(a1 + 48);
  if ( v2 == 12 )
  {
    v3 = 1;
    v6 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_12:
    v5 = *(_QWORD *)(a1 + 32);
    goto LABEL_9;
  }
  if ( v2 > 12 )
  {
    if ( v2 != 13 )
      return v1;
    v3 = 0;
    v6 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    goto LABEL_12;
  }
  if ( v2 == 4 )
  {
    v3 = 1;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( v2 != 5 )
      return v1;
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
  }
  v1 = 0;
  if ( *(_QWORD *)(a1 + 400) >= v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = v5 + *(unsigned __int16 *)(a1 + 42);
LABEL_9:
    v7 = *(_QWORD *)(a1 + 864);
    *(_QWORD *)(v7 + 40) = 25344;
    *(_QWORD *)(v7 + 48) = 0;
    *(_QWORD *)(v7 + 56) = v5;
    *(_BYTE *)(v7 + 72) = v3;
    *(_BYTE *)(v7 + 75) = 0;
    *(_QWORD *)(v7 + 64) = v6;
    *(_WORD *)(v7 + 73) = 0;
    return 1;
  }
  return v1;
}
