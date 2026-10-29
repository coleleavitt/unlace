__int64 __fastcall sub_7E00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 5;
  LOBYTE(result) = insn_get_next_byte();
  *(_BYTE *)(a3 + 5) = 0;
  result = (unsigned __int8)result;
  *(_QWORD *)(a3 + 8) = (unsigned __int8)result;
  return result;
}

