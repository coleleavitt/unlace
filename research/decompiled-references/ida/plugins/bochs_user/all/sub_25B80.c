__int64 __fastcall sub_25B80(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  v3 = *(__int64 **)(a1 + 776);
  v4 = (__int64 *)(a1 + 776);
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v5 = a2 - v3[3];
    if ( v5 < *((unsigned int *)v3 + 10) )
      break;
    v3 = (__int64 *)*v3;
    if ( v3 == v4 )
      return 0;
  }
  v6 = v3[4] + v5;
  *a3 = v6;
  return 1;
}

