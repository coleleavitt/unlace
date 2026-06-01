__int64 __fastcall sub_7A800(__int64 *a1, _QWORD *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // r12
  __int64 *v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( *a2 >= a2[1] )
    sub_75A90(a1);
  v3 = unpack_dd();
  v4 = v3;
  if ( a2[1] - *a2 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v10 = *a1;
    if ( a1[2] < (unsigned __int64)v3 )
    {
      v11 = qvector_reserve();
      v5 = a1[1];
      *a1 = v11;
      v10 = v11;
    }
    memset((void *)(v10 + 40 * v5), 0, 40 * (v4 - v5));
    goto LABEL_6;
  }
  if ( v3 != v5 )
  {
LABEL_6:
    a1[1] = v4;
    v5 = v4;
  }
  v6 = (__int64 *)*a1;
  v7 = *a1 + 40 * v5;
  if ( *a1 != v7 )
  {
    do
    {
      v8 = v6;
      v6 += 5;
      sub_7A790(v8, a2);
    }
    while ( (__int64 *)v7 != v6 );
  }
  return 1;
}

