__int64 __fastcall sub_298D0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx

  result = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)result )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = 0xFFFFFFFFFLL;
      v5 = 0xFFFFFFF000000000LL;
      if ( v3 != 13 )
        return 0;
    }
    else
    {
      v4 = 0xFFFFFFFFFFFFLL;
      v5 = 0xFFFF000000000000LL;
    }
    if ( (v5 & *a2) != 0 )
    {
      *a2 &= v4;
      return result;
    }
    return 0;
  }
  return result;
}

