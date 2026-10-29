__int64 __fastcall sub_199860(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  char **v9; // r14
  char **v10; // r15
  unsigned __int64 v11; // r8
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rbx
  char **v19; // r15
  __int64 v20; // rbx
  void *v21; // rax
  char *v22; // rsi
  void *v23; // rbx
  __m128i v24; // xmm2
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-C8h] BYREF
  size_t n; // [rsp+10h] [rbp-B8h]
  _QWORD *v29; // [rsp+18h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int128 v32; // [rsp+48h] [rbp-80h]
  __int64 v33; // [rsp+58h] [rbp-70h]
  char **v34; // [rsp+60h] [rbp-68h]
  __int128 v35; // [rsp+68h] [rbp-60h]
  __int64 v36; // [rsp+78h] [rbp-50h]
  int v37; // [rsp+80h] [rbp-48h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v1 = 0;
  v38 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( (_DWORD)v2 )
  {
    v4 = (int)v2;
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 < v4 )
    {
      v25 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v4 )
      {
        v26 = qvector_reserve();
        *(_QWORD *)a1 = v26;
        v25 = v26;
        v5 = *(_QWORD *)(a1 + 8);
      }
      memset((void *)(v25 + 8 * v5), 0, 8 * (v4 - v5));
      *(_QWORD *)(a1 + 8) = v4;
    }
    else if ( v4 != v5 )
    {
      *(_QWORD *)(a1 + 8) = v4;
    }
    v7 = *(_QWORD *)(a1 + 32);
    v30[2] = 0;
    v8 = *(_QWORD *)(v7 + 480);
    v30[0] = &off_4CB3E8;
    v30[3] = 0;
    v30[1] = v8;
    v31 = 0;
    v33 = a1;
    v34 = nullptr;
    v36 = -1;
    v37 = -1;
    v29 = v30;
    v32 = 0;
    v35 = 0;
    sub_32D9C0(v30, v7);
    *(_QWORD *)(v33 + 8) = 0;
    v9 = v34;
    v10 = &v34[7 * v35];
    if ( v34 != v10 )
    {
      do
      {
        v11 = (unsigned __int64)v9[1];
        v12 = *v9;
        if ( *(_QWORD *)&(*v9)[8 * v11 - 8] )
        {
          v13 = (int)v11;
          v14 = &v12[8 * (int)v11 - 8];
          while ( 1 )
          {
            if ( (int)v13 <= 0 )
            {
              v15 = v33;
              if ( *(_QWORD *)(v33 + 8) >= v11 )
                goto LABEL_13;
              goto LABEL_28;
            }
            v14 -= 8;
            if ( !*((_QWORD *)v14 + 1) )
              break;
            v13 = (int)v13 - 1;
          }
          v20 = (8 * v13) >> 3;
          memmove(v12, &v12[8 * v13], 8 * v11 - 8 * v13);
          v11 = (unsigned __int64)&v9[1][-v20];
          v9[1] = (char *)v11;
          v15 = v33;
          if ( *(_QWORD *)(v33 + 8) >= v11 )
            goto LABEL_13;
LABEL_28:
          v27.m128i_i64[0] = v11;
          n = 8 * v11;
          v21 = (void *)qalloc_or_throw();
          v22 = *v9;
          v23 = v21;
          v27 = _mm_unpacklo_epi64((__m128i)v27.m128i_u64[0], (__m128i)v27.m128i_u64[0]);
          memcpy(v21, v22, n);
          if ( *(_QWORD *)v15 )
          {
            *(_QWORD *)(v15 + 8) = 0;
            qfree();
          }
          v24 = _mm_load_si128(&v27);
          *(_QWORD *)v15 = v23;
          *(__m128i *)(v15 + 8) = v24;
          *(_QWORD *)(v15 + 24) = v9[3];
          *(_QWORD *)(v15 + 32) = v9[4];
          *(_DWORD *)(v15 + 40) = *((_DWORD *)v9 + 10);
          *(_DWORD *)(v15 + 44) = *((_DWORD *)v9 + 11);
          *(_DWORD *)(v15 + 48) = *((_DWORD *)v9 + 12);
        }
LABEL_13:
        v9 += 7;
      }
      while ( v10 != v9 );
      v10 = v34;
      v9 = v34;
    }
    v1 = 1;
    if ( !*(_QWORD *)(v33 + 8) )
    {
      *(_DWORD *)(a1 + 44) = -1;
      v1 = 0;
    }
    v30[0] = &off_4CB3E8;
    if ( v10 )
    {
      v16 = v35;
      if ( (_QWORD)v35 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = &v10[v17];
          if ( *v19 )
          {
            v19[1] = nullptr;
            qfree();
            v9 = v34;
          }
          ++v18;
          v10 = v9;
          v17 += 7;
        }
        while ( v16 != v18 );
      }
      *(_QWORD *)&v35 = 0;
      qfree();
    }
    v30[0] = &unk_4D8DC0;
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree();
    }
    qfree();
  }
  return v1;
}

