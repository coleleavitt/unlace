__int64 __fastcall sub_D42A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 103) )
  {
    result = *(unsigned int *)(a1 + 220);
    if ( !(_DWORD)result )
      return sub_D4260(a1);
  }
  return result;
}
