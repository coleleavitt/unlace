__int64 __fastcall sub_8DC0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v4; // eax
  unsigned __int8 *v5; // rcx
  __int16 v6; // di
  int v7; // eax
  __int64 result; // rax

  v4 = (a3 >> 4) & 7;
  if ( a4 )
    v4 |= (a3 >> 5) & 8;
  v5 = (unsigned __int8 *)qword_F5A0 + 3 * v4;
  v6 = *v5;
  *(_WORD *)(a2 + 24) = v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 2;
  v7 = (a3 >> 23) & 0x1F;
  if ( (a3 & 2) != 0 )
    LOWORD(v7) = v7 + 32;
  *(_WORD *)(a2 + 86) = v7;
  *(_BYTE *)(a2 + 45) = v5[1];
  result = v5[2];
  if ( (_BYTE)result == 3 )
  {
    *(_WORD *)(a2 + 86) &= ~1u;
    *(_BYTE *)(a2 + 81) = 8;
    *(_BYTE *)(a2 + 114) = 0;
    if ( (a3 & 0x800000) == 0 && (v6 == 141 || v6 == 215) )
      return 0;
  }
  return result;
}

