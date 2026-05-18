__int64 __fastcall sub_E1560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi

  v7 = *(_QWORD *)a1;
  if ( (*(_WORD *)(v7 + 20) & 0x9000) != 0 )
    sub_C93F0(v7, a2, a3, a4, a5, a6);
  else
    *(_WORD *)(v7 + 20) = 1;
  result = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 36) = 7;
  v9 = *(_QWORD *)(result + 24);
  if ( !*(_BYTE *)(v9 + 103) && !*(_BYTE *)(v9 + 104) )
    return sub_DBE60(v9);
  return result;
}
