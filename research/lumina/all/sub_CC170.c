__int64 __fastcall sub_CC170(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  int i; // ecx

  v1 = *(__int64 **)(a1 + 288);
  result = *((int *)v1 + 7);
  if ( (int)result < 0 )
  {
    result = -1024 * result / (*((_DWORD *)v1 + 9) + *((_DWORD *)v1 + 10));
    if ( result > 1000000000 )
      result = 1000000000;
  }
  v3 = *v1;
  for ( i = 0; v3; ++i )
    v3 = *(_QWORD *)(v3 + 56);
  if ( (_DWORD)result )
    return (int)(100LL * i / (int)result) > 24;
  return result;
}
