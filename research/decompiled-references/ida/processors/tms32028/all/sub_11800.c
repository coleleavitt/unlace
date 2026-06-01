__int64 __fastcall sub_11800(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( get_sreg() == 1 )
    v2 = (unsigned __int16)a2 & 0xFFFE;
  if ( *(_WORD *)(a1 + 24) != 78 )
    return (v2 << 6) + 16LL * *(_QWORD *)a1;
  result = get_sreg();
  if ( result != -1 )
  {
    v2 = (unsigned __int16)result & 0xFC00 | v2 & 0x3FF;
    return (v2 << 6) + 16LL * *(_QWORD *)a1;
  }
  return result;
}

