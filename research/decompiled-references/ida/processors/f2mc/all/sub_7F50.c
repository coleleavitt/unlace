__int64 __fastcall sub_7F50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 5;
  LOWORD(result) = insn_get_next_word();
  *(_BYTE *)(a3 + 5) = 1;
  result = (unsigned __int16)result;
  *(_QWORD *)(a3 + 8) = (unsigned __int16)result;
  return result;
}

