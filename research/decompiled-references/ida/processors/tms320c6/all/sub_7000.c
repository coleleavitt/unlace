unsigned __int64 __fastcall sub_7000(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v6; // r8
  __int16 v7; // cx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int16 v10; // ax
  __int64 v11; // rdx

  *(_BYTE *)(a2 + 32) = (a4 & 1) + 3;
  *(_WORD *)(a2 + 24) = 94;
  if ( (~a4 & 0xC000) != 0 )
  {
    v6 = a4 >> 13;
    if ( (a4 & 0x20) != 0 )
    {
      v7 = (a4 >> 5) & 0xFE;
      goto LABEL_4;
    }
    v10 = (a4 >> 5) & 0xFE;
LABEL_7:
    v11 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(a2 + 45) = 9;
    *(_BYTE *)(a2 + 41) = 7;
    *(_BYTE *)(a2 + 81) = 5;
    result = (v11 & 0xFFFFFFFFFFFFFFE0LL) + v10;
    *(_BYTE *)(a2 + 85) = 2;
    *(_QWORD *)(a2 + 56) = result;
    *(_QWORD *)(a2 + 88) = v6;
    return result;
  }
  if ( (a4 & 0x20) == 0 )
  {
    v6 = 5;
    v10 = (a4 >> 5) & 0x1FE;
    goto LABEL_7;
  }
  v6 = 5;
  v7 = (a4 >> 5) & 0x1FE;
LABEL_4:
  v8 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a2 + 45) = 9;
  *(_BYTE *)(a2 + 41) = 7;
  *(_BYTE *)(a2 + 81) = 5;
  *(_BYTE *)(a2 + 85) = 2;
  *(_QWORD *)(a2 + 56) = v7 + (v8 & 0xFFFFFFFFFFFFFFE0LL);
  *(_QWORD *)(a2 + 88) = v6;
  result = ((a3 >> 13) & 4 | (2 * (_BYTE)a4) & 2 | (a4 >> 4) & 1) - 4;
  if ( (unsigned int)result <= 3 )
  {
    result = *((unsigned __int8 *)qword_FDA0 + result);
    *(_BYTE *)(a2 + 28) = result;
  }
  return result;
}

