__int64 __fastcall sub_CD030(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbp
  char v4; // al
  unsigned int v5; // r12d

  v3 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    a2 = (unsigned int)a2;
  }
  v4 = (_BYTE)a2 != 0;
  if ( (v3[40] & 2) == 0 || (v5 = 8, v3[33] == v4) )
  {
    v3[33] = v4;
    v3[34] = (_BYTE)a2 == 2;
    v5 = 0;
  }
  if ( *(_BYTE *)(a1 + 17) )
    sub_CCDE0(a1, a2, a3);
  return v5;
}
