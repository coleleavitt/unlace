__int64 __fastcall sub_5230(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 v9; // cx

  v5 = a3 & 0x7F;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 8u;
  v6 = *(_QWORD *)(a2 + 16) + 1LL;
  if ( (a3 & 0x40) != 0 )
    v7 = v6 - (int)((v5 ^ 0x7F) + 1);
  else
    v7 = v5 + v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v7;
  v8 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v8 + 33) & 4) != 0 || (v9 = *(_WORD *)(a2 + 24), v9 != 73) && (unsigned __int16)(v9 - 75) > 5u )
  {
    *(_BYTE *)(v8 + 1) = 2;
    return 1;
  }
  else
  {
    *(_BYTE *)(v8 + 1) = 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
    return 1;
  }
}

