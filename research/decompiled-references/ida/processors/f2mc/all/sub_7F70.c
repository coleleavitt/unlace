__int64 __fastcall sub_7F70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 5;
  LODWORD(result) = insn_get_next_dword();
  *(_BYTE *)(a3 + 5) = 2;
  result = (unsigned int)result;
  *(_QWORD *)(a3 + 8) = (unsigned int)result;
  return result;
}

