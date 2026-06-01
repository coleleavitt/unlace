__int64 __fastcall sub_2E8FA0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  size_t *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r14
  size_t v10; // rbx
  _QWORD *v11; // r13
  size_t v12; // rbx
  size_t v13; // r11
  __int64 v14; // rcx
  __m128i v15; // xmm0
  _QWORD *v16; // rdx
  _QWORD *v17; // r15
  unsigned int v18; // ebp
  __int64 *v19; // r13
  __int64 *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v26; // rax
  size_t v27; // rcx
  size_t v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdi
  void *v38; // rax
  void *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  unsigned __int64 v43; // [rsp+0h] [rbp-160h]
  int v45; // [rsp+14h] [rbp-14Ch]
  __int64 v46; // [rsp+18h] [rbp-148h]
  size_t nb; // [rsp+20h] [rbp-140h]
  size_t n; // [rsp+20h] [rbp-140h]
  __int64 na; // [rsp+20h] [rbp-140h]
  __m128i v50; // [rsp+28h] [rbp-138h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-128h]
  _QWORD *v52; // [rsp+40h] [rbp-120h]
  __int64 *v53; // [rsp+48h] [rbp-118h]
  __int64 *v54; // [rsp+50h] [rbp-110h]
  __int64 *v55; // [rsp+58h] [rbp-108h]
  _QWORD *v56; // [rsp+60h] [rbp-100h]
  _QWORD v57[2]; // [rsp+68h] [rbp-F8h] BYREF
  char v58; // [rsp+78h] [rbp-E8h]
  __int64 v59; // [rsp+80h] [rbp-E0h]
  __m128i v60; // [rsp+88h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+98h] [rbp-C8h]
  _QWORD v62[2]; // [rsp+A8h] [rbp-B8h] BYREF
  _BYTE v63[48]; // [rsp+B8h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+100h] [rbp-60h] BYREF
  __int128 v65; // [rsp+108h] [rbp-58h]
  __int64 v66; // [rsp+118h] [rbp-48h]
  unsigned __int64 v67; // [rsp+120h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v55 = &v64;
  v1 = a1[22];
  v62[0] = a1[1];
  v56 = v62;
  v2 = (__int64 *)v63;
  v62[1] = v1;
  v3 = (size_t *)v63;
  v54 = (__int64 *)v63;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v64 );
  v64 = 0;
  v66 = 0;
  v65 = 0;
  if ( v1 )
  {
    v43 = 0;
    v45 = 0;
    do
    {
      v4 = a1[v43 + 19];
      if ( v4 )
      {
        switch_dbctx();
        v5 = *(_QWORD *)(v4 + 80);
        v6 = *(_QWORD *)(v4 + 64);
        v58 = 117;
        v57[1] = v5;
        v57[0] = &off_4AD8F0;
        v59 = 0;
        v7 = (__int64 *)sub_2AF070(v6, v57);
        v53 = v7;
        if ( v7 )
        {
          v8 = *v7;
          v46 = *v7;
          if ( *v7 )
          {
            if ( v7[1] )
            {
              v9 = *(_QWORD **)(v8 + 8);
              if ( (_QWORD *)v8 != v9 )
              {
                while ( 1 )
                {
                  v10 = v3[1];
                  v11 = v9 + 3;
                  if ( v3[2] < v10 + 1 )
                  {
                    v51 = (_QWORD *)v3[2];
                    v26 = qvector_reserve();
                    n = v26;
                    v27 = v3[1];
                    v28 = *v3;
                    v50.m128i_i64[0] = v3[2];
                    v3[2] = (size_t)v51;
                    v29 = v27 - 1;
                    if ( v29 >= 0 )
                    {
                      v51 = v9 + 3;
                      v30 = v29;
                      v52 = v9;
                      v31 = v26;
                      do
                      {
                        v32 = *(_QWORD *)(v28 + 8);
                        *(_QWORD *)v31 = off_4ADBC0;
                        *(_QWORD *)(v31 + 8) = v32;
                        v33 = *(_QWORD *)(v28 + 16);
                        v34 = _mm_loadu_si128((const __m128i *)(v28 + 24));
                        *(_QWORD *)(v28 + 16) = 0;
                        *(_QWORD *)(v31 + 16) = v33;
                        *(__m128i *)(v31 + 24) = v34;
                        v35 = *(_QWORD *)(v28 + 40);
                        *(_QWORD *)(v28 + 32) = 0;
                        *(_QWORD *)(v31 + 40) = v35;
                        LODWORD(v35) = *(_DWORD *)(v28 + 48);
                        *(_QWORD *)v31 = off_4AF460;
                        *(_DWORD *)(v31 + 48) = v35;
                        *(_QWORD *)(v31 + 56) = *(_QWORD *)(v28 + 56);
                        v36 = *(_QWORD *)(v28 + 16);
                        *(_QWORD *)v28 = off_4ADBC0;
                        if ( v36 )
                        {
                          *(_QWORD *)(v28 + 24) = 0;
                          qfree();
                        }
                        v28 += 64LL;
                        v31 += 64;
                      }
                      while ( v30-- != 0 );
                      v11 = v51;
                      v9 = v52;
                    }
                    qfree();
                    v10 = v3[1];
                    *v3 = n;
                    v3[2] = v50.m128i_i64[0];
                  }
                  v12 = *v3 + (v10 << 6);
                  v13 = 0;
                  *(_QWORD *)(v12 + 8) = -1;
                  *(_QWORD *)(v12 + 16) = 0;
                  *(_QWORD *)(v12 + 40) = -1;
                  *(_DWORD *)(v12 + 48) = -2;
                  *(_QWORD *)v12 = off_4AF460;
                  *(_QWORD *)(v12 + 56) = -1;
                  *(_OWORD *)(v12 + 24) = 0;
                  ++v3[1];
                  *(_QWORD *)(v12 + 8) = *v11;
                  v14 = v11[2];
                  if ( v14 )
                  {
                    v50.m128i_i64[0] = v11[2];
                    na = 4 * v14;
                    v38 = (void *)qalloc_or_throw();
                    v39 = memcpy(v38, (const void *)v11[1], na);
                    v14 = v50.m128i_i64[0];
                    v13 = (size_t)v39;
                  }
                  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
                  if ( *(_QWORD *)(v12 + 16) )
                  {
                    *(_QWORD *)(v12 + 24) = 0;
                    nb = v13;
                    v50 = v15;
                    qfree();
                    v15 = _mm_load_si128(&v50);
                    v13 = nb;
                  }
                  *(_QWORD *)(v12 + 16) = v13;
                  *(__m128i *)(v12 + 24) = v15;
                  ++v45;
                  if ( (*v9 & 2) != 0 )
                    goto LABEL_18;
                  v16 = (_QWORD *)v9[2];
                  if ( (*(_BYTE *)v16 & 2) != 0 )
                  {
                    v40 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
                    v41 = *v40;
                    if ( (*v40 & 2) == 0 )
                    {
                      while ( v9 == (_QWORD *)v40[2] )
                      {
                        v9 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                        v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v41 & 2) != 0 )
                          goto LABEL_18;
                        v42 = v40;
                        v40 = v9;
                        v9 = v42;
                      }
                    }
                    v9 = v40;
                    if ( (_QWORD *)v46 == v40 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v9 = v16;
                      v16 = (_QWORD *)v16[1];
                    }
                    while ( (*(_BYTE *)v16 & 2) == 0 );
LABEL_18:
                    if ( (_QWORD *)v46 == v9 )
                      break;
                  }
                }
              }
            }
          }
          sub_2BB640(v53);
          qfree();
        }
      }
      ++v43;
      v3 += 3;
    }
    while ( v43 < a1[22] );
    if ( v45 )
    {
      v61 = 0u;
      v60 = 0;
      if ( sub_2A8870 )
      {
        v60.m128i_i64[0] = (__int64)sub_2A8870;
        v61 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4AF590), (__m128i)(unsigned __int64)sub_2A5E90);
      }
      v17 = v56;
      sub_2E7660(v56, &v60, 1);
      sub_606D0((__int64)&v60);
      sub_2C3530(v17, a1 + 19, 1);
      v18 = 1;
    }
    else
    {
      v18 = 0;
    }
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree();
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = v55;
  v20 = v54;
  do
  {
    v19 -= 3;
    if ( *v19 )
    {
      v21 = v19[1];
      v22 = 0;
      if ( v21 )
      {
        do
        {
          v23 = (_QWORD *)(*v19 + (v22 << 6));
          v24 = v23[2];
          *v23 = off_4ADBC0;
          if ( v24 )
          {
            v23[3] = 0;
            qfree();
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      v19[1] = 0;
      qfree();
    }
  }
  while ( v19 != v20 );
  return v18;
}

