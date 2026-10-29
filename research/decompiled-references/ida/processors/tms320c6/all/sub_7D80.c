__int64 __fastcall sub_7D80(__int64 a1, __int64 a2, __int16 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  char v5; // di
  __int16 v6; // r8
  __int16 v8; // si
  __int16 v9; // cx
  __int16 v10; // dx
  __int16 v11; // r8

  result = a2;
  v5 = (a4 & 1) + 1;
  v6 = a4 >> 13;
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 32) = v5;
  *(_BYTE *)(a2 + 45) = 2;
  *(_WORD *)(a2 + 46) = a4 >> 13;
  *(_WORD *)(a2 + 24) = *((_WORD *)qword_F330 + (((a3 & 0x4000) != 0) | (unsigned __int8)((2 * (a4 >> 11)) & 2)));
  v8 = (a4 >> 4) & 7;
  v9 = a4 & 0x1000;
  v10 = (a4 >> 7) & 7;
  if ( v5 == 2 )
  {
    v11 = v6 + 32;
    *(_BYTE *)(result + 81) = 1;
    if ( !v9 )
      v10 += 32;
    *(_WORD *)(result + 46) = v11;
    *(_BYTE *)(result + 85) = 2;
    *(_WORD *)(result + 86) = v10;
    *(_BYTE *)(result + 125) = 2;
    *(_BYTE *)(result + 121) = 1;
    *(_WORD *)(result + 126) = v8 + 32;
  }
  else
  {
    *(_BYTE *)(result + 81) = 1;
    if ( v9 )
      v10 += 32;
    *(_BYTE *)(result + 85) = 2;
    *(_BYTE *)(result + 121) = 1;
    *(_WORD *)(result + 86) = v10;
    *(_BYTE *)(result + 125) = 2;
    *(_WORD *)(result + 126) = v8;
  }
  return result;
}

