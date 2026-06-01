__int64 __fastcall sub_AFB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned __int8 next_byte; // al
  unsigned int v4; // ecx
  unsigned __int8 v5; // dl
  int v6; // eax
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(int *)(a1 + 4360);
  next_byte = insn_get_next_byte();
  v4 = 0;
  v5 = next_byte >> 3;
  if ( next_byte <= 0x1Fu )
  {
    v6 = *((_DWORD *)qword_1AF00 + (next_byte & 7));
    if ( v6 != 40 || !v5 )
    {
      v7 = v1 + 40 * v2;
      *(_BYTE *)(v7 + 41) = 1;
      *(_WORD *)(v7 + 46) = v6 + v5;
      *(_BYTE *)(v7 + 45) = 2;
      return 1;
    }
  }
  return v4;
}

