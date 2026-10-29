__int64 __fastcall sub_193F0(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = *a2;
  if ( (_DWORD)result != -1 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)(a4 - 1) <= 2 )
  {
    *(_DWORD *)(a3 + 36) = a4;
    *(_WORD *)(a1 + 26) = a4;
    return 1;
  }
  return result;
}

