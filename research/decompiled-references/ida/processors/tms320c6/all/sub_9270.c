__int64 __fastcall sub_9270(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  int v5; // edx
  __int64 v6; // rdi

  v3 = *(unsigned __int8 *)(a2 + 32);
  *(_BYTE *)(a2 + 41) = 5;
  *(_WORD *)(a2 + 24) = 7;
  *(_BYTE *)(a2 + 45) = 1;
  v5 = (a3 >> 23) & 0x1F;
  *(_BYTE *)(a2 + 81) = 1;
  *(_QWORD *)(a2 + 48) = (__int16)(a3 >> 7);
  *(_BYTE *)(a2 + 85) = 2;
  if ( (unsigned __int8)v3 <= 8u && (v6 = 340, _bittest64(&v6, v3)) )
  {
    *(_WORD *)(a2 + 86) = (unsigned __int8)(v5 + 32);
    return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    *(_WORD *)(a2 + 86) = (unsigned __int8)v5;
    return *(unsigned __int16 *)(a2 + 26);
  }
}

