__int64 __fastcall sub_B7E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_WORD *)(v1 + 64) |= 1u;
  v2 = *(int *)(a1 + 4360);
  v3 = *(_QWORD *)(a1 + 4352);
  *(_BYTE *)(v3 + 40 * v2 + 41) = 5;
  if ( (*(_BYTE *)(v3 + 30) & 1) != 0 )
  {
    LOWORD(v5) = insn_get_next_word();
    v4 = 1;
    v5 = (unsigned __int16)v5;
  }
  else
  {
    LOBYTE(v5) = insn_get_next_byte();
    v4 = 0;
    v5 = (unsigned __int8)v5;
  }
  v6 = v3 + 40 * v2;
  *(_QWORD *)(v6 + 48) = v5;
  *(_BYTE *)(v6 + 45) = v4;
  return 1;
}

