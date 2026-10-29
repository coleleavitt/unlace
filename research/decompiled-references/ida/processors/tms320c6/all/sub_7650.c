__int64 __fastcall sub_7650(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // rdi

  result = a2;
  if ( ((a4 >> 3) & 3) != 3 )
  {
    *(_BYTE *)(a2 + 41) = 5;
    v5 = (unsigned __int8)(*((_BYTE *)&qword_F2E0 + 4 * ((a4 >> 3) & 3)) + (a4 & 1));
    *(_BYTE *)(result + 45) = 2;
    *(_BYTE *)(result + 32) = v5;
    v6 = v5;
    *(_WORD *)(result + 24) = 44;
    *(_BYTE *)(result + 28) = *((_BYTE *)qword_FDA0 + ((a4 >> 14) & 3));
    LOWORD(v5) = a4;
    v7 = (a4 >> 7) & 7;
    *(_QWORD *)(result + 48) = (v5 & 0x2000) != 0;
    if ( (unsigned __int8)v6 <= 8u )
    {
      v8 = 340;
      if ( _bittest64(&v8, v6) )
        v7 += 32;
    }
    *(_BYTE *)(result + 81) = 1;
    *(_BYTE *)(result + 85) = 2;
    *(_WORD *)(result + 86) = v7;
  }
  return result;
}

