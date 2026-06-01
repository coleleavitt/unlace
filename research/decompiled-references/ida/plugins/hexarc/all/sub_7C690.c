__int64 __fastcall sub_7C690(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( *a1 >= a1[1] )
    sub_73F90(a1);
  v3 = unpack_dd();
  v4 = v3;
  if ( a1[1] - *a1 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a2[1];
  if ( v5 < v3 )
  {
    v7 = *a2;
    if ( a2[2] < (unsigned __int64)v3 )
    {
      v8 = qvector_reserve();
      v5 = a2[1];
      *a2 = v8;
      v7 = v8;
    }
    memset((void *)(v7 + 8 * v5), 0, 8 * (v4 - v5));
    a2[1] = v4;
  }
  else if ( v3 != v5 )
  {
    a2[1] = v3;
  }
  return 1;
}

