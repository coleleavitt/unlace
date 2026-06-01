__int64 __fastcall sub_7E40(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int8 v8; // di
  unsigned __int16 v9; // cx

  result = a2;
  v5 = a4 >> 3;
  if ( ((a4 >> 3) & 3) != 3 )
  {
    v6 = a4 & 1;
    LOBYTE(v6) = *((_BYTE *)&qword_F2E0 + 4 * ((a4 >> 3) & 3)) + v6;
    *(_BYTE *)(a2 + 32) = v6;
    if ( (unsigned __int8)v6 > 8u || (v7 = 340, v8 = ((a4 >> 7) & 7) + 32, !_bittest64(&v7, v6)) )
      v8 = (a4 >> 7) & 7;
    v9 = a4 >> 13;
    switch ( (char)v9 )
    {
      case 0:
      case 1:
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 24) = 44;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v9;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = v8;
        return result;
      case 2:
        if ( (v5 & 2) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 47;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = v8;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v8;
        }
        return result;
      case 3:
        *(_WORD *)(a2 + 24) = 69;
        goto LABEL_6;
      case 4:
        return result;
      case 5:
        *(_WORD *)(a2 + 24) = 2;
        goto LABEL_6;
      case 6:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 43;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v8;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = 81;
        return result;
      case 7:
        *(_WORD *)(a2 + 24) = 76;
LABEL_6:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v8;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = 1;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = v8;
        break;
    }
  }
  return result;
}

