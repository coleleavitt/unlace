__int64 __fastcall sub_7DE40(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int128 i; // xmm0
  __int64 v8; // r14
  __int64 v9; // r15
  void *v10; // rax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 *v20; // rbx
  __int64 *j; // r12
  __int64 v22; // rax
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 n; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v3 = sub_792F0((_QWORD *)a2);
  if ( v3 < 0 )
    return 0;
  v4 = a1[1];
  v5 = v3;
  if ( v3 != v4 )
  {
    src = nullptr;
    v32 = 0;
    if ( v3 < v4 )
    {
      v11 = v3;
      do
      {
        v12 = (_QWORD *)(*a1 + 24 * v11);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
        }
        ++v11;
      }
      while ( v11 < v4 );
    }
    else
    {
      v6 = a1[2];
      if ( (unsigned __int64)&src < *a1 || (unsigned __int64)&src >= *a1 + 24 * v6 )
      {
        if ( v6 < v5 )
        {
          v28 = qvector_reserve();
          v4 = a1[1];
          *a1 = v28;
        }
        for ( i = 0; v4 < v5; ++v4 )
        {
          v8 = *a1 + 24 * v4;
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = i;
          v9 = v32;
          if ( (_QWORD)v32 )
          {
            n = 8 * v32;
            v10 = (void *)qalloc_or_throw();
            *(_QWORD *)(v8 + 16) = v9;
            *(_QWORD *)v8 = v10;
            memcpy(v10, src, n);
            *(_QWORD *)(v8 + 8) = v9;
            i = 0;
          }
        }
      }
      else
      {
        if ( v6 < v5 )
        {
          v29 = qvector_reserve();
          v4 = a1[1];
          *a1 = v29;
        }
        if ( v4 < v5 )
        {
          v26 = 24 * v4;
          do
          {
            ++v4;
            v27 = v26 + *a1;
            v26 += 24;
            *(_QWORD *)v27 = 0;
            *(_OWORD *)(v27 + 8) = 0;
          }
          while ( v5 != v4 );
        }
      }
    }
    a1[1] = v5;
  }
  v13 = 0;
  v14 = 0;
  sub_7DDC0(a1 + 3, v5);
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
      *(_DWORD *)(a1[3] + 4 * v14) = unpack_dd();
      v15 = *a1;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
      {
        if ( under_debugger )
LABEL_50:
          BUG();
LABEL_48:
        sub_37E160(50583);
      }
      v16 = unpack_dd();
      v17 = v16;
      if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v16 || v16 < 0 )
        return 0;
      v18 = v15 + 24 * v14;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 < v16 )
        break;
      if ( v16 != v19 )
        goto LABEL_24;
LABEL_25:
      v20 = *(__int64 **)v18;
      for ( j = &v20[v19]; j != v20; ++v20 )
      {
        while ( *(_DWORD *)(a2 + 48) > 3u )
        {
          *v20++ = sub_78D00((_QWORD *)a2);
          if ( j == v20 )
            goto LABEL_33;
        }
        if ( (unsigned __int8)is_cvt64() )
        {
          if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
            goto LABEL_47;
          v22 = (int)unpack_dd();
        }
        else
        {
          v22 = sub_78B40(a2);
        }
        *v20 = v22;
      }
LABEL_33:
      v14 = ++v13;
      if ( v13 >= (unsigned __int64)a1[4] )
        return 1;
    }
    v24 = *(__int64 **)v18;
    if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)v16 )
    {
      v25 = qvector_reserve();
      v19 = *(_QWORD *)(v18 + 8);
      *(_QWORD *)v18 = v25;
      v24 = (__int64 *)v25;
    }
    memset(&v24[v19], 0, 8 * (v17 - v19));
LABEL_24:
    *(_QWORD *)(v18 + 8) = v17;
    v19 = v17;
    goto LABEL_25;
  }
  return 1;
}

