_QWORD *__fastcall sub_255FB0(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r14
  void *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+10h] [rbp-58h]

  v20 = a3;
  if ( a3 < a4 )
  {
    do
    {
      v4 = 48 * v20 + *a1;
      v5 = *a2 + 48 * v20;
      v6 = *(_QWORD **)v5;
      *(_QWORD *)(v4 + 16) = 0;
      for ( *(__m128i *)v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
            (_QWORD *)v5 != v6;
            ++*(_QWORD *)(v4 + 16) )
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
        v8 = qalloc_or_throw();
        *(_QWORD *)(v8 + 16) = -1;
        v9 = (_QWORD *)v8;
        *(_DWORD *)(v8 + 24) = 70;
        *(_QWORD *)(v8 + 28) = -1;
        sub_2561F0(v8 + 16, v7 + 2);
        *v9 = v4;
        v10 = *(_QWORD **)(v4 + 8);
        v9[1] = v10;
        *v10 = v9;
        *(_QWORD *)(v4 + 8) = v9;
      }
      *(_QWORD *)(v4 + 24) = 0;
      *(_OWORD *)(v4 + 32) = 0;
      v19 = *(_QWORD *)(v5 + 32);
      if ( v19 )
      {
        v12 = qalloc_or_throw();
        *(_QWORD *)(v4 + 40) = v19;
        v13 = v12;
        v14 = 0;
        for ( *(_QWORD *)(v4 + 24) = v12; ; v13 = *(_QWORD *)(v4 + 24) )
        {
          v15 = 88 * v14 + v13;
          v16 = *(_QWORD *)(v5 + 24) + 88 * v14;
          *(_DWORD *)(v15 + 8) = 0;
          v17 = v16;
          *(_QWORD *)v15 = -1;
          *(_QWORD *)(v15 + 12) = -1;
          *(_QWORD *)(v15 + 48) = 0;
          *(_DWORD *)(v15 + 56) = 0;
          sub_256770(v15, v16);
          *(_QWORD *)(v15 + 64) = 0;
          *(_OWORD *)(v15 + 72) = 0;
          if ( *(_QWORD *)(v17 + 72) )
          {
            n = *(_QWORD *)(v17 + 72);
            v18 = (void *)qalloc_or_throw();
            *(_QWORD *)(v15 + 64) = v18;
            ++v14;
            *(_QWORD *)(v15 + 80) = n;
            memcpy(v18, *(const void **)(v17 + 64), n);
            *(_QWORD *)(v15 + 72) = n;
            if ( v19 == v14 )
            {
LABEL_12:
              *(_QWORD *)(v4 + 32) = v19;
              break;
            }
          }
          else if ( v19 == ++v14 )
          {
            goto LABEL_12;
          }
        }
      }
      ++v20;
    }
    while ( a4 != v20 );
  }
  a1[1] = a4;
  return a1;
}

