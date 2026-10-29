__int64 __fastcall sub_9360(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int16 v4; // cx
  unsigned __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 result; // rax

  LODWORD(v3) = a3 >> 7;
  if ( (a3 & 0x40) != 0 )
  {
    v3 = (unsigned int)((_DWORD)v3 << 16);
    v4 = 45;
  }
  else
  {
    v3 = (__int16)v3;
    v4 = 44;
  }
  *(_QWORD *)(a2 + 48) = v3;
  v5 = *(unsigned __int8 *)(a2 + 32);
  *(_WORD *)(a2 + 24) = v4;
  v6 = (a3 >> 23) & 0x1F;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 2;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 1;
  if ( (unsigned __int8)v5 <= 8u )
  {
    v7 = 340;
    if ( _bittest64(&v7, v5) )
      LOBYTE(v6) = v6 + 32;
  }
  result = *(unsigned __int16 *)(a2 + 26);
  *(_WORD *)(a2 + 86) = (unsigned __int8)v6;
  return result;
}

