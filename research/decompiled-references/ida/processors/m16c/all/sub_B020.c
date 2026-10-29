__int64 __fastcall sub_B020(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  char v3; // cl
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = *(int *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  *(_BYTE *)(v2 + 40 * v1 + 41) = 5;
  if ( (*(_BYTE *)(v2 + 30) & 1) != 0 )
  {
    LOWORD(v4) = insn_get_next_word();
    v3 = 1;
    v4 = (unsigned __int16)v4;
  }
  else
  {
    LOBYTE(v4) = insn_get_next_byte();
    v3 = 0;
    v4 = (unsigned __int8)v4;
  }
  v5 = v2 + 40 * v1;
  *(_QWORD *)(v5 + 48) = v4;
  *(_BYTE *)(v5 + 45) = v3;
  return 1;
}

