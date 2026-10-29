__int64 __fastcall sub_EE70(__int64 a1, __int64 a2, unsigned __int16 a3, int a4, unsigned __int8 a5)
{
  __int16 v7; // cx
  __int16 v10; // si
  bool v11; // cf
  int v12; // esi
  char v13; // cl
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 fchunk; // r13
  __int64 **v17; // rdi
  __int64 **v18; // rdi

  v7 = word_2AD60[a5];
  *(_WORD *)(a2 + 24) = v7;
  if ( !v7 )
    return 0;
  v10 = *(_WORD *)(a2 + 34);
  *(_WORD *)(a2 + 46) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 81) = 1;
  v11 = (v10 & 4) == 0;
  HIWORD(v12) = HIWORD(a4);
  *(_BYTE *)(a2 + 121) = 7;
  LOWORD(v12) = ((unsigned __int16)a4 >> 4) & 0x7E0;
  v13 = v11 ? 2 : 7;
  *(_BYTE *)(a2 + 45) = v13;
  *(_BYTE *)(a2 + 85) = v13;
  *(_WORD *)(a2 + 86) = ((unsigned __int16)a4 >> 4) & 0x1F;
  v14 = *(_QWORD *)(a2 + 16);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
      & (v14
       + ((__int64)(((v12 | (a3 >> 7) & 0x1Eu)
                   + (unsigned __int64)(((16 * a3) & 0x800) + (((unsigned __int16)a4 >> 3) & 0x1000u))) << 51) >> 51));
  *(_QWORD *)(a2 + 136) = v15;
  fchunk = get_fchunk(v14);
  if ( !fchunk || fchunk != get_fchunk(v15) )
  {
    v17 = *(__int64 ***)(a1 + 504);
    if ( v17 )
    {
      sub_BAE0(v17, 12, 12, 7);
      v18 = *(__int64 ***)(a1 + 504);
      if ( v18 )
        sub_BAE0(v18, 32, 32, 25);
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}

