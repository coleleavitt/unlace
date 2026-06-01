_QWORD *__fastcall sub_38000(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r13
  _QWORD *v9; // r13
  _QWORD *v10; // r14
  _QWORD *i; // rbx
  _QWORD *v12; // r10
  _QWORD *v13; // r15
  size_t v14; // r11
  size_t v15; // r9
  const void *v16; // r8
  void *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  void *v22; // rax
  int v23; // eax
  __int64 *v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // r14
  const void *v28; // rbx
  void *v29; // rax
  size_t na; // [rsp+10h] [rbp-68h]
  size_t nb; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+10h] [rbp-68h]
  _QWORD *v34; // [rsp+28h] [rbp-50h]
  size_t v35; // [rsp+28h] [rbp-50h]
  const void *v36; // [rsp+30h] [rbp-48h]
  _QWORD *v37; // [rsp+38h] [rbp-40h]

  v5 = qalloc_or_throw();
  v6 = (_QWORD *)(v5 + 56);
  *(_OWORD *)(v5 + 24) = 0;
  v7 = (_QWORD *)v5;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(__m128i *)(v5 + 56) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v5 + 56), (__m128i)(unsigned __int64)(v5 + 56));
  if ( a4 != v5 + 16 )
  {
    v8 = *(_QWORD *)(a4 + 8);
    if ( v8 > 1 )
    {
      v28 = *(const void **)a4;
      v29 = (void *)qvector_reserve();
      v7[2] = v29;
      v7[3] = v8;
      memmove(v29, v28, v8 - 1);
      *(_BYTE *)(v7[2] + v8 - 1) = 0;
    }
  }
  v9 = (_QWORD *)(a4 + 40);
  v7[5] = *(_QWORD *)(a4 + 24);
  v7[6] = *(_QWORD *)(a4 + 32);
  if ( v6 != (_QWORD *)(a4 + 40) )
  {
    v10 = (_QWORD *)v7[7];
    for ( i = *(_QWORD **)(a4 + 40); v6 != v10; *((_DWORD *)v13 + 12) = *((_DWORD *)v12 + 12) )
    {
      if ( v9 == i )
        break;
      v12 = i;
      v13 = v10;
      i = (_QWORD *)*i;
      v10 = (_QWORD *)*v10;
      if ( v13 + 2 != v12 + 2 )
      {
        v14 = v12[3];
        if ( !v14 || (v15 = v14 - 1, v14 == 1) )
        {
          v13[3] = 0;
        }
        else
        {
          v16 = (const void *)v12[2];
          v17 = (void *)v13[2];
          if ( v13[4] < v14 )
          {
            v37 = v12;
            v36 = (const void *)v12[2];
            v35 = v14 - 1;
            n = v12[3];
            v17 = (void *)qvector_reserve();
            v12 = v37;
            v16 = v36;
            v13[2] = v17;
            v15 = v35;
            v14 = n;
          }
          v13[3] = v14;
          v34 = v12;
          na = v14;
          memmove(v17, v16, v15);
          v12 = v34;
          *(_BYTE *)(v13[2] + na - 1) = 0;
        }
      }
      v13[5] = v12[5];
    }
    if ( v9 == i )
    {
      for ( ; v6 != v10; --v7[9] )
      {
        v18 = v10;
        v10 = (_QWORD *)*v10;
        *(_QWORD *)v18[1] = v10;
        v10[1] = v18[1];
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        qfree();
      }
    }
    else
    {
      do
      {
        v25 = i;
        i = (_QWORD *)*i;
        v26 = qalloc_or_throw();
        *(_QWORD *)(v26 + 16) = 0;
        v27 = v26;
        *(_OWORD *)(v26 + 24) = 0;
        if ( v25[3] )
        {
          nb = v25[3];
          v22 = (void *)qalloc_or_throw();
          *(_QWORD *)(v27 + 16) = v22;
          *(_QWORD *)(v27 + 32) = nb;
          memcpy(v22, (const void *)v25[2], nb);
          *(_QWORD *)(v27 + 24) = nb;
        }
        *(_QWORD *)(v27 + 40) = v25[5];
        v23 = *((_DWORD *)v25 + 12);
        *(_QWORD *)v27 = v6;
        *(_DWORD *)(v27 + 48) = v23;
        v24 = (__int64 *)v7[8];
        *(_QWORD *)(v27 + 8) = v24;
        *v24 = v27;
        v7[8] = v27;
        ++v7[9];
      }
      while ( v9 != i );
    }
  }
  v19 = *a3;
  *v7 = *a3;
  v20 = *(_QWORD **)(v19 + 8);
  v7[1] = v20;
  *v20 = v7;
  *(_QWORD *)(v19 + 8) = v7;
  ++*(_QWORD *)(a2 + 16);
  *a1 = v7;
  return a1;
}

