__int64 __fastcall sub_C6930(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rdi

  result = sub_C6820(*(unsigned __int8 **)(a1 + 16));
  v3 = *(unsigned __int8 **)(a1 + 24);
  if ( v3 )
    return sub_C68F0(v3, (char)result);
  if ( (*(_BYTE *)(a1 + 5) & 8) != 0 )
    return sub_C68F0(*(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 8LL), (char)result);
  if ( !(_BYTE)result )
    return 65;
  return result;
}
