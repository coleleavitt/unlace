__int64 __fastcall sub_C9650(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = a1;
  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 )
  {
    sub_C93F0(a1, a2, a3, a4, a5, a6);
    result = a1;
  }
  *(_WORD *)(a1 + 20) = 4;
  return result;
}
