__int64 __fastcall sub_8360(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 sreg; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 result; // rax

  a4[32] = 26;
  a4[28] = *(_BYTE *)a3;
  *(_BYTE *)(a3 + 1) = 2;
  *(_BYTE *)(a3 + 5) = 0;
  sreg = get_sreg();
  v11 = (unsigned __int16)((_WORD)sreg << 8);
  if ( sreg == -1 )
    v11 = 0;
  v12 = sub_8260(a4, 31, v7, v8, v9, v10);
  LOBYTE(result) = insn_get_next_byte();
  *(_BYTE *)(a3 + 34) = 115;
  result = (unsigned __int8)result;
  *(_QWORD *)(a3 + 16) = v11 | (unsigned __int8)result | (unsigned __int64)(v12 << 16);
  return result;
}

