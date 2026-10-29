bool __fastcall sub_6F780(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  __int64 v7; // r15
  __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r15
  __int32 v28; // eax
  __int64 v29; // rax
  __int64 v30; // r15
  __m128i v31; // xmm0
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  __int32 v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __m128i v38; // xmm0
  unsigned __int64 v39; // rdx
  __int64 v40; // r15
  __int32 v41; // eax
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  __int32 v48; // eax
  __int64 v49; // r15
  __int64 v50; // rcx
  unsigned int v51; // r15d
  __int64 v52; // r8
  void *v53; // rax
  unsigned int v54; // r15d
  __int64 v55; // r8
  void *v56; // rax
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  char v63; // al
  unsigned __int64 v64; // rcx
  __int32 v65; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+8h] [rbp-80h]
  __int64 v67; // [rsp+8h] [rbp-80h]
  __int64 v68; // [rsp+8h] [rbp-80h]
  __int32 v69; // [rsp+8h] [rbp-80h]
  __int64 v70; // [rsp+8h] [rbp-80h]
  __int32 v71; // [rsp+8h] [rbp-80h]
  __int64 v72; // [rsp+8h] [rbp-80h]
  __int32 v73; // [rsp+8h] [rbp-80h]
  __int64 v74; // [rsp+8h] [rbp-80h]
  __int32 v75; // [rsp+8h] [rbp-80h]
  __int64 v76; // [rsp+8h] [rbp-80h]
  __int64 v77; // [rsp+8h] [rbp-80h]
  __int64 v78; // [rsp+8h] [rbp-80h]
  unsigned int v79; // [rsp+8h] [rbp-80h]
  __int64 v80; // [rsp+10h] [rbp-78h]
  unsigned int v81; // [rsp+24h] [rbp-64h] BYREF
  char *v82; // [rsp+28h] [rbp-60h] BYREF
  __m128i v83; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+48h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  v82 = *a2;
  v3 = &v82[a3];
  if ( __CFADD__(a3, v82)
    || !sub_6C650((_DWORD *)a1, (unsigned __int64 *)&v82, (__int64)&v82[a3])
    || !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
  {
    return 0;
  }
  v7 = v83.m128i_u32[0];
  v8 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 16) )
  {
    v65 = v83.m128i_i32[0];
    sub_67B80((__int64 *)(a1 + 8), v83.m128i_u32[0]);
    v8 = v65;
  }
  if ( v8 )
  {
    v9 = 24 * v7;
    v10 = 0;
    v66 = v9;
    while ( (unsigned __int8)sub_6B1B0(
                               (__int64 *)(v10 + *(_QWORD *)(a1 + 8)),
                               (const void **)&v82,
                               (unsigned __int64)v3) )
    {
      v10 += 24;
      if ( v66 == v10 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !sub_6C650(&v81, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v11 = v81;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = v81;
  if ( v81 != v12 )
  {
    v83 = 0;
    if ( v81 >= v12 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      v15 = a1 + 32;
      v16 = *(_QWORD *)(a1 + 48);
      if ( (unsigned __int64)&v83 < v14 || (unsigned __int64)&v83 >= v14 + 16 * v16 )
      {
        if ( v16 >= v81
          || (v37 = sub_1987B0(v15, v14, v81, 16),
              *(_QWORD *)(a1 + 32) = v37,
              v14 = v37,
              v12 = *(_QWORD *)(a1 + 40),
              v12 < v11) )
        {
          v31 = _mm_load_si128(&v83);
          while ( 1 )
          {
            v32 = v12++;
            *(__m128i *)(v14 + 16 * v32) = v31;
            if ( v11 == v12 )
              break;
            v14 = *(_QWORD *)(a1 + 32);
          }
        }
      }
      else if ( v16 >= v81
             || (v44 = sub_1987B0(v15, v14, v81, 16),
                 *(_QWORD *)(a1 + 32) = v44,
                 v14 = v44,
                 v12 = *(_QWORD *)(a1 + 40),
                 v12 < v11) )
      {
        while ( 1 )
        {
          v17 = v12++;
          *(_OWORD *)(v14 + 16 * v17) = 0;
          if ( v11 == v12 )
            break;
          v14 = *(_QWORD *)(a1 + 32);
        }
      }
      *(_QWORD *)(a1 + 40) = v11;
LABEL_24:
      v67 = 16 * v11;
      v18 = 0;
      while ( (unsigned __int8)sub_6ED40((__int64 *)(v18 + *(_QWORD *)(a1 + 32)), (unsigned __int64 *)&v82, v3 - v82) )
      {
        v18 += 16;
        if ( v67 == v18 )
          goto LABEL_28;
      }
      return 0;
    }
    *(_QWORD *)(a1 + 40) = v81;
  }
  if ( v13 )
    goto LABEL_24;
LABEL_28:
  if ( !sub_6C650(&v81, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v19 = v81;
  v20 = *(_QWORD *)(a1 + 64);
  v21 = v81;
  if ( v81 != v20 )
  {
    v83 = 0;
    if ( v81 >= v20 )
    {
      v22 = *(_QWORD *)(a1 + 56);
      v23 = a1 + 56;
      v24 = *(_QWORD *)(a1 + 72);
      if ( (unsigned __int64)&v83 < v22 || (unsigned __int64)&v83 >= v22 + 16 * v24 )
      {
        if ( v24 >= v81
          || (v45 = sub_1987B0(v23, v22, v81, 16),
              *(_QWORD *)(a1 + 56) = v45,
              v22 = v45,
              v20 = *(_QWORD *)(a1 + 64),
              v20 < v19) )
        {
          v38 = _mm_load_si128(&v83);
          while ( 1 )
          {
            v39 = v20++;
            *(__m128i *)(v22 + 16 * v39) = v38;
            if ( v19 == v20 )
              break;
            v22 = *(_QWORD *)(a1 + 56);
          }
        }
      }
      else if ( v24 >= v81
             || (v46 = sub_1987B0(v23, v22, v81, 16),
                 *(_QWORD *)(a1 + 56) = v46,
                 v22 = v46,
                 v20 = *(_QWORD *)(a1 + 64),
                 v20 < v19) )
      {
        while ( 1 )
        {
          v25 = v20++;
          *(_OWORD *)(v22 + 16 * v25) = 0;
          if ( v19 == v20 )
            break;
          v22 = *(_QWORD *)(a1 + 56);
        }
      }
      *(_QWORD *)(a1 + 64) = v19;
LABEL_38:
      v68 = 16 * v19;
      v26 = 0;
      while ( (unsigned __int8)sub_6ED40((__int64 *)(v26 + *(_QWORD *)(a1 + 56)), (unsigned __int64 *)&v82, v3 - v82) )
      {
        v26 += 16;
        if ( v68 == v26 )
          goto LABEL_44;
      }
      return 0;
    }
    *(_QWORD *)(a1 + 64) = v81;
  }
  if ( v21 )
    goto LABEL_38;
LABEL_44:
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v27 = v83.m128i_u32[0];
  v28 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 88) )
  {
    v69 = v83.m128i_i32[0];
    sub_67B80((__int64 *)(a1 + 80), v83.m128i_u32[0]);
    v28 = v69;
  }
  if ( v28 )
  {
    v29 = 3 * v27;
    v30 = 0;
    v70 = 8 * v29;
    while ( (unsigned __int8)sub_6B1B0(
                               (__int64 *)(v30 + *(_QWORD *)(a1 + 80)),
                               (const void **)&v82,
                               (unsigned __int64)v3) )
    {
      v30 += 24;
      if ( v70 == v30 )
        goto LABEL_57;
    }
    return 0;
  }
LABEL_57:
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v33 = v83.m128i_u32[0];
  v34 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 112) )
  {
    v71 = v83.m128i_i32[0];
    sub_67B80((__int64 *)(a1 + 104), v83.m128i_u32[0]);
    v34 = v71;
  }
  if ( v34 )
  {
    v35 = 3 * v33;
    v36 = 0;
    v72 = 8 * v35;
    while ( (unsigned __int8)sub_6B1B0(
                               (__int64 *)(v36 + *(_QWORD *)(a1 + 104)),
                               (const void **)&v82,
                               (unsigned __int64)v3) )
    {
      v36 += 24;
      if ( v72 == v36 )
        goto LABEL_72;
    }
    return 0;
  }
LABEL_72:
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v40 = v83.m128i_u32[0];
  v41 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 136) )
  {
    v73 = v83.m128i_i32[0];
    sub_67B80((__int64 *)(a1 + 128), v83.m128i_u32[0]);
    v41 = v73;
  }
  if ( v41 )
  {
    v42 = 24 * v40;
    v43 = 0;
    v74 = v42;
    while ( (unsigned __int8)sub_6B1B0(
                               (__int64 *)(v43 + *(_QWORD *)(a1 + 128)),
                               (const void **)&v82,
                               (unsigned __int64)v3) )
    {
      v43 += 24;
      if ( v43 == v74 )
        goto LABEL_86;
    }
    return 0;
  }
LABEL_86:
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v47 = v83.m128i_u32[0];
  v48 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 160) )
  {
    v75 = v83.m128i_i32[0];
    sub_67B80((__int64 *)(a1 + 152), v83.m128i_u32[0]);
    v48 = v75;
  }
  if ( v48 )
  {
    v49 = 24 * v47;
    v50 = 0;
    do
    {
      v76 = v50;
      if ( !(unsigned __int8)sub_6B1B0(
                               (__int64 *)(*(_QWORD *)(a1 + 152) + v50),
                               (const void **)&v82,
                               (unsigned __int64)v3) )
        return 0;
      v50 = v76 + 24;
    }
    while ( v49 != v76 + 24 );
  }
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v51 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 184) )
    sub_67840((__int64 *)(a1 + 176), v83.m128i_u32[0]);
  v52 = 0;
  while ( (unsigned int)v52 < v51 )
  {
    v77 = v52;
    v53 = sub_69D20((void *)(*(_QWORD *)(a1 + 176) + 16 * v52), 0x10u, (size_t *)&v82, (size_t)v3);
    v52 = v77 + 1;
    if ( !v53 )
      return 0;
  }
  if ( !sub_6C650(&v83, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v54 = v83.m128i_i32[0];
  if ( v83.m128i_u32[0] != *(_QWORD *)(a1 + 208) )
    sub_67840((__int64 *)(a1 + 200), v83.m128i_u32[0]);
  v55 = 0;
  while ( (unsigned int)v55 < v54 )
  {
    v78 = v55;
    v56 = sub_69D20((void *)(*(_QWORD *)(a1 + 200) + 16 * v55), 0x10u, (size_t *)&v82, (size_t)v3);
    v55 = v78 + 1;
    if ( !v56 )
      return 0;
  }
  if ( !sub_6C650(&v81, (unsigned __int64 *)&v82, (__int64)v3) )
    return 0;
  v57 = v81;
  v58 = *(_QWORD *)(a1 + 232);
  v79 = v81;
  if ( v81 != v58 )
  {
    v83 = 0;
    if ( v81 >= v58 )
    {
      v59 = *(_QWORD *)(a1 + 224);
      v60 = *(_QWORD *)(a1 + 240);
      if ( (unsigned __int64)&v83 < v59 || (unsigned __int64)&v83 >= v59 + 16 * v60 )
      {
        if ( v60 < v81 )
        {
          *(_QWORD *)(a1 + 224) = sub_1987B0(a1 + 224, v59, v81, 16);
          v58 = *(_QWORD *)(a1 + 232);
        }
        while ( v58 < v57 )
        {
          v64 = v58++;
          *(__m128i *)(*(_QWORD *)(a1 + 224) + 16 * v64) = _mm_load_si128(&v83);
        }
      }
      else
      {
        if ( v60 < v81 )
        {
          *(_QWORD *)(a1 + 224) = sub_1987B0(a1 + 224, v59, v81, 16);
          v58 = *(_QWORD *)(a1 + 232);
        }
        while ( v58 < v57 )
        {
          v61 = v58++;
          *(_OWORD *)(*(_QWORD *)(a1 + 224) + 16 * v61) = 0;
        }
      }
    }
    *(_QWORD *)(a1 + 232) = v57;
  }
  v62 = 0;
  while ( (unsigned int)v62 < v79 )
  {
    v80 = v62;
    v63 = sub_6ED40((__int64 *)(*(_QWORD *)(a1 + 224) + 16 * v62), (unsigned __int64 *)&v82, v3 - v82);
    v62 = v80 + 1;
    if ( !v63 )
      return 0;
  }
  result = sub_6D4B0((_QWORD *)(a1 + 248), (unsigned __int64 *)&v82, (__int64)v3);
  if ( !result )
    return 0;
  *a2 = v82;
  return result;
}
