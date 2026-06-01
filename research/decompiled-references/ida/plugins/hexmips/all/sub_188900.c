unsigned __int64 __fastcall sub_188900(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int8 a3,
        _DWORD *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int8 v6; // r14
  char v7; // r12
  __int64 v8; // rbp
  unsigned __int8 v10; // al
  __int64 v12; // r15
  __int64 *v13; // r13
  const __m128i **v14; // rbp
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  signed __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r12
  __m128i *v22; // rax
  __m128i v23; // xmm1
  int v24; // ecx
  __m128i v25; // xmm0
  int v26; // edx
  __int32 v27; // edi
  __m128i *v28; // rsi
  __m128i v29; // xmm0
  unsigned __int8 v30; // r14
  unsigned __int8 v31; // bp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbp
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r14
  const __m128i *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rdx
  __m128i v45; // xmm0
  bool v46; // cf
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r15
  __int64 v53; // rdx
  const __m128i *v54; // rcx
  __int64 v55; // rsi
  __m128i v56; // xmm0
  _DWORD *v57; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v58; // [rsp+Ch] [rbp-9Ch]
  __int64 v59[2]; // [rsp+10h] [rbp-98h] BYREF
  const __m128i *v60; // [rsp+20h] [rbp-88h] BYREF
  __int128 v61; // [rsp+28h] [rbp-80h]
  __int64 v62[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v63; // [rsp+50h] [rbp-58h]
  __int128 v64; // [rsp+58h] [rbp-50h]
  unsigned __int64 v65; // [rsp+68h] [rbp-40h]

  while ( 1 )
  {
    v6 = a3;
    v7 = a3;
    v8 = a5;
    v65 = __readfsqword(0x28u);
    v10 = *(_BYTE *)a5;
    if ( *(_BYTE *)a5 != 4 )
      goto LABEL_2;
    v12 = *(_QWORD *)(a5 + 8);
    if ( (unsigned int)(*(_DWORD *)v12 - 12) > 1 )
      break;
    v30 = a6;
    v31 = a3;
    sub_188900(a1, a2, a3, v12, v12 + 32, a6);
    a5 = v12 + 48;
    if ( *(_DWORD *)v12 == 13 )
      v31 = v7 ^ 1;
    a6 = v30;
    a4 = (_DWORD *)v12;
    a3 = v31;
  }
  if ( *(_DWORD *)v12 != 20 )
  {
    if ( (unsigned int)(*a4 - 25) <= 1 || !a6 )
      return v65 - __readfsqword(0x28u);
LABEL_11:
    v13 = (__int64 *)a1[6];
    v60 = nullptr;
    v59[0] = 0;
    v59[1] = 0;
    v61 = 0;
    if ( !*v13 )
      sub_1876C0();
    v64 = 0;
    v62[0] = 0;
    v62[1] = 0;
    v63 = 0;
    sub_123DE0(*v13, v62, v8, 0);
    v14 = sub_188540(v13, &v60, (unsigned __int8 *)v8, v62, v59);
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
    qfree();
    qfree();
    if ( v14 )
      sub_187F80(a2, v14, v7);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
    return v65 - __readfsqword(0x28u);
  }
  v58 = a6;
  v57 = a4;
  v15 = sub_11BB80((char *)(v12 + 48), v62, 1u);
  a4 = v57;
  a6 = v58;
  if ( v15
    && (-v62[0] & ~v62[0]) == 0
    && *(_BYTE *)(v12 + 32) == 10
    && (v16 = *(_QWORD *)(v12 + 40), *(_BYTE *)v16 == 5) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
    if ( v17 < a1[9] )
      sub_187E00((const __m128i **)a2, v17 & v62[0], a1[8], v7);
  }
  else
  {
    v10 = *(_BYTE *)v8;
LABEL_2:
    if ( v10 != 2 )
    {
      if ( (unsigned int)(*a4 - 25) <= 1 )
        return v65 - __readfsqword(0x28u);
      if ( v10 == 10 )
      {
        v18 = *(_QWORD *)(v8 + 8);
        if ( *(_BYTE *)v18 == 5 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL);
          if ( v19 < a1[9] )
          {
            v20 = a2[1];
            v21 = a1[8];
            if ( !v20 )
            {
              if ( a2[2] )
              {
                v47 = *a2;
              }
              else
              {
                v49 = qvector_reserve();
                v50 = *a2;
                v51 = a2[1];
                v52 = a2[2];
                v47 = v49;
                v53 = v49;
                a2[2] = 0;
                v54 = (const __m128i *)v50;
                v55 = v51 - 1;
                if ( v55 >= 0 )
                {
                  do
                  {
                    v56 = _mm_loadu_si128(v54);
                    v53 += 32;
                    v54 += 2;
                    *(__m128i *)(v53 - 32) = v56;
                    *(__m128i *)(v53 - 16) = _mm_loadu_si128(v54 - 1);
                    v46 = v55-- == 0;
                  }
                  while ( !v46 );
                }
                qfree();
                *a2 = v47;
                v20 = a2[1];
                a2[2] = v52;
              }
              v48 = v47 + 32 * v20;
              *(_QWORD *)(v48 + 16) = 0;
              *(_DWORD *)(v48 + 24) = 0;
              *(_OWORD *)v48 = 0;
              v20 = a2[1] + 1;
              a2[1] = v20;
            }
            v22 = (__m128i *)*a2;
            if ( 32 * v20 )
            {
              v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
              v24 = v19 - v21;
              do
              {
                v29 = _mm_loadu_si128(v22);
                if ( v6 )
                {
                  v25 = _mm_sub_epi64(v29, v23);
                  v26 = -1;
                }
                else
                {
                  v25 = _mm_add_epi64(v29, v23);
                  v26 = 1;
                }
                *v22 = v25;
                if ( v24 < 0 )
                {
                  v27 = v22[1].m128i_i32[1];
                  v28 = (__m128i *)((char *)v22 + 20);
                }
                else if ( v24 )
                {
                  v27 = v22[1].m128i_i32[0];
                  v28 = v22 + 1;
                }
                else
                {
                  v27 = v22[1].m128i_i32[2];
                  v28 = (__m128i *)((char *)v22 + 24);
                }
                v22 += 2;
                v28->m128i_i32[0] = v27 + v26;
              }
              while ( v22 != (__m128i *)(*a2 + 32 * a2[1]) );
            }
          }
          return v65 - __readfsqword(0x28u);
        }
      }
      if ( !a6 )
        return v65 - __readfsqword(0x28u);
      goto LABEL_11;
    }
    v32 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 1);
    v33 = a2[1];
    v34 = v32;
    if ( !v33 )
    {
      if ( a2[2] )
      {
        v37 = *a2;
      }
      else
      {
        v39 = qvector_reserve();
        v40 = a2[1];
        v41 = a2[2];
        a2[2] = 0;
        v42 = (const __m128i *)*a2;
        v37 = v39;
        v43 = v40 - 1;
        if ( v43 >= 0 )
        {
          v44 = v39;
          do
          {
            v45 = _mm_loadu_si128(v42);
            v44 += 32;
            v42 += 2;
            *(__m128i *)(v44 - 32) = v45;
            *(__m128i *)(v44 - 16) = _mm_loadu_si128(v42 - 1);
            v46 = v43-- == 0;
          }
          while ( !v46 );
        }
        qfree();
        *a2 = v37;
        v33 = a2[1];
        a2[2] = v41;
      }
      v38 = v37 + 32 * v33;
      *(_QWORD *)(v38 + 16) = 0;
      *(_DWORD *)(v38 + 24) = 0;
      *(_OWORD *)v38 = 0;
      v33 = a2[1] + 1;
      a2[1] = v33;
    }
    v35 = (_QWORD *)*a2;
    if ( 32 * v33 )
    {
      v36 = -v34;
      if ( !v7 )
        v36 = v34;
      do
      {
        v35[1] += v36;
        *v35 += v36;
        v35 += 4;
      }
      while ( v35 != (_QWORD *)(*a2 + 32 * a2[1]) );
    }
  }
  return v65 - __readfsqword(0x28u);
}

