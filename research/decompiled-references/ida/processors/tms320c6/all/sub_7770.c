__int64 __fastcall sub_7770(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  char v5; // di
  unsigned __int16 v6; // dx
  __int64 v7; // rdx
  __int16 v10; // cx
  __int16 v11; // dx
  __int16 v12; // si
  __int64 v13; // rsi
  bool v14; // zf

  result = a2;
  *(_WORD *)(a2 + 24) = 2;
  v5 = (a4 & 1) + 1;
  v6 = a4 >> 13;
  *(_BYTE *)(a2 + 32) = v5;
  if ( (a4 & 0x800) != 0 )
  {
    v7 = (int)(*(_DWORD *)&v6 | 0xFFFFFFF8);
  }
  else
  {
    v13 = v6;
    v14 = v6 == 0;
    v7 = 8;
    if ( !v14 )
      v7 = v13;
  }
  *(_QWORD *)(result + 48) = v7;
  v10 = a4 & 0x1000;
  *(_BYTE *)(result + 41) = 5;
  v11 = (a4 >> 7) & 7;
  *(_BYTE *)(result + 45) = 2;
  v12 = (a4 >> 4) & 7;
  *(_BYTE *)(result + 81) = 1;
  *(_BYTE *)(result + 85) = 2;
  *(_WORD *)(result + 86) = v11;
  if ( v5 == 2 )
  {
    if ( !v10 )
      *(_WORD *)(result + 86) = v11 + 32;
    *(_BYTE *)(result + 125) = 2;
    *(_BYTE *)(result + 121) = 1;
    *(_WORD *)(result + 126) = v12 + 32;
  }
  else
  {
    if ( v10 )
      *(_WORD *)(result + 86) = v11 + 32;
    *(_BYTE *)(result + 121) = 1;
    *(_BYTE *)(result + 125) = 2;
    *(_WORD *)(result + 126) = v12;
  }
  return result;
}

