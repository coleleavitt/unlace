bool __fastcall sub_12B70(__int64 a1)
{
  bool result; // al
  char v3; // si
  unsigned __int64 v4; // rcx
  char v5; // di
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi

  result = *(_WORD *)(a1 + 40) != 122 && *(_WORD *)(a1 + 40) != 21 && *(_WORD *)(a1 + 40) != 18;
  if ( result )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 12 )
    return result;
  v3 = *(_BYTE *)(a1 + 129);
  if ( v3 > 8 )
  {
    if ( v3 != 9 )
      return result;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    v5 = 1;
  }
  else
  {
    if ( v3 <= 6 )
    {
      if ( v3 != 6 )
        return result;
      v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
      v5 = 1;
      goto LABEL_10;
    }
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    v5 = 0;
    if ( v3 == 7 )
    {
LABEL_10:
      v6 = *(_QWORD *)(a1 + 32);
LABEL_11:
      v7 = *(_QWORD *)(a1 + 864);
      *(_QWORD *)(v7 + 40) = 25344;
      *(_QWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 56) = v6;
      *(_QWORD *)(v7 + 64) = v4;
      *(_BYTE *)(v7 + 72) = v5;
      *(_WORD *)(v7 + 73) = 0;
      *(_BYTE *)(v7 + 75) = 0;
      return 1;
    }
  }
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 == -1 )
    v8 = *(_QWORD *)(a1 + 424);
  if ( v8 >= v4 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v4 = v6 + *(unsigned __int16 *)(a1 + 42);
    goto LABEL_11;
  }
  return result;
}

