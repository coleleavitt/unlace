__int64 __fastcall sub_7DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 8;
  LOBYTE(result) = insn_get_next_byte();
  *(_BYTE *)(a3 + 5) = 0;
  result = (unsigned __int8)result;
  *(_WORD *)(a3 + 6) = (unsigned __int8)result;
  return result;
}

