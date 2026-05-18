unsigned __int64 __fastcall sub_CC060(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)a2 )
  {
    result = sub_CBDE0(a1, a2);
    *(_DWORD *)(a1 + 44) = a2 - 1;
  }
  return result;
}
