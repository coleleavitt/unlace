__int64 __fastcall sub_7390(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int16 v5; // dx
  int v6; // edi
  char v7; // si
  __int16 v8; // cx

  result = a2;
  *(_WORD *)(a2 + 24) = 44;
  v5 = a4 >> 11;
  v6 = a4 >> 13;
  v7 = a4 & 1;
  v8 = (a4 >> 7) & 7;
  ++v7;
  *(_BYTE *)(result + 41) = 5;
  *(_BYTE *)(result + 32) = v7;
  *(_BYTE *)(result + 45) = 2;
  *(_BYTE *)(result + 81) = 1;
  *(_QWORD *)(result + 48) = v6 | (8 * (unsigned __int8)v5) & 0x18;
  if ( v7 == 2 )
    v8 += 32;
  *(_BYTE *)(result + 85) = 2;
  *(_WORD *)(result + 86) = v8;
  return result;
}

