__int64 *__fastcall sub_3D1CB0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = a2[1];
  if ( 2 * v2 )
  {
    v3 = 2 * v2 + 1;
    v4 = qvector_reserve();
    v5 = a1[1];
    *a1 = v4;
    memset((void *)(v4 + v5), 0, v3 - v5);
    v6 = *a1;
    a1[1] = v3;
    *(_BYTE *)(v6 + 2 * v2) = 0;
    v7 = *a1;
    v2 = a2[1];
  }
  else
  {
    v7 = 0;
  }
  v8 = *a2;
  v9 = *a2 + v2;
  if ( *a2 != v9 )
  {
    do
    {
      qsnprintf();
      ++v8;
      v7 += 2;
    }
    while ( v9 != v8 );
  }
  return a1;
}

