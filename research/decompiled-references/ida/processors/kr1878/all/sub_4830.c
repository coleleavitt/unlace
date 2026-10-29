__int64 __fastcall sub_4830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = get_sreg();
  if ( result != -1 )
    return *(_QWORD *)(a1 + 176) + (*(_QWORD *)(a3 + 8) | (8 * (_WORD)result) & 0x7F8);
  return result;
}

