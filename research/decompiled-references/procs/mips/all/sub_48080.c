__int64 __fastcall sub_48080(__int64 *a1, __int64 *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v6; // edx
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // r15
  char v19; // al
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __m128i *v22; // r15
  __int32 v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r13
  __m128i v33; // xmm0
  char v34; // al
  __int64 v35; // rdi
  unsigned int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // r13
  __m128i v44; // xmm0
  char v45; // al
  __int64 v46; // rdi
  unsigned int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdi
  __m128i v56; // xmm1
  __int64 v57; // r14
  char v58; // al
  __int64 v59; // rdi
  char v61; // al
  __m128i v62; // [rsp+0h] [rbp-90h] BYREF
  __int64 *v63; // [rsp+18h] [rbp-78h]
  __m128i v64; // [rsp+20h] [rbp-70h] BYREF
  __int64 v65; // [rsp+30h] [rbp-60h] BYREF
  __m128i v66; // [rsp+38h] [rbp-58h] BYREF
  char v67; // [rsp+48h] [rbp-48h]
  unsigned __int64 v68; // [rsp+58h] [rbp-38h]

  v64.m128i_i64[0] = (__int64)a4;
  v68 = __readfsqword(0x28u);
  v6 = *a4;
  if ( *a4 == a4[1] )
    return 0xFFFFFFFFLL;
  v10 = 0x10000;
  v11 = *(_QWORD *)(a1[1] + 32);
  v12 = (unsigned int)(*(_DWORD *)(v11 + 24) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    v10 = dword_5DF20[v12];
    if ( v10 != 0x10000 )
    {
      v10 |= v6;
      if ( v6 >= 0x10000 )
        v10 = 0x10000;
    }
  }
  v67 = 0;
  v13 = *a1;
  v65 = 0;
  v66 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v13 + 16))(a1, a3 & *(_QWORD *)(v11 + 16), 0);
  v63 = &v65;
  reg_finder_find(a1, &v65, v14, v15, v10, 0, a5);
  v16 = *a2;
  v17 = _mm_loadu_si128(&v66);
  v66 = 0;
  v18 = v65;
  v65 = 0;
  if ( v16 )
  {
    a2[1] = 0;
    v62 = v17;
    qfree(v16);
    v19 = v67;
    v20 = v65;
    *a2 = v18;
    v21 = _mm_load_si128(&v62);
    v22 = (__m128i *)(a2 + 1);
    *((_BYTE *)a2 + 24) = v19;
    *(__m128i *)(a2 + 1) = v21;
    if ( v20 )
    {
      v66.m128i_i64[0] = 0;
      qfree(v20);
      v19 = *((_BYTE *)a2 + 24);
    }
    if ( (unsigned __int8)(v19 - 10) <= 3u )
      return 0;
  }
  else
  {
    v61 = v67;
    *a2 = v18;
    v22 = (__m128i *)(a2 + 1);
    *(__m128i *)(a2 + 1) = v17;
    *((_BYTE *)a2 + 24) = v61;
    if ( (unsigned __int8)(v61 - 10) <= 3u )
      return 0;
  }
  v23 = 0x10000;
  v24 = *(_QWORD *)(a1[1] + 32);
  v25 = (unsigned int)(*(_DWORD *)(v24 + 24) - 1);
  if ( (unsigned int)v25 <= 7 )
  {
    v23 = dword_5DF20[v25];
    if ( v23 != 0x10000 )
    {
      v26 = *(_DWORD *)(v64.m128i_i64[0] + 4);
      v23 |= v26;
      if ( v26 >= 0x10000 )
        v23 = 0x10000;
    }
  }
  v67 = 0;
  v27 = *a1;
  v65 = 0;
  v66 = 0;
  v28 = *(_QWORD *)(v24 + 16);
  v62.m128i_i32[0] = v23;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v27 + 16))(a1, a3 & v28, 0);
  reg_finder_find(a1, v63, v29, v30, v62.m128i_u32[0], 0, a5);
  v31 = *a2;
  v32 = v65;
  v65 = 0;
  v33 = _mm_loadu_si128(&v66);
  v66 = 0;
  if ( v31 )
  {
    a2[1] = 0;
    v62 = v33;
    qfree(v31);
    v34 = v67;
    v35 = v65;
    *a2 = v32;
    *v22 = _mm_load_si128(&v62);
    *((_BYTE *)a2 + 24) = v34;
    if ( v35 )
    {
      v66.m128i_i64[0] = 0;
      qfree(v35);
      v34 = *((_BYTE *)a2 + 24);
    }
  }
  else
  {
    v34 = v67;
    *a2 = v32;
    *v22 = v33;
    *((_BYTE *)a2 + 24) = v34;
  }
  if ( (unsigned __int8)(v34 - 10) > 3u )
  {
    v36 = 0x10000;
    v37 = *(_QWORD *)(a1[1] + 32);
    v38 = (unsigned int)(*(_DWORD *)(v37 + 24) - 1);
    if ( (unsigned int)v38 <= 7 )
    {
      v36 = dword_5DF20[v38];
      if ( v36 != 0x10000 )
      {
        v36 |= *(_DWORD *)v64.m128i_i64[0];
        if ( *(_DWORD *)v64.m128i_i64[0] >= 0x10000u )
          v36 = 0x10000;
      }
    }
    v67 = 0;
    v39 = *a1;
    v65 = 0;
    v66 = 0;
    v40 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v39 + 16))(a1, a3 & *(_QWORD *)(v37 + 16), 0);
    reg_finder_find(a1, v63, v40, v41, v36, 0, 0);
    v42 = *a2;
    v43 = v65;
    v65 = 0;
    v44 = _mm_loadu_si128(&v66);
    v66 = 0;
    if ( v42 )
    {
      a2[1] = 0;
      v62 = v44;
      qfree(v42);
      v45 = v67;
      v46 = v65;
      *a2 = v43;
      *v22 = _mm_load_si128(&v62);
      *((_BYTE *)a2 + 24) = v45;
      if ( v46 )
      {
        v66.m128i_i64[0] = 0;
        qfree(v46);
        v45 = *((_BYTE *)a2 + 24);
      }
    }
    else
    {
      v45 = v67;
      *a2 = v43;
      *v22 = v44;
      *((_BYTE *)a2 + 24) = v45;
    }
    if ( (unsigned __int8)(v45 - 10) > 3u )
    {
      v47 = 0x10000;
      v48 = *(_QWORD *)(a1[1] + 32);
      v49 = (unsigned int)(*(_DWORD *)(v48 + 24) - 1);
      if ( (unsigned int)v49 <= 7 )
      {
        v47 = dword_5DF20[v49];
        if ( v47 != 0x10000 )
        {
          v50 = *(_DWORD *)(v64.m128i_i64[0] + 4);
          v47 |= v50;
          if ( v50 >= 0x10000 )
            v47 = 0x10000;
        }
      }
      v67 = 0;
      v51 = *a1;
      v65 = 0;
      v66 = 0;
      v52 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v51 + 16))(a1, a3 & *(_QWORD *)(v48 + 16), 0);
      reg_finder_find(a1, v63, v52, v53, v47, 0, 0);
      v54 = v65;
      v55 = *a2;
      v56 = _mm_loadu_si128(&v66);
      v57 = v65;
      v65 = 0;
      v66 = 0;
      if ( v55 )
      {
        a2[1] = 0;
        v64 = v56;
        qfree(v55);
        v58 = v67;
        v59 = v65;
        *a2 = v57;
        *v22 = _mm_load_si128(&v64);
        *((_BYTE *)a2 + 24) = v58;
        if ( v59 )
        {
          v66.m128i_i64[0] = 0;
          qfree(v59);
          v58 = *((_BYTE *)a2 + 24);
        }
      }
      else
      {
        *a2 = v54;
        v58 = v67;
        *v22 = v56;
        *((_BYTE *)a2 + 24) = v58;
      }
      if ( (unsigned __int8)(v58 - 10) > 3u )
        return 0xFFFFFFFFLL;
      return 1;
    }
    return 0;
  }
  return 1;
}
