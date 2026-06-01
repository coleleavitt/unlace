__int64 __fastcall sub_11EE0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 16);
  if ( *(_WORD *)(a2 + 10) != 138 )
    return v2 + 16LL * *a1;
  result = get_sreg();
  if ( result != -1 )
  {
    v2 = (unsigned __int16)((_WORD)result << 7) | v2 & 0x7F;
    return v2 + 16LL * *a1;
  }
  return result;
}

