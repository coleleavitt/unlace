void __fastcall sub_2CA70(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r15
  _BYTE *v12; // r11
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  size_t v15; // rbp
  char v16; // al
  __int64 v17; // rsi
  unsigned __int64 *v18; // r15
  __int64 v19; // rax
  char *v20; // r11
  const void **v21; // rax
  unsigned __int64 v22; // rax
  __m128i v23; // xmm0
  char v24; // al
  const void **v25; // r11
  char v26; // al
  __int64 v27; // rax
  __m128i n; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+18h] [rbp-60h]
  const void **v30; // [rsp+20h] [rbp-58h]
  void *v31; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+36h] [rbp-42h]
  char v33; // [rsp+37h] [rbp-41h]
  char *v34; // [rsp+38h] [rbp-40h]

  v4 = 16LL * a3;
  v5 = v4 + a4;
  v6 = a2[1];
  if ( v6 )
  {
    v7 = *a2;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = 80 * v9;
      v12 = (_BYTE *)(v7 + 80 * v9);
      v13 = *(_QWORD *)v12;
      if ( v5 >= *(_QWORD *)v12 && v5 < *((_QWORD *)v12 + 1) )
        break;
      v9 = ++v10;
      if ( v10 >= v6 )
        return;
    }
    v14 = *((_QWORD *)v12 + 8);
    if ( v14 != a3 || v12[72] )
    {
      *((_QWORD *)v12 + 8) = a3;
      v12[72] = 0;
      if ( v13 < v4 )
      {
        v15 = *((_QWORD *)v12 + 3);
        if ( v15 )
        {
          n.m128i_i64[0] = v7 + 80 * v9;
          src = (void *)qalloc_or_throw();
          memcpy(src, *(const void **)(n.m128i_i64[0] + 16), v15);
          v12 = (_BYTE *)n.m128i_i64[0];
          n.m128i_i64[0] = *(_QWORD *)(n.m128i_i64[0] + 48);
          if ( !n.m128i_i64[0] )
          {
            v24 = v12[72];
            *(_QWORD *)v12 = v4;
            v18 = (unsigned __int64 *)(*a2 + v11);
            v32 = v24;
            v33 = v12[73];
            v30 = (const void **)qalloc_or_throw();
            memcpy(v30, src, v15);
            v17 = *a2;
            n.m128i_i64[1] = 0;
            v31 = nullptr;
            goto LABEL_13;
          }
        }
        else
        {
          n.m128i_i64[0] = *((_QWORD *)v12 + 6);
          if ( !n.m128i_i64[0] )
          {
            v16 = v12[73];
            *(_QWORD *)v12 = v4;
            v32 = 0;
            v17 = *a2;
            v33 = v16;
            src = nullptr;
            v18 = (unsigned __int64 *)(v17 + v11);
            v30 = nullptr;
            n.m128i_i64[1] = 0;
            v31 = nullptr;
LABEL_13:
            v19 = a2[1];
            v20 = (char *)v18 - v17;
            if ( a2[2] < (unsigned __int64)(v19 + 1) )
            {
              v34 = (char *)v18 - v17;
              v27 = qvector_reserve();
              v20 = (char *)v18 - v17;
              *a2 = v27;
              v18 = (unsigned __int64 *)((char *)v18 + v27 - v17);
              v19 = a2[1];
            }
            memmove(v18 + 10, v18, 80 * v19 - (_QWORD)v20);
            v21 = v30;
            *v18 = v13;
            v18[1] = v4;
            v18[2] = (unsigned __int64)v21;
            v22 = (unsigned __int64)v31;
            *(__m128i *)(v18 + 3) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
            v23 = _mm_loadl_epi64(&n);
            v18[5] = v22;
            LOBYTE(v22) = v32;
            v18[8] = v14;
            *((_BYTE *)v18 + 72) = v22;
            LOBYTE(v22) = v33;
            *((__m128i *)v18 + 3) = _mm_unpacklo_epi64(v23, v23);
            *((_BYTE *)v18 + 73) = v22;
            ++a2[1];
            if ( n.m128i_i64[1] )
              qfree();
            if ( src )
              qfree();
            return;
          }
          src = nullptr;
        }
        v30 = (const void **)v12;
        n.m128i_i64[1] = qalloc_or_throw();
        memcpy((void *)n.m128i_i64[1], v30[5], n.m128i_u64[0]);
        v25 = v30;
        v26 = *((_BYTE *)v30 + 72);
        *v30 = (const void *)v4;
        v18 = (unsigned __int64 *)(*a2 + v11);
        v32 = v26;
        v33 = *((_BYTE *)v25 + 73);
        if ( v15 )
        {
          v30 = (const void **)qalloc_or_throw();
          memcpy(v30, src, v15);
        }
        else
        {
          v30 = nullptr;
        }
        v31 = (void *)qalloc_or_throw();
        memcpy(v31, (const void *)n.m128i_i64[1], n.m128i_u64[0]);
        v17 = *a2;
        goto LABEL_13;
      }
    }
  }
}

