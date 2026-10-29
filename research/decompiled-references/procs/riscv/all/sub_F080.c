__int64 __fastcall sub_F080(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 fchunk; // rax
  __int64 **v8; // rdi

  *(_BYTE *)(a2 + 41) = 1;
  v5 = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 81) = 7;
  *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
  *(_WORD *)(a2 + 24) = 3;
  *(_BYTE *)(a2 + 45) = (*(_WORD *)(a2 + 34) & 4) == 0 ? 2 : 7;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
     & (v5
      + ((__int64)((unsigned __int64)((a3 & 0xF000)
                                    + ((a4 << 16) & 0xF0000 | (32 * a4) & 0x100000)
                                    + ((a4 << 7) & 0x800 | (a4 >> 4) & 0x7FEu)) << 43) >> 43));
  *(_QWORD *)(a2 + 96) = v6;
  fchunk = get_fchunk(v5);
  if ( !fchunk || fchunk != get_fchunk(v6) )
  {
    v8 = *(__int64 ***)(a1 + 504);
    if ( v8 )
      sub_BAE0(v8, 32, 32, 12);
  }
  return *(unsigned __int16 *)(a2 + 26);
}
