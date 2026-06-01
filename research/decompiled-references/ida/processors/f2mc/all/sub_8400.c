__int64 __fastcall sub_8400(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax

  a4[32] = 25;
  a4[28] = *(_BYTE *)a3;
  *(_BYTE *)(a3 + 1) = 7;
  v7 = sub_8260(a4, a2, a3, (__int64)a4, a5, a6);
  LOWORD(result) = insn_get_next_word();
  *(_BYTE *)(a3 + 5) = 9;
  result = (unsigned __int16)result;
  *(_QWORD *)(a3 + 16) = (unsigned __int16)result | (unsigned __int64)(v7 << 16);
  return result;
}

