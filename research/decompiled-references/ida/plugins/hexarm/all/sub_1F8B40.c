unsigned __int64 __fastcall sub_1F8B40(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbp
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 j; // r14
  __int64 v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rbp
  int v28; // ebx
  __int64 k; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-110h]
  __int64 i; // [rsp+8h] [rbp-108h]
  __m128 v47; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v48[2]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C8h]
  __m128i v50; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-B0h]
  __m128i v52; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+78h] [rbp-98h]
  unsigned __int64 v54; // [rsp+80h] [rbp-90h]
  __int64 v55[2]; // [rsp+88h] [rbp-88h] BYREF
  __int64 v56; // [rsp+98h] [rbp-78h]
  __m128i v57; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-60h]
  __m128i v59; // [rsp+B8h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+D0h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_DWORD *)(a2 + 64) )
    *(_QWORD *)a1 = qvector_reserve();
  for ( i = *(_QWORD *)(a2 + 520); i; i = *(_QWORD *)(i + 8) )
  {
    v3 = *(_QWORD *)a1;
    v48[0] = 0;
    v50 = 0;
    v4 = *(_QWORD *)(a1 + 16);
    v48[1] = 0;
    v49 = 0;
    v47 = _mm_loadh_ps((const double *)(i + 48));
    v51 = 0;
    v52 = 0;
    if ( (unsigned __int64)&v47 < v3 || (unsigned __int64)&v47 >= v3 + 80 * v4 )
    {
      v34 = *(_QWORD *)(a1 + 8);
      if ( v4 < v34 + 1 )
      {
        v39 = qvector_reserve();
        *(_QWORD *)a1 = v39;
        v3 = v39;
        v34 = *(_QWORD *)(a1 + 8);
      }
      v35 = v3 + 80 * v34;
      *(__m128 *)v35 = v47;
      sub_63A00((__int64 *)(v35 + 16), (__int64)v48);
      v36 = v49;
      v37 = _mm_loadu_si128(&v50);
      v49 = 0;
      v50 = 0;
      *(_QWORD *)(v35 + 32) = v36;
      *(__m128i *)(v35 + 40) = v37;
      v38 = _mm_load_si128(&v52);
      *(_QWORD *)(v35 + 56) = v51;
      *(__m128i *)(v35 + 64) = v38;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v53 = i;
      v54 = v47.m128_u64[1];
      sub_63A00(v55, (__int64)v48);
      v5 = v49;
      v6 = _mm_loadu_si128(&v50);
      v49 = 0;
      v7 = *(_QWORD *)a1;
      v50 = 0;
      v56 = v5;
      v57 = v6;
      v8 = _mm_load_si128(&v52);
      v58 = v51;
      v9 = *(_QWORD *)(a1 + 8);
      v51 = 0;
      v59 = v8;
      v52 = 0;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
      {
        v43 = qvector_reserve();
        *(_QWORD *)a1 = v43;
        v7 = v43;
        v9 = *(_QWORD *)(a1 + 8);
      }
      v10 = v7 + 80 * v9;
      *(_QWORD *)v10 = v53;
      *(_QWORD *)(v10 + 8) = v54;
      sub_63A00((__int64 *)(v10 + 16), (__int64)v55);
      v11 = _mm_loadu_si128(&v57);
      *(_QWORD *)(v10 + 32) = v56;
      *(__m128i *)(v10 + 40) = v11;
      v12 = _mm_load_si128(&v59);
      *(_QWORD *)(v10 + 56) = v58;
      *(__m128i *)(v10 + 64) = v12;
      qfree();
      v13 = v51;
      ++*(_QWORD *)(a1 + 8);
      if ( v13 )
      {
        v44 = v52.m128i_i64[0];
        if ( v52.m128i_i64[0] )
        {
          v14 = 0;
          do
          {
            v15 = (_QWORD *)(v13 + 96 * v14);
            v16 = v15[5];
            if ( v16 )
            {
              v17 = v15[6];
              if ( v17 )
              {
                for ( j = 0; j != v17; ++j )
                {
                  v19 = v16 + 40 * j;
                  if ( *(_QWORD *)(v19 + 16) )
                  {
                    *(_QWORD *)(v19 + 24) = 0;
                    qfree();
                  }
                  qfree();
                  v16 = v15[5];
                }
              }
              v15[6] = 0;
              qfree();
            }
            if ( v15[2] )
            {
              v15[3] = 0;
              qfree();
            }
            ++v14;
            qfree();
            v13 = v51;
          }
          while ( v44 != v14 );
        }
        v52.m128i_i64[0] = 0;
        qfree();
      }
    }
    if ( v49 )
    {
      v50.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  v20 = *(_QWORD **)(a2 + 800);
  v21 = (_QWORD *)*v20;
  if ( *v20 && v20[1] )
  {
    v22 = (_QWORD *)v21[1];
LABEL_28:
    while ( v21 != v22 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(a2 + 432) + 104LL * *((int *)v22 + 12);
        if ( (*(_BYTE *)(v23 + 27) & 2) != 0 )
        {
          v24 = v22[3];
          if ( *(_BYTE *)v24 == 15 && *(_DWORD *)(v24 + 4) <= *(_DWORD *)(v23 + 88) )
            sub_1F2480(
              (_QWORD *)(*(_QWORD *)a1 + 80LL * *((int *)v22 + 18)),
              *((_DWORD *)v22 + 12),
              v22[7],
              v24,
              *((_BYTE *)v22 + 76));
        }
        if ( (*v22 & 2) != 0 )
          break;
        v25 = (_QWORD *)v22[2];
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
          v40 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
          v41 = *v40;
          if ( (*v40 & 2) == 0 )
          {
            while ( (_QWORD *)v40[2] == v22 )
            {
              v22 = v40;
              v42 = v41 & 0xFFFFFFFFFFFFFFFCLL;
              v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v41 & 2) != 0 )
              {
                v22 = (_QWORD *)v42;
                goto LABEL_28;
              }
              v40 = (_QWORD *)v42;
            }
          }
          v22 = v40;
          goto LABEL_28;
        }
        do
        {
          v22 = v25;
          v25 = (_QWORD *)v25[1];
        }
        while ( (*(_BYTE *)v25 & 2) == 0 );
        if ( v21 == v22 )
          goto LABEL_35;
      }
    }
  }
LABEL_35:
  v26 = *(_QWORD *)a1;
  v27 = *(_QWORD *)a1 + 80LL * *(_QWORD *)(a1 + 8);
  if ( v27 != *(_QWORD *)a1 )
  {
    do
    {
      sub_1F8A80(v26);
      v26 += 80;
    }
    while ( v27 != v26 );
  }
  v28 = 0;
  for ( k = 0; (unsigned __int64)v28 < *(_QWORD *)(a2 + 440); k = v28 )
  {
    v30 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(int *)(*(_QWORD *)(a2 + 432) + 104 * k + 92));
    if ( *(_QWORD *)(*v30 + 48LL) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v30 + 64LL) + 432LL) + 104 * k + 27) & 2) != 0 )
    {
      v31 = v30[7];
      v32 = v31 + 96LL * v30[8];
      if ( v31 == v32 )
      {
LABEL_58:
        sub_1F2480(v30, v28, 0, 0, 0);
      }
      else
      {
        while ( v28 != *(_DWORD *)(v31 + 80) || !*(_BYTE *)(v31 + 84) )
        {
          v31 += 96;
          if ( v32 == v31 )
            goto LABEL_58;
        }
      }
    }
    ++v28;
  }
  return v60 - __readfsqword(0x28u);
}

