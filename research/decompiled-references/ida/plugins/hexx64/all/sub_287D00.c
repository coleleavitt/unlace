__int64 __fastcall sub_287D00(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v6; // r15d
  __int64 v8; // r14
  __m128i v9; // xmm0
  void *v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r11
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // al
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // [rsp+Ch] [rbp-CCh]
  char v55; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v56; // [rsp+20h] [rbp-B8h] BYREF
  int v57; // [rsp+28h] [rbp-B0h]
  __int64 v58; // [rsp+2Ch] [rbp-ACh]
  void *src[2]; // [rsp+38h] [rbp-A0h]
  __int128 v60; // [rsp+48h] [rbp-90h]
  __int64 v61; // [rsp+60h] [rbp-78h] BYREF
  int v62; // [rsp+68h] [rbp-70h]
  __int64 v63; // [rsp+6Ch] [rbp-6Ch]
  void *v64; // [rsp+80h] [rbp-58h]
  __m128i v65; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+98h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 73 )
    return 2;
  if ( a1[1] && *(_DWORD *)(a2 + 12) != -1 )
    return 1;
  v8 = *(_QWORD *)(a2 + 24);
  v9.m128i_i64[0] = 0;
  v56 = -1;
  v57 = 70;
  v58 = -1;
  *(_OWORD *)src = 0;
  v60 = 0;
  if ( (unsigned __int8)sub_27EE20(a1, v8, &v56, &v55, 0.0) && (a3 || !v55) )
  {
    if ( (_QWORD)v60 )
    {
      v10 = src[1];
      v11 = 0;
      v12 = 0;
      if ( a1[1] )
      {
        v13 = *(_QWORD *)src[1];
LABEL_11:
        v54 = v11;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = *a1 + 56 * v15;
          v17 = *(_QWORD *)(v16 + 40);
          if ( v17 )
            break;
LABEL_23:
          v15 = ++v14;
          if ( v14 >= (unsigned __int64)a1[1] )
          {
            v11 = v54 + 1;
            v12 = v54 + 1;
            if ( v12 >= (unsigned __int64)v60 )
              goto LABEL_16;
            v13 = *((_QWORD *)src[1] + v11);
            goto LABEL_11;
          }
        }
        v18 = *(_QWORD *)(v16 + 32);
        v19 = 0;
        v20 = 0;
        while ( *(_QWORD *)(v18 + 8 * v20) != v13 )
        {
          v20 = ++v19;
          if ( v19 >= v17 )
            goto LABEL_23;
        }
      }
      else
      {
        do
        {
          v21 = v11 + 1;
          v12 = v21;
          if ( v21 >= (unsigned __int64)v60 )
            break;
          v11 = v21 + 1;
          v12 = v11;
        }
        while ( v11 < (unsigned __int64)v60 );
      }
LABEL_16:
      v6 = 6;
      if ( v12 != (_QWORD)v60 )
        goto LABEL_17;
    }
    if ( (unsigned __int8)sub_285490(*(_QWORD *)(v8 + 64), 0) )
    {
      v10 = src[1];
      v6 = a3 == 0 ? 7 : 5;
      goto LABEL_17;
    }
    if ( !v55 )
    {
      if ( !a3 && a1[1] )
        a1[12] = a2;
      v61 = -1;
      v62 = 70;
      v63 = -1;
      sub_25AA70((__int64)&v61, (__int64)&v56, 0.0);
      v37 = v60;
      v64 = nullptr;
      v65 = 0;
      if ( (_QWORD)v60 )
      {
        v64 = (void *)qalloc_or_throw(8 * v60, (__int64)&v56, v35, v36);
        v65.m128i_i64[1] = v37;
        memcpy(v64, src[1], 8 * v37);
        v65.m128i_i64[0] = v37;
      }
      v38 = a1[1];
      v39 = *a1;
      if ( a1[2] < (unsigned __int64)(v38 + 1) )
      {
        v50 = qvector_reserve((__int64)a1, v39, v38 + 1, 56);
        *a1 = v50;
        v39 = v50;
        v38 = a1[1];
      }
      v40 = v39 + 56 * v38;
      *(_QWORD *)v40 = -1;
      *(_DWORD *)(v40 + 8) = 70;
      *(_QWORD *)(v40 + 12) = -1;
      sub_25AA70(v40, (__int64)&v61, 0.0);
      v9 = _mm_loadu_si128(&v65);
      *(_QWORD *)(v40 + 32) = v64;
      *(__m128i *)(v40 + 40) = v9;
      ++a1[1];
      sub_255050((__int64)&v61, *(double *)v9.m128i_i64);
      v43 = a1[4];
      v44 = *(_QWORD *)(v8 + 64);
      v45 = a1[3];
      v46 = v43 + 1;
      if ( a1[5] < (unsigned __int64)(v43 + 1) )
      {
        v49 = qvector_reserve((__int64)(a1 + 3), v45, v46, 8);
        a1[3] = v49;
        v45 = v49;
        v43 = a1[4];
      }
      *(_QWORD *)(v45 + 8 * v43) = v44;
      ++a1[4];
      v47 = *(_QWORD *)(v8 + 72);
      if ( v47 )
      {
        v48 = sub_288310((__int64)a1, v47);
        v10 = src[1];
        v6 = v48;
      }
      else
      {
        v51 = sub_241B40(*(_QWORD *)(v8 + 64), 0, v46, v41, v42);
        v10 = src[1];
        v6 = 8 * v51;
      }
      goto LABEL_17;
    }
    if ( !*(_QWORD *)(v8 + 72) && !(unsigned __int8)sub_241B40(*(_QWORD *)(v8 + 64), 0, v22, v23, v24) )
    {
      v61 = -1;
      v62 = 70;
      v63 = -1;
      sub_25AA70((__int64)&v61, (__int64)&v56, 0.0);
      v27 = v60;
      v64 = nullptr;
      v65 = 0;
      if ( (_QWORD)v60 )
      {
        v64 = (void *)qalloc_or_throw(8 * v60, (__int64)&v56, v25, v26);
        v65.m128i_i64[1] = v27;
        memcpy(v64, src[1], 8 * v27);
        v65.m128i_i64[0] = v27;
      }
      v28 = a1[1];
      if ( a1[2] < (unsigned __int64)(v28 + 1) )
      {
        *a1 = qvector_reserve((__int64)a1, *a1, v28 + 1, 56);
        v28 = a1[1];
      }
      v29 = *a1 + 56 * v28;
      *(_QWORD *)v29 = -1;
      *(_DWORD *)(v29 + 8) = 70;
      *(_QWORD *)(v29 + 12) = -1;
      sub_25AA70(v29, (__int64)&v61, 0.0);
      v9 = _mm_loadu_si128(&v65);
      *(_QWORD *)(v29 + 32) = v64;
      *(__m128i *)(v29 + 40) = v9;
      ++a1[1];
      sub_255050((__int64)&v61, *(double *)v9.m128i_i64);
      v30 = a1[4];
      v31 = a1[3];
      v61 = 0;
      v32 = a1[5];
      v33 = v30;
      v34 = v30 + 1;
      if ( (unsigned __int64)&v61 < v31 || (unsigned __int64)&v61 >= v31 + 8 * v32 )
      {
        if ( v32 < v34 )
        {
          v53 = qvector_reserve((__int64)(a1 + 3), v31, v34, 8);
          a1[3] = v53;
          v33 = a1[4];
          v31 = v53;
        }
        *(_QWORD *)(v31 + 8 * v33) = 0;
      }
      else
      {
        if ( v32 < v34 )
        {
          v52 = qvector_reserve((__int64)(a1 + 3), v31, v34, 8);
          a1[3] = v52;
          v31 = v52;
          v30 = a1[4];
        }
        *(_QWORD *)(v31 + 8 * v30) = 0;
      }
      ++a1[4];
      v10 = src[1];
      v6 = 4;
      goto LABEL_17;
    }
  }
  v10 = src[1];
  v6 = 3;
LABEL_17:
  if ( v10 )
  {
    *(_QWORD *)&v60 = 0;
    qfree((__int64)v10);
  }
  sub_255050((__int64)&v56, *(double *)v9.m128i_i64);
  return v6;
}

