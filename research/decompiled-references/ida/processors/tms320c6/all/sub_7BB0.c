__int64 __fastcall sub_7BB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int16 v5; // r8
  __int16 v6; // si
  __int16 v7; // di
  unsigned __int64 v8; // rdx
  __int16 v9; // cx
  __int64 v10; // r8

  result = a2;
  v5 = a4 >> 13;
  *(_BYTE *)(a2 + 32) = (a4 & 1) + 3;
  v6 = (a4 >> 7) & 7;
  if ( (~(_BYTE)a4 & 0x60) != 0 )
  {
    if ( (a4 & 1) == 1 )
      LOBYTE(v6) = v6 + 32;
    v7 = *((_WORD *)&dword_F2EC + (((unsigned __int8)a4 >> 5) & 3));
    LOBYTE(v8) = v5 | (8 * (a4 >> 11)) & 0x18;
    if ( v7 == 18 )
    {
      v10 = 31;
      v8 = (char)v8;
      v9 = (32 * (_BYTE)a4) & 0x20;
    }
    else
    {
      v8 = (char)v8;
      v9 = (unsigned __int8)v6;
      v10 = (char)v8;
    }
    *(_WORD *)(result + 24) = v7;
    *(_BYTE *)(result + 81) = 5;
    *(_BYTE *)(result + 85) = 2;
    *(_QWORD *)(result + 88) = v10;
    *(_BYTE *)(result + 121) = 1;
    *(_BYTE *)(result + 125) = 2;
    *(_WORD *)(result + 126) = v9;
  }
  else
  {
    if ( (a4 & 1) == 1 )
    {
      LOBYTE(v6) = v6 + 32;
      v5 = (char)(v5 + 32);
    }
    *(_BYTE *)(result + 121) = 1;
    *(_BYTE *)(result + 125) = 2;
    *(_WORD *)(result + 126) = v5;
    *(_WORD *)(result + 24) = ((a4 & 0x1000) != 0) + 17;
    *(_BYTE *)(result + 81) = 5;
    v8 = (-(__int64)((a4 & 0x800) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 24;
    *(_BYTE *)(result + 85) = 2;
    *(_QWORD *)(result + 88) = v8;
  }
  *(_BYTE *)(result + 29) |= 2u;
  *(_BYTE *)(result + 41) = 5;
  *(_BYTE *)(result + 45) = 2;
  *(_QWORD *)(result + 48) = v8;
  *(_BYTE *)(result + 73) = v6;
  return result;
}

