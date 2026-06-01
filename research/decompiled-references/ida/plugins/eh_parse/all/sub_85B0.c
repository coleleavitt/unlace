__int64 __fastcall sub_85B0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 124);
  if ( (result & 2) == 0 )
  {
    *(_DWORD *)(a1 + 124) = result | 2;
    sub_8290(a1);
    return sub_112B0(a1);
  }
  return result;
}

