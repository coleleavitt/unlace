unsigned __int64 __fastcall sub_18CB00(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int8 a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned __int8 v8; // r14
  char v9; // r12
  __int64 v10; // rbp
  unsigned __int8 v12; // al
  __int64 v14; // r15
  __int64 *v15; // r13
  const __m128i **v16; // rbp
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  signed __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r12
  __m128i *v24; // rax
  __m128i v25; // xmm1
  int v26; // ecx
  __m128i v27; // xmm0
  int v28; // edx
  __int32 v29; // edi
  __m128i *v30; // rsi
  __m128i v31; // xmm0
  int v32; // r14d
  unsigned __int8 v33; // bp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbp
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  const __m128i *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __m128i v47; // xmm0
  bool v48; // cf
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r15
  __int64 v55; // rdx
  const __m128i *v56; // rcx
  __int64 v57; // rsi
  __m128i v58; // xmm0
  _DWORD *v59; // [rsp+0h] [rbp-A8h]
  int v60; // [rsp+Ch] [rbp-9Ch]
  __int64 v61[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i *v62; // [rsp+20h] [rbp-88h] BYREF
  __int128 v63; // [rsp+28h] [rbp-80h]
  __int64 v64[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v65; // [rsp+50h] [rbp-58h]
  __int128 v66; // [rsp+58h] [rbp-50h]
  unsigned __int64 v67; // [rsp+68h] [rbp-40h]

  while ( 1 )
  {
    v8 = a3;
    v9 = a3;
    v10 = a5;
    v67 = __readfsqword(0x28u);
    v12 = *(_BYTE *)a5;
    if ( *(_BYTE *)a5 != 4 )
      goto LABEL_2;
    v14 = *(_QWORD *)(a5 + 8);
    if ( (unsigned int)(*(_DWORD *)v14 - 12) > 1 )
      break;
    v32 = (unsigned __int8)a6;
    v33 = a3;
    sub_18CB00(a1, a2, a3, (_DWORD *)v14, v14 + 32, (unsigned __int8)a6);
    a5 = v14 + 48;
    if ( *(_DWORD *)v14 == 13 )
      v33 = v9 ^ 1;
    a6 = v32;
    a4 = (_DWORD *)v14;
    a3 = v33;
  }
  if ( *(_DWORD *)v14 != 20 )
  {
    if ( (unsigned int)(*a4 - 25) <= 1 || !(_BYTE)a6 )
      return v67 - __readfsqword(0x28u);
LABEL_11:
    v15 = (__int64 *)a1[6];
    v62 = nullptr;
    v61[0] = 0;
    v61[1] = 0;
    v63 = 0;
    if ( !*v15 )
      sub_18B8C0(0.0);
    v66 = 0;
    v64[0] = 0;
    v64[1] = 0;
    v65 = 0;
    sub_127FE0(*v15, v64, v10, 0, a5, a6, 0.0, a8);
    v16 = sub_18C740((unsigned __int64 **)v15, &v62, (unsigned __int8 *)v10, v64, v61, 0.0);
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
    }
    qfree(v64[0]);
    qfree(v61[0]);
    if ( v16 )
      sub_18C180(a2, v16, v9, 0.0);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree((__int64)v62);
    }
    return v67 - __readfsqword(0x28u);
  }
  v60 = a6;
  v59 = a4;
  v17 = sub_11FD80((char *)(v14 + 48), v64, 1);
  a4 = v59;
  a6 = v60;
  if ( v17
    && (-v64[0] & ~v64[0]) == 0
    && *(_BYTE *)(v14 + 32) == 10
    && (v18 = *(_QWORD *)(v14 + 40), *(_BYTE *)v18 == 5) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL);
    if ( v19 < a1[9] )
      sub_18C000((const __m128i **)a2, v19 & v64[0], a1[8], v9);
  }
  else
  {
    v12 = *(_BYTE *)v10;
LABEL_2:
    if ( v12 != 2 )
    {
      if ( (unsigned int)(*a4 - 25) <= 1 )
        return v67 - __readfsqword(0x28u);
      if ( v12 == 10 )
      {
        v20 = *(_QWORD *)(v10 + 8);
        if ( *(_BYTE *)v20 == 5 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL);
          if ( v21 < a1[9] )
          {
            v22 = a2[1];
            v23 = a1[8];
            if ( !v22 )
            {
              if ( a2[2] )
              {
                v49 = *a2;
              }
              else
              {
                v51 = qvector_reserve((__int64)a2, 0, 1, 32);
                v52 = *a2;
                v53 = a2[1];
                v54 = a2[2];
                v49 = v51;
                v55 = v51;
                a2[2] = 0;
                v56 = (const __m128i *)v52;
                v57 = v53 - 1;
                if ( v57 >= 0 )
                {
                  do
                  {
                    v58 = _mm_loadu_si128(v56);
                    v55 += 32;
                    v56 += 2;
                    *(__m128i *)(v55 - 32) = v58;
                    *(__m128i *)(v55 - 16) = _mm_loadu_si128(v56 - 1);
                    v48 = v57-- == 0;
                  }
                  while ( !v48 );
                  v52 = *a2;
                }
                qfree(v52);
                *a2 = v49;
                v22 = a2[1];
                a2[2] = v54;
              }
              v50 = v49 + 32 * v22;
              *(_QWORD *)(v50 + 16) = 0;
              *(_DWORD *)(v50 + 24) = 0;
              *(_OWORD *)v50 = 0;
              v22 = a2[1] + 1;
              a2[1] = v22;
            }
            v24 = (__m128i *)*a2;
            if ( 32 * v22 )
            {
              v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
              v26 = v21 - v23;
              do
              {
                v31 = _mm_loadu_si128(v24);
                if ( v8 )
                {
                  v27 = _mm_sub_epi64(v31, v25);
                  v28 = -1;
                }
                else
                {
                  v27 = _mm_add_epi64(v31, v25);
                  v28 = 1;
                }
                *v24 = v27;
                if ( v26 < 0 )
                {
                  v29 = v24[1].m128i_i32[1];
                  v30 = (__m128i *)((char *)v24 + 20);
                }
                else if ( v26 )
                {
                  v29 = v24[1].m128i_i32[0];
                  v30 = v24 + 1;
                }
                else
                {
                  v29 = v24[1].m128i_i32[2];
                  v30 = (__m128i *)((char *)v24 + 24);
                }
                v24 += 2;
                v30->m128i_i32[0] = v29 + v28;
              }
              while ( v24 != (__m128i *)(*a2 + 32 * a2[1]) );
            }
          }
          return v67 - __readfsqword(0x28u);
        }
      }
      if ( !(_BYTE)a6 )
        return v67 - __readfsqword(0x28u);
      goto LABEL_11;
    }
    v34 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(_DWORD *)(v10 + 4), 1);
    v35 = a2[1];
    v36 = v34;
    if ( !v35 )
    {
      if ( a2[2] )
      {
        v39 = *a2;
      }
      else
      {
        v41 = qvector_reserve((__int64)a2, 0, 1, 32);
        v42 = a2[1];
        v43 = a2[2];
        a2[2] = 0;
        v44 = (const __m128i *)*a2;
        v39 = v41;
        v45 = v42 - 1;
        if ( v45 >= 0 )
        {
          v46 = v41;
          do
          {
            v47 = _mm_loadu_si128(v44);
            v46 += 32;
            v44 += 2;
            *(__m128i *)(v46 - 32) = v47;
            *(__m128i *)(v46 - 16) = _mm_loadu_si128(v44 - 1);
            v48 = v45-- == 0;
          }
          while ( !v48 );
          v44 = (const __m128i *)*a2;
        }
        qfree((__int64)v44);
        *a2 = v39;
        v35 = a2[1];
        a2[2] = v43;
      }
      v40 = v39 + 32 * v35;
      *(_QWORD *)(v40 + 16) = 0;
      *(_DWORD *)(v40 + 24) = 0;
      *(_OWORD *)v40 = 0;
      v35 = a2[1] + 1;
      a2[1] = v35;
    }
    v37 = (_QWORD *)*a2;
    if ( 32 * v35 )
    {
      v38 = -v36;
      if ( !v9 )
        v38 = v36;
      do
      {
        v37[1] += v38;
        *v37 += v38;
        v37 += 4;
      }
      while ( v37 != (_QWORD *)(*a2 + 32 * a2[1]) );
    }
  }
  return v67 - __readfsqword(0x28u);
}

