__int64 __fastcall sub_80B50(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // edx
  Elf64_Rela *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __m128i *v20; // r15
  Elf64_Rela *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64); // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r12
  __m128i v30; // xmm0
  char v31; // al
  __int64 v32; // rdi
  Elf64_Rela *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall *v37)(__int64, __int64); // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r12
  __m128i v41; // xmm0
  char v42; // al
  __int64 v43; // rdi
  Elf64_Rela *v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 (__fastcall *v49)(__int64, __int64); // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  char v55; // al
  __int64 v56; // rdi
  char v58; // al
  __m128i v59; // [rsp+0h] [rbp-90h] BYREF
  __int64 *v60; // [rsp+18h] [rbp-78h]
  __m128i v61; // [rsp+20h] [rbp-70h] BYREF
  __int64 v62; // [rsp+30h] [rbp-60h] BYREF
  __m128i v63; // [rsp+38h] [rbp-58h] BYREF
  char v64; // [rsp+48h] [rbp-48h]
  unsigned __int64 v65; // [rsp+58h] [rbp-38h]

  v61.m128i_i64[0] = a3;
  v65 = __readfsqword(0x28u);
  v4 = *a4;
  if ( *a4 == a4[1] )
    return 0xFFFFFFFFLL;
  v8 = &stru_10000;
  v9 = *(_QWORD *)(a1[1] + 32);
  v10 = (unsigned int)(*(_DWORD *)(v9 + 24) - 1);
  if ( (unsigned int)v10 <= 7 )
  {
    LODWORD(v8) = dword_90400[v10];
    if ( (_DWORD)v8 != (_DWORD)&stru_10000 )
    {
      LODWORD(v8) = v4 | (unsigned int)v8;
      if ( v4 >= (unsigned int)&stru_10000 )
        v8 = &stru_10000;
    }
  }
  v11 = *a1;
  v64 = 0;
  v62 = 0;
  v63 = 0;
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(v11 + 16);
  v13 = *(_QWORD *)(v9 + 16) & v61.m128i_i64[0];
  if ( v12 != sub_80020 )
  {
    LODWORD(v60) = (_DWORD)v8;
    ((void (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v12)(a1, v13, 0, -1);
  }
  v60 = &v62;
  reg_finder_find();
  v14 = *(_QWORD *)a2;
  v15 = _mm_loadu_si128(&v63);
  v63 = 0;
  v16 = v62;
  v62 = 0;
  if ( v14 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v59 = v15;
    qfree(v14);
    v17 = v64;
    v18 = v62;
    *(_QWORD *)a2 = v16;
    v19 = _mm_load_si128(&v59);
    v20 = (__m128i *)(a2 + 8);
    *(_BYTE *)(a2 + 24) = v17;
    *(__m128i *)(a2 + 8) = v19;
    if ( v18 )
    {
      v63.m128i_i64[0] = 0;
      qfree(v18);
      v17 = *(_BYTE *)(a2 + 24);
    }
    if ( (unsigned __int8)(v17 - 10) <= 3u )
      return 0;
  }
  else
  {
    v58 = v64;
    *(_QWORD *)a2 = v16;
    v20 = (__m128i *)(a2 + 8);
    *(__m128i *)(a2 + 8) = v15;
    *(_BYTE *)(a2 + 24) = v58;
    if ( (unsigned __int8)(v58 - 10) <= 3u )
      return 0;
  }
  v21 = &stru_10000;
  v22 = *(_QWORD *)(a1[1] + 32);
  v23 = (unsigned int)(*(_DWORD *)(v22 + 24) - 1);
  if ( (unsigned int)v23 <= 7 )
  {
    LODWORD(v21) = dword_90400[v23];
    if ( (_DWORD)v21 != (_DWORD)&stru_10000 )
    {
      v24 = a4[1];
      LODWORD(v21) = v24 | (unsigned int)v21;
      if ( v24 >= (unsigned int)&stru_10000 )
        v21 = &stru_10000;
    }
  }
  v25 = *a1;
  v64 = 0;
  v62 = 0;
  v63 = 0;
  v26 = *(__int64 (__fastcall **)(__int64, __int64))(v25 + 16);
  v27 = *(_QWORD *)(v22 + 16) & v61.m128i_i64[0];
  if ( v26 != sub_80020 )
  {
    v59.m128i_i32[0] = (int)v21;
    ((void (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v26)(a1, v27, 0, -1);
  }
  reg_finder_find();
  v28 = *(_QWORD *)a2;
  v29 = v62;
  v62 = 0;
  v30 = _mm_loadu_si128(&v63);
  v63 = 0;
  if ( v28 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v59 = v30;
    qfree(v28);
    v31 = v64;
    v32 = v62;
    *(_QWORD *)a2 = v29;
    *v20 = _mm_load_si128(&v59);
    *(_BYTE *)(a2 + 24) = v31;
    if ( v32 )
    {
      v63.m128i_i64[0] = 0;
      qfree(v32);
      v31 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v31 = v64;
    *(_QWORD *)a2 = v29;
    *v20 = v30;
    *(_BYTE *)(a2 + 24) = v31;
  }
  if ( (unsigned __int8)(v31 - 10) > 3u )
  {
    v33 = &stru_10000;
    v34 = *(_QWORD *)(a1[1] + 32);
    v35 = (unsigned int)(*(_DWORD *)(v34 + 24) - 1);
    if ( (unsigned int)v35 <= 7 )
    {
      LODWORD(v33) = dword_90400[v35];
      if ( (_DWORD)v33 != (_DWORD)&stru_10000 )
      {
        LODWORD(v33) = *a4 | (unsigned int)v33;
        if ( *a4 >= (unsigned int)&stru_10000 )
          v33 = &stru_10000;
      }
    }
    v36 = *a1;
    v64 = 0;
    v62 = 0;
    v63 = 0;
    v37 = *(__int64 (__fastcall **)(__int64, __int64))(v36 + 16);
    v38 = *(_QWORD *)(v34 + 16) & v61.m128i_i64[0];
    if ( v37 != sub_80020 )
    {
      v59.m128i_i32[0] = (int)v33;
      ((void (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v37)(a1, v38, 0, -1);
    }
    reg_finder_find();
    v39 = *(_QWORD *)a2;
    v40 = v62;
    v62 = 0;
    v41 = _mm_loadu_si128(&v63);
    v63 = 0;
    if ( v39 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v59 = v41;
      qfree(v39);
      v42 = v64;
      v43 = v62;
      *(_QWORD *)a2 = v40;
      *v20 = _mm_load_si128(&v59);
      *(_BYTE *)(a2 + 24) = v42;
      if ( v43 )
      {
        v63.m128i_i64[0] = 0;
        qfree(v43);
        v42 = *(_BYTE *)(a2 + 24);
      }
    }
    else
    {
      v42 = v64;
      *(_QWORD *)a2 = v40;
      *v20 = v41;
      *(_BYTE *)(a2 + 24) = v42;
    }
    if ( (unsigned __int8)(v42 - 10) > 3u )
    {
      v44 = &stru_10000;
      v45 = *(_QWORD *)(a1[1] + 32);
      v46 = (unsigned int)(*(_DWORD *)(v45 + 24) - 1);
      if ( (unsigned int)v46 <= 7 )
      {
        LODWORD(v44) = dword_90400[v46];
        if ( (_DWORD)v44 != (_DWORD)&stru_10000 )
        {
          v47 = a4[1];
          LODWORD(v44) = v47 | (unsigned int)v44;
          if ( v47 >= (unsigned int)&stru_10000 )
            v44 = &stru_10000;
        }
      }
      v48 = *a1;
      v64 = 0;
      v62 = 0;
      v63 = 0;
      v49 = *(__int64 (__fastcall **)(__int64, __int64))(v48 + 16);
      v50 = *(_QWORD *)(v45 + 16) & v61.m128i_i64[0];
      if ( v49 != sub_80020 )
      {
        v61.m128i_i32[0] = (int)v44;
        ((void (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v49)(a1, v50, 0, -1);
      }
      reg_finder_find();
      v51 = *(_QWORD *)a2;
      v52 = v62;
      v62 = 0;
      v53 = _mm_loadu_si128(&v63);
      v63 = 0;
      if ( v51 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v61 = v53;
        qfree(v51);
        v54 = _mm_load_si128(&v61);
        v55 = v64;
        *(_QWORD *)a2 = v52;
        v56 = v62;
        *v20 = v54;
        *(_BYTE *)(a2 + 24) = v55;
        if ( v56 )
        {
          v63.m128i_i64[0] = 0;
          qfree(v56);
          v55 = *(_BYTE *)(a2 + 24);
        }
      }
      else
      {
        v55 = v64;
        *(_QWORD *)a2 = v52;
        *v20 = v53;
        *(_BYTE *)(a2 + 24) = v55;
      }
      if ( (unsigned __int8)(v55 - 10) > 3u )
        return 0xFFFFFFFFLL;
      return 1;
    }
    return 0;
  }
  return 1;
}
