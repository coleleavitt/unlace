__int64 __fastcall sub_11E240(int **a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned int v6; // ecx

  v1 = sub_11DC70(a1);
  v2 = *((int *)a1 + 17);
  if ( v2 > 8 )
    return 0;
  v3 = v1;
  result = *((int *)a1 + 17);
  v5 = 255LL << (8 * (unsigned __int8)v2 - 8);
  if ( (_DWORD)result )
  {
    v6 = 0;
    while ( (v5 & ~v3) == 0 )
    {
      ++v6;
      v5 >>= 8;
      if ( (_DWORD)result == v6 )
        return result;
    }
    return v6;
  }
  return result;
}

