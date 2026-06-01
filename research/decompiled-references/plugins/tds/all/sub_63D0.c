__int64 __fastcall sub_63D0(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  signed int v4; // ebx
  __int64 v5; // rsi
  __int64 result; // rax

  v4 = *(_DWORD *)(a2 + 8) - 4;
  if ( v4 < 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 120) + *(unsigned int *)(a2 + 4);
  if ( (debug & 0x400000) == 0 )
  {
    result = 1;
    if ( !v4 )
      return result;
    return sub_43F0(a1, (unsigned __int16 *)(v5 + 4), v4, a3, a4);
  }
  sub_2AE0((__int64)"TDS: sstAlignSym signature=%X\n", *(_DWORD *)v5);
  result = 1;
  if ( v4 )
    return sub_43F0(a1, (unsigned __int16 *)(v5 + 4), v4, a3, a4);
  return result;
}
