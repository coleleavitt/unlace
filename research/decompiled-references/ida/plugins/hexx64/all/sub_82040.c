__int64 __fastcall sub_82040(__int64 *a1, __int64 a2, __m128 i)
{
  int v5; // eax
  char *v6; // rcx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  void *v13; // rax
  unsigned __int64 v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // r14d
  __int64 v18; // r12
  char *v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // r15
  __int64 *v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 *j; // r12
  __int64 v26; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 n; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v5 = sub_7D4F0((_QWORD *)a2, *(double *)i.m128_u64);
  if ( v5 < 0 )
    return 0;
  v7 = a1[1];
  v8 = v5;
  if ( v5 != v7 )
  {
    src = nullptr;
    i.m128_u64[0] = 0;
    v36 = 0;
    if ( v5 < v7 )
    {
      v14 = v5;
      do
      {
        v15 = (__int64 *)(*a1 + 24 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16);
        }
        ++v14;
      }
      while ( v14 < v7 );
    }
    else
    {
      v9 = (char *)*a1;
      v10 = a1[2];
      if ( (unsigned __int64)&src < *a1 || (v6 = &v9[24 * v10], &src >= (void **)v6) )
      {
        if ( v10 < v8 )
        {
          v32 = qvector_reserve((__int64)a1, (__int64)v9, v8, 24);
          v7 = a1[1];
          *a1 = v32;
        }
        for ( i = 0; v7 < v8; ++v7 )
        {
          v11 = *a1 + 24 * v7;
          *(_QWORD *)v11 = 0;
          *(__m128 *)(v11 + 8) = i;
          v12 = v36;
          if ( (_QWORD)v36 )
          {
            n = 8 * v36;
            v13 = (void *)qalloc_or_throw(8 * v36, (__int64)v9, 8 * v36, (__int64)v6);
            *(_QWORD *)(v11 + 16) = v12;
            *(_QWORD *)v11 = v13;
            v9 = (char *)src;
            memcpy(v13, src, n);
            *(_QWORD *)(v11 + 8) = v12;
            i = 0;
          }
        }
      }
      else
      {
        if ( v10 < v8 )
        {
          v33 = qvector_reserve((__int64)a1, (__int64)v9, v8, 24);
          v7 = a1[1];
          *a1 = v33;
        }
        if ( v7 < v8 )
        {
          i.m128_u64[0] = 0;
          v30 = 24 * v7;
          do
          {
            ++v7;
            v31 = v30 + *a1;
            v30 += 24;
            *(_QWORD *)v31 = 0;
            *(_OWORD *)(v31 + 8) = 0;
          }
          while ( v8 != v7 );
        }
      }
    }
    a1[1] = v8;
  }
  v17 = 0;
  v18 = 0;
  sub_81FC0(a1 + 3, v8);
  if ( a1[4] )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
      {
LABEL_47:
        if ( under_debugger )
          goto LABEL_50;
        goto LABEL_48;
      }
      *(_DWORD *)(a1[3] + 4 * v18) = unpack_dd();
      v19 = (char *)*a1;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
      {
        if ( under_debugger )
LABEL_50:
          BUG();
LABEL_48:
        sub_383060(0xC597u, *(double *)i.m128_u64);
      }
      v20 = unpack_dd();
      v21 = v20;
      if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v20 || v20 < 0 )
        return 0;
      v22 = (__int64 *)&v19[24 * v18];
      v23 = v22[1];
      if ( v23 < v20 )
        break;
      if ( v20 != v23 )
        goto LABEL_24;
LABEL_25:
      v24 = (__int64 *)*v22;
      for ( j = &v24[v23]; j != v24; ++v24 )
      {
        while ( *(_DWORD *)(a2 + 48) > 3u )
        {
          *v24++ = sub_7CF00((_QWORD *)a2, *(double *)i.m128_u64);
          if ( j == v24 )
            goto LABEL_33;
        }
        if ( (unsigned __int8)is_cvt64() )
        {
          if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
            goto LABEL_47;
          v26 = (int)unpack_dd();
        }
        else
        {
          v26 = sub_7CD40(a2, *(double *)i.m128_u64);
        }
        *v24 = v26;
      }
LABEL_33:
      v18 = ++v17;
      if ( v17 >= (unsigned __int64)a1[4] )
        return 1;
    }
    v28 = *v22;
    if ( v22[2] < (unsigned __int64)v20 )
    {
      v29 = qvector_reserve((__int64)v22, v28, v20, 8);
      v23 = v22[1];
      *v22 = v29;
      v28 = v29;
    }
    memset((void *)(v28 + 8 * v23), 0, 8 * (v21 - v23));
LABEL_24:
    v22[1] = v21;
    v23 = v21;
    goto LABEL_25;
  }
  return 1;
}

