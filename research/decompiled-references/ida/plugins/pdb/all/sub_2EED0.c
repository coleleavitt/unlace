__int64 __fastcall sub_2EED0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a3;
  v14[1] = __readfsqword(0x28u);
  v14[0] = v3;
  v5 = a3[1] + v3;
  v6 = unpack_dd(v14, v5);
  v7 = v6;
  v8 = a2[1];
  if ( v8 < v6 )
  {
    v12 = *a2;
    if ( a2[2] < (unsigned __int64)v6 )
    {
      v13 = qvector_reserve(a2, v12, v6, 4);
      v8 = a2[1];
      *a2 = v13;
      v12 = v13;
    }
    memset((void *)(v12 + 4 * v8), 0, 4 * (v7 - v8));
    a2[1] = v7;
LABEL_5:
    v9 = 4 * v7;
    v10 = 0;
    while ( v14[0] < v5 )
    {
      *(_DWORD *)(*a2 + v10) = unpack_dd(v14, v5);
      v10 += 4;
      if ( v9 == v10 )
        goto LABEL_9;
    }
    return 2147500037LL;
  }
  if ( v6 != v8 )
    a2[1] = v6;
  if ( v6 )
    goto LABEL_5;
LABEL_9:
  if ( v14[0] != v5 )
    return 2147500037LL;
  return 0;
}

