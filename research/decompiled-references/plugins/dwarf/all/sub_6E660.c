_QWORD *__fastcall sub_6E660(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _QWORD *v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rbx
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // r12
  __m128i v15; // xmm0
  __int64 v16; // r13
  char *v17; // rdi
  char v18; // di
  _BYTE *v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rsi
  void *v22; // rax
  _QWORD *v23; // r12
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r13
  __int128 v44; // xmm1
  __int64 v45; // r12
  const __m128i *v46; // rbx
  __m128i v47; // xmm0
  size_t v48; // r14
  void *v49; // rax
  int v50; // [rsp+0h] [rbp-E8h]
  char *s2; // [rsp+8h] [rbp-E0h]
  __int64 v52; // [rsp+10h] [rbp-D8h]
  __int64 v53; // [rsp+10h] [rbp-D8h]
  __int64 v54; // [rsp+18h] [rbp-D0h]
  __int64 v55; // [rsp+18h] [rbp-D0h]
  __int64 v56; // [rsp+20h] [rbp-C8h]
  __int64 v57; // [rsp+28h] [rbp-C0h]
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __m128i v59; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD *v60; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h]
  _QWORD *v62; // [rsp+58h] [rbp-90h]
  __int64 v63; // [rsp+60h] [rbp-88h]
  __int64 v64; // [rsp+68h] [rbp-80h]
  _QWORD *v65; // [rsp+70h] [rbp-78h] BYREF
  __int128 v66; // [rsp+78h] [rbp-70h]
  char *s1; // [rsp+90h] [rbp-58h] BYREF
  __int128 v68; // [rsp+98h] [rbp-50h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-40h]

  v60 = a1;
  LODWORD(s2) = (_DWORD)a3;
  v69 = __readfsqword(0x28u);
  if ( a3 && *a3 == 36 )
  {
    v18 = a3[1];
    v19 = a3 + 1;
    if ( !v18 )
      goto LABEL_31;
    while ( (unsigned int)v18 <= 0x7F && !islower(v18) && isxdigit(v18) )
    {
      v18 = *++v19;
      if ( !v18 )
        goto LABEL_31;
    }
  }
  v3 = (_QWORD *)a2[12];
  v65 = nullptr;
  v59.m128i_i64[1] = (__int64)(a2 + 10);
  v56 = (__int64)v3;
  v66 = 0;
  if ( v3 == a2 + 10 )
  {
LABEL_31:
    v20 = 0;
    goto LABEL_48;
  }
  do
  {
    v59.m128i_i64[0] = *(_QWORD *)(v56 + 40);
    if ( (unsigned __int8)sub_6DB70(v59.m128i_i64[0]) )
    {
      v57 = *(_QWORD *)(v59.m128i_i64[0] + 72);
      v58 = *(_QWORD *)(v57 + 288);
      if ( v58 )
      {
        v54 = 0;
        LODWORD(v52) = 0;
        do
        {
          v8 = (_QWORD *)(*(_QWORD *)(v57 + 280) + v54);
          v9 = *(_QWORD *)(sub_878F0(
                             *(_DWORD *)(v57 + 280) + (int)v54,
                             (_DWORD)a2,
                             v4,
                             v5,
                             v6,
                             v7,
                             v50,
                             (_DWORD)s2,
                             v52,
                             v54,
                             v56,
                             v57,
                             v58,
                             v59.m128i_i32[0],
                             v59.m128i_i64[1])
                         + 8);
          v10 = 0;
          if ( v9 )
          {
            while ( 1 )
            {
              v68 = 0;
              s1 = nullptr;
              sub_963A0(v8, (unsigned int)v10, &s1);
              v11 = (char *)::src;
              if ( (_QWORD)v68 )
                v11 = s1;
              LODWORD(a2) = (_DWORD)s2;
              if ( !strcmp(v11, s2) )
                break;
              if ( s1 )
              {
                *(_QWORD *)&v68 = 0;
                qfree(s1);
              }
              if ( v9 == ++v10 )
                goto LABEL_24;
            }
            v13 = *((_QWORD *)&v66 + 1);
            v12 = v66;
            v4 = v66 + 1;
            if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
            {
              v21 = qvector_reserve(&v65, 0, v4, 48);
              v22 = *((void **)&v66 + 1);
              *((_QWORD *)&v66 + 1) = v13;
              v23 = v65;
              src = v22;
              if ( (__int64)v66 - 1 >= 0 )
              {
                v64 = v21;
                v62 = v8;
                v24 = v21;
                v63 = v10;
                v25 = v65;
                v26 = v66 - 1;
                do
                {
                  *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)v25);
                  v27 = v25[2];
                  v28 = _mm_loadu_si128((const __m128i *)(v25 + 3));
                  v25[2] = 0;
                  *(_QWORD *)(v24 + 16) = v27;
                  *(__m128i *)(v24 + 24) = v28;
                  v29 = v25[5];
                  v25[4] = 0;
                  *(_QWORD *)(v24 + 40) = v29;
                  v30 = v25[2];
                  if ( v30 )
                  {
                    v25[3] = 0;
                    qfree(v30);
                  }
                  v25 += 6;
                  v24 += 48;
                }
                while ( v26-- != 0 );
                v8 = v62;
                v10 = v63;
                v21 = v64;
                v23 = v65;
              }
              v62 = (_QWORD *)v21;
              qfree(v23);
              a2 = v62;
              *((_QWORD *)&v66 + 1) = src;
              v12 = v66;
              v65 = v62;
            }
            else
            {
              a2 = v65;
            }
            v14 = &a2[6 * v12];
            *(_OWORD *)v14 = 0;
            *(_OWORD *)(v14 + 3) = 0;
            v15 = _mm_loadl_epi64(&v59);
            *(_QWORD *)&v66 = v66 + 1;
            v14[2] = 0;
            v14[5] = -1;
            *(__m128i *)v14 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)v8);
            if ( v14 + 2 != &s1 )
            {
              v16 = v68;
              if ( (unsigned __int64)v68 > 1 )
              {
                src = s1;
                v32 = (void *)qvector_reserve(v14 + 2, 0, v68, 1);
                v14[2] = v32;
                a2 = src;
                v14[3] = v16;
                memmove(v32, a2, v16 - 1);
                *(_BYTE *)(v14[2] + v16 - 1) = 0;
              }
            }
            v17 = s1;
            v14[5] = v10 + 1;
            if ( v17 )
            {
              *(_QWORD *)&v68 = 0;
              qfree(v17);
            }
          }
LABEL_24:
          v52 = v53 + 1;
          v54 = v55 + 264;
        }
        while ( v58 != v52 );
      }
    }
    v56 = std::_Rb_tree_increment(v56);
  }
  while ( v56 != v59.m128i_i64[1] );
  if ( !(_QWORD)v66 )
  {
    v35 = v65;
    if ( v65 )
    {
      v20 = 0;
LABEL_47:
      *(_QWORD *)&v66 = 0;
      qfree(v35);
      goto LABEL_48;
    }
    goto LABEL_31;
  }
  v33 = operator new(0x30u);
  v34 = v66;
  *(_DWORD *)(v33 + 8) = 1;
  v20 = v33;
  *(_QWORD *)(v33 + 16) = 0;
  *(_QWORD *)v33 = &off_C86E0;
  *(_OWORD *)(v33 + 24) = 0;
  if ( v34 )
  {
    v41 = qalloc_or_throw(48 * v34);
    *(_QWORD *)(v20 + 16) = v41;
    v42 = v41;
    v43 = 0;
    v44 = 0;
    *(_QWORD *)(v20 + 32) = v34;
    while ( 1 )
    {
      v45 = 48 * v43 + v42;
      v46 = (const __m128i *)&v65[6 * v43];
      v47 = _mm_loadu_si128(v46);
      *(_OWORD *)(v45 + 24) = v44;
      *(_QWORD *)(v45 + 16) = 0;
      *(__m128i *)v45 = v47;
      v48 = v46[1].m128i_u64[1];
      if ( v48 )
      {
        v49 = (void *)qalloc_or_throw(v46[1].m128i_i64[1]);
        *(_QWORD *)(v45 + 16) = v49;
        *(_QWORD *)(v45 + 32) = v48;
        memcpy(v49, (const void *)v46[1].m128i_i64[0], v48);
        *(_QWORD *)(v45 + 24) = v48;
        v44 = 0;
      }
      ++v43;
      *(_QWORD *)(v45 + 40) = v46[2].m128i_i64[1];
      if ( v34 == v43 )
        break;
      v42 = *(_QWORD *)(v20 + 16);
    }
    *(_QWORD *)(v20 + 24) = v34;
  }
  v35 = v65;
  *(_DWORD *)(v20 + 40) = -1;
  if ( v35 )
  {
    v36 = v66;
    if ( (_QWORD)v66 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[6 * v37];
        v39 = v38[2];
        if ( v39 )
        {
          v38[3] = 0;
          qfree(v39);
          v35 = v65;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    goto LABEL_47;
  }
LABEL_48:
  *v60 = v20;
  return v60;
}
