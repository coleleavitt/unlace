__int64 __fastcall sub_EFB0(__int64 a1, __int64 a2, char a3, unsigned __int16 a4, unsigned __int16 a5)
{
  __int64 v7; // rdx
  __int64 **v8; // rdi
  __int16 v9; // ax
  __int64 result; // rax

  if ( a3 == 23 )
  {
    *(_WORD *)(a2 + 24) = 2;
    v7 = *(_QWORD *)(a1 + 504);
    if ( !v7 )
      goto LABEL_5;
  }
  else
  {
    *(_WORD *)(a2 + 24) = 1;
    v7 = *(_QWORD *)(a1 + 504);
    if ( !v7 )
      goto LABEL_5;
  }
  *(_BYTE *)(v7 + 24) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
  v8 = *(__int64 ***)(a1 + 504);
  if ( v8 )
    sub_BAE0(v8, 32, 32, 12);
LABEL_5:
  v9 = *(_WORD *)(a2 + 34);
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 81) = 5;
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 46) = (a4 >> 7) & 0x1F;
  *(_BYTE *)(a2 + 45) = (v9 & 4) == 0 ? 2 : 7;
  result = *(unsigned __int16 *)(a2 + 26);
  *(_QWORD *)(a2 + 88) = (a4 >> 12) + 16 * a5;
  return result;
}

