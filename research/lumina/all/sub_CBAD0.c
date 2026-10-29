__int64 __fastcall sub_CBAD0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  sub_C2FA0(a1, 1);
  result = *(_WORD *)(a1 + 52) & 0xFFF0 | 1u;
  v2 = *(_WORD *)(a1 + 54) == 0;
  *(_WORD *)(a1 + 52) = *(_WORD *)(a1 + 52) & 0xFFF0 | 1;
  if ( v2 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(result + 44) )
      return xmmword_241568(*(_QWORD *)(result + 64), *(_QWORD *)a1, 0);
  }
  return result;
}
