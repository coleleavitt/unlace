__int64 __fastcall sub_C850(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  char v3; // al
  unsigned int v4; // edx
  __int64 v5; // r12
  unsigned __int8 v6; // al
  __int64 v8; // r12
  __int64 v9; // r12
  char next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(int *)(a1 + 4360);
  v3 = get_byte() & 3;
  if ( v3 == 2 )
  {
    v9 = v1 + 40 * v2;
    *(_BYTE *)(v9 + 41) = 4;
    next_byte = insn_get_next_byte();
    *(_BYTE *)(v9 + 72) = 1;
    *(_QWORD *)(v9 + 56) = next_byte;
    *(_WORD *)(v9 + 46) = 29;
    goto LABEL_5;
  }
  if ( v3 == 3 )
  {
    v8 = v1 + 40 * v2;
    *(_BYTE *)(v8 + 41) = 2;
    *(_QWORD *)(v8 + 56) = (unsigned __int16)insn_get_next_word();
    goto LABEL_5;
  }
  v4 = 0;
  if ( v3 == 1 )
  {
    v5 = v1 + 40 * v2;
    *(_BYTE *)(v5 + 41) = 4;
    v6 = insn_get_next_byte();
    *(_BYTE *)(v5 + 72) = 1;
    *(_WORD *)(v5 + 46) = 28;
    *(_QWORD *)(v5 + 56) = v6;
LABEL_5:
    v4 = 1;
    *(_BYTE *)(v1 + 40 * v2 + 45) = 0;
  }
  return v4;
}

