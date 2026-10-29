__int64 __fastcall sub_59F90(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  int v8; // r14d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i *v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i *v41; // rax
  char v42; // al
  int v43; // [rsp+0h] [rbp-78h]
  int v44; // [rsp+0h] [rbp-78h]
  __m128i v45; // [rsp+8h] [rbp-70h] BYREF
  __int64 v46; // [rsp+18h] [rbp-60h] BYREF
  __int64 v47; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-50h]
  int v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]
  __int64 v51; // [rsp+40h] [rbp-38h]
  int v52; // [rsp+48h] [rbp-30h]
  __int64 v53; // [rsp+50h] [rbp-28h]

  v6 = a2[1];
  v50 = __readfsqword(0x28u);
  if ( a4 != -1 )
    a3 = a4;
  if ( (int)a5 < 0 )
  {
    if ( (_BYTE)a6 )
      sub_4E2D0(
        v6,
        (int)a2,
        a3,
        a4,
        a5,
        a6,
        v43,
        v45.m128i_i32[0],
        v45.m128i_i32[2],
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    goto LABEL_22;
  }
  v7 = a3;
  v8 = (unsigned __int16)a5;
  if ( (_WORD)a5 == 2 )
  {
    v19 = *(unsigned int *)(v6 + 288);
    v20 = a2;
    if ( (unsigned int)v19 <= 9 )
    {
      a3 = 790;
      if ( _bittest64(&a3, v19) || (_DWORD)v19 == 3 && (*(_BYTE *)(v6 + 461) & 4) != 0 )
      {
        v21 = *(_QWORD *)(v6 + 424);
        if ( v21 != -1 )
        {
          v45.m128i_i32[0] = a6;
          if ( v7 <= 3 )
          {
LABEL_19:
            *(_QWORD *)a1 = 0;
            *(_BYTE *)(a1 + 24) = 11;
            *(_OWORD *)(a1 + 8) = 0;
            v22 = qvector_reserve(a1, 0, 1, 24);
            v23 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v22;
            v24 = v22 + 24 * v23;
            *(_QWORD *)v24 = v21;
            *(_QWORD *)(v24 + 8) = v7;
            *(_DWORD *)(v24 + 16) = 0x200000;
            ++*(_QWORD *)(a1 + 8);
            return a1;
          }
          LODWORD(a2) = v7 - 4;
          v42 = sub_35950(v6, v7 - 4, nullptr);
          a6 = v45.m128i_u32[0];
          if ( !v42 )
          {
            v21 = *(_QWORD *)(v6 + 424);
            goto LABEL_19;
          }
        }
      }
    }
    if ( !v20[3] )
    {
      a2 = &v46;
      v45.m128i_i32[0] = a6;
      v47 = -1;
      v48 = v7;
      v29 = sub_35A20(v6, &v46, &v47);
      a6 = v45.m128i_u32[0];
      if ( v29 )
      {
        *(_QWORD *)a1 = 0;
        *(_BYTE *)(a1 + 24) = 11;
        v30 = v46;
        *(_OWORD *)(a1 + 8) = 0;
        v45.m128i_i64[0] = v30;
        v31 = qvector_reserve(a1, 0, 1, 24);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = _mm_loadl_epi64(&v45);
        *(_QWORD *)a1 = v31;
        v34 = (__m128i *)(v31 + 24 * v32);
        v34[1].m128i_i32[0] = 0x200000;
        *v34 = _mm_unpacklo_epi64(v33, (__m128i)v7);
        ++*(_QWORD *)(a1 + 8);
        return a1;
      }
    }
    goto LABEL_7;
  }
  if ( (unsigned __int16)a5 == 13 )
  {
    if ( *(_DWORD *)(v6 + 288) == 3 )
    {
      v38 = *(_QWORD *)(v6 + 432);
      if ( v38 != -1 )
      {
        *(_QWORD *)a1 = 0;
        *(_BYTE *)(a1 + 24) = 11;
        *(_OWORD *)(a1 + 8) = 0;
        v39 = qvector_reserve(a1, 0, 1, 24);
        v40 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v39;
        v41 = (__m128i *)(v39 + 24 * v40);
        v41[1].m128i_i32[0] = 0x200000;
        *v41 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v7);
        ++*(_QWORD *)(a1 + 8);
        return a1;
      }
    }
  }
  else if ( (unsigned __int16)a5 == 65534 )
  {
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 13;
    *(_OWORD *)(a1 + 8) = 0;
    v26 = qvector_reserve(a1, 0, 1, 24);
    v27 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v26;
    v28 = v26 + 24 * v27;
    *(_QWORD *)v28 = 0;
    *(_QWORD *)(v28 + 8) = v7;
    *(_DWORD *)(v28 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
LABEL_7:
  if ( !(_BYTE)a6 )
    goto LABEL_22;
  v9 = sub_4E2D0(
         v6,
         (int)a2,
         a3,
         a4,
         a5,
         a6,
         v43,
         v45.m128i_i32[0],
         v45.m128i_i32[2],
         v46,
         v47,
         v48,
         v49,
         v50,
         v51,
         v52,
         v53);
  if ( v9 == 4 )
  {
LABEL_39:
    v10 = 2;
    goto LABEL_11;
  }
  if ( v9 > 4 )
  {
    if ( v9 - 8 > 1 )
      goto LABEL_31;
    goto LABEL_39;
  }
  v10 = 30;
  if ( v9 != 3 )
  {
LABEL_31:
    if ( v8 == 12
      && (unsigned int)sub_4E2D0(
                         v6,
                         (int)a2,
                         v10,
                         v11,
                         v12,
                         v13,
                         v44,
                         v45.m128i_i32[0],
                         v45.m128i_i32[2],
                         v46,
                         v47,
                         v48,
                         v49,
                         v50,
                         v51,
                         v52,
                         v53) == 9 )
    {
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 11;
      *(_OWORD *)(a1 + 8) = 0;
      v35 = qvector_reserve(a1, 0, 1, 24);
      v36 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v35;
      v37 = (__m128i *)(v35 + 24 * v36);
      v37[1].m128i_i32[0] = 0x100000;
      *v37 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
      ++*(_QWORD *)(a1 + 8);
      return a1;
    }
    goto LABEL_22;
  }
LABEL_11:
  if ( v8 != (_DWORD)v10 )
    goto LABEL_31;
  v14 = netnode_altval(*(_QWORD *)(v6 + 120), v7, 839);
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 32) + 24LL) == 8 )
  {
    v15 = v14;
LABEL_41:
    if ( v15 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v14 = v15;
      goto LABEL_14;
    }
LABEL_22:
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v15 = (int)v14;
  if ( (unsigned __int64)(int)v14 > 0xFFFFFFFFFFFFFFFCLL )
    goto LABEL_41;
LABEL_14:
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 11;
  *(_OWORD *)(a1 + 8) = 0;
  v16 = qvector_reserve(a1, 0, 1, 24);
  v17 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v16;
  v18 = v16 + 24 * v17;
  *(_QWORD *)v18 = v14;
  *(_QWORD *)(v18 + 8) = v7;
  *(_DWORD *)(v18 + 16) = 0x200000;
  ++*(_QWORD *)(a1 + 8);
  return a1;
}

