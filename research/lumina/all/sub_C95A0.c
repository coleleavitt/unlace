__int64 __fastcall sub_C95A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 result; // rax

  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 )
    sub_C93F0(a1, a2, a3, a4, a5, a6);
  else
    *(_WORD *)(a1 + 20) = 1;
  if ( (*(_QWORD *)&a7 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL
    || (result = 0xFFFFFFFFFFFFFLL, (*(_QWORD *)&a7 & 0xFFFFFFFFFFFFFLL) == 0) )
  {
    *(double *)a1 = a7;
    *(_WORD *)(a1 + 20) = 8;
    return 8;
  }
  return result;
}
