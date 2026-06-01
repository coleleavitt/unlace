__int64 __fastcall sub_73F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v6; // di
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 result; // rax

  v6 = a4 & 1;
  v7 = (a4 >> 11) & 1;
  v8 = a4 >> 13;
  result = (a4 >> 7) & 7;
  if ( v6 )
  {
    result = (unsigned int)(result + 32);
    v7 += 32;
  }
  *(_BYTE *)(a2 + 32) = v6 + 1;
  *(_WORD *)(a2 + 24) = 12;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 2;
  *(_QWORD *)(a2 + 48) = v8;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 86) = result;
  *(_BYTE *)(a2 + 121) = 1;
  *(_BYTE *)(a2 + 125) = 2;
  *(_WORD *)(a2 + 126) = v7;
  return result;
}

