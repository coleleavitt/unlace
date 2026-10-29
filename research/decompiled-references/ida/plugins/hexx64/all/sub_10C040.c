__int64 __fastcall sub_10C040(__m128i *a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 *v6; // r12
  __int8 v9; // al
  char v10; // r13
  char v11; // dl
  __int32 v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  char v17; // al
  __int64 v18; // rbp
  __int64 v19; // r12
  int v20; // r13d
  char v21; // al
  int v22; // ebp
  __int64 v23; // rbx
  int v24; // r12d
  __int64 v25; // r13
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  int v31; // ecx
  int v32; // eax
  int v33; // r12d
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __m128i *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int32 v45; // esi
  int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __m128i *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  char v65; // dl
  __int64 v66; // rax
  __int8 v67; // al
  __int64 v68; // rdx
  __m128i *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // r12
  __int64 v72; // rdx
  __int8 v73; // al
  __m128i *v74; // rdi
  __int64 *v75; // rax
  _QWORD *v76; // [rsp+10h] [rbp-F8h]
  __int64 v77; // [rsp+20h] [rbp-E8h]
  int v78; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v79[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+58h] [rbp-B0h]
  __int64 v82; // [rsp+70h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h] BYREF
  __int128 v85; // [rsp+88h] [rbp-80h]
  __m128i v86; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v87; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+C8h] [rbp-40h]

  v6 = &a1[3].m128i_i64[1];
  v89 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_64880(&a1[3].m128i_i64[1]) || (v9 = 0, a1[5].m128i_i64[0]) )
    v9 = a4 ^ a1[8].m128i_i8[4];
  a1[8].m128i_i8[5] = v9;
  v10 = *(_BYTE *)a2;
  v11 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 8 )
  {
    v25 = *(_QWORD *)(a2 + 8);
    v26 = (_QWORD *)a1->m128i_i64[1];
    a5 = 0.0;
    v81 = 0;
    v79[0] = 0;
    v79[1] = 0;
    v80 = 0;
    sub_11E5D0(v25, v79, v26);
    sub_103EF0(a1[3].m128i_i64[0], a1->m128i_i64[1], v79, a1[8].m128i_i32[0]);
    if ( !(unsigned __int8)sub_64880(v6) || a1[5].m128i_i64[0] )
    {
      v76 = (_QWORD *)(v25 + 96);
      sub_64640(v79, (__int64 *)(v25 + 96), v27, v28, v29, v30);
      sub_64700(v79, v6);
      sub_3180C0(&v80, (__int64)&a1[4].m128i_i64[1], v39, v40);
      sub_64640(v6, v79, v41, v42, v43, v44);
      sub_317C60(&a1[4].m128i_i64[1], (__int64)&v80);
      v45 = a1[7].m128i_i32[2];
      v46 = *(_DWORD *)(v25 + 12) % v45;
      if ( v46 )
      {
        v47 = *(_QWORD *)(v25 + 32);
        if ( v47 )
        {
          v48 = *(_QWORD *)(v25 + 24);
          v49 = v48 + 80 * v47;
          if ( v48 != v49 )
          {
            while ( *(_DWORD *)(v48 + 56) != 1 )
            {
              v48 += 80;
              if ( v49 == v48 )
                goto LABEL_67;
            }
            v50 = *(_QWORD *)(v48 + 64) & -v45;
            if ( v50 != -1 )
            {
              v51 = *(int *)(v25 + 16);
              v52 = v50 + *(int *)(v25 + 12);
              if ( v52 >= v51 )
              {
                if ( !under_debugger )
                  sub_383060(0xCD61u, 0.0);
                BUG();
              }
              v53 = a1->m128i_i64[1];
              a5 = 0.0;
              v54 = v51 - v52;
              v82 = 0;
              v83 = 0;
              v84 = 0;
              v85 = 0;
              v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v53 + 1440) + v52);
              v88 = 0;
              v56 = v55;
              v86 = 0u;
              v87 = nullptr;
              if ( v54 + v55 - 1 >= v55 )
              {
                v77 = v54;
                v87 = (__int64 *)qvector_reserve((__int64)&v87, 0, 1, 16);
                v75 = &v87[2 * v88];
                *v75 = v56;
                v75[1] = v77;
                *(_QWORD *)&v88 = v88 + 1;
              }
              sub_64280(&v82, v86.m128i_i64, 0.0);
              sub_316CB0(&v84, &v87, v57, v58);
              sub_93B40(v86.m128i_i64);
              sub_64700(&v82, v79);
              sub_3180C0(&v84, (__int64)&v80, v59, v60);
              if ( !(unsigned __int8)sub_64880(&v82) || (_QWORD)v85 )
              {
                sub_10B720(a1, (__int64)&v82, v46, 0.0);
                sub_64640(v79, &v82, v61, v62, v63, v64);
                sub_317C60(&v80, (__int64)&v84);
              }
              sub_93B40(&v82);
            }
          }
        }
      }
LABEL_67:
      sub_10B720(a1, (__int64)v79, 0, 0.0);
    }
    else
    {
      v76 = (_QWORD *)(v25 + 96);
    }
    sub_103EF0(a1[3].m128i_i64[0], a1->m128i_i64[1], v76, a1[8].m128i_i32[0]);
    v31 = a1[8].m128i_i32[0];
    if ( (v31 & 4) != 0 )
    {
      sub_103E50(a1[3].m128i_i64[0], a1->m128i_i64[1], (__int64 *)(v25 + 216), v31);
      v31 = a1[8].m128i_i32[0];
    }
    sub_103EF0(a1[3].m128i_i64[0], a1->m128i_i64[1], (_QWORD *)(v25 + 240), v31);
    v32 = sub_32FB00(*(_QWORD *)(a1->m128i_i64[1] + 1496), *(_DWORD *)(v25 + 284));
    v33 = v32;
    if ( v32 == -1 )
      goto LABEL_52;
    v34 = *(_DWORD *)(v25 + 284);
    if ( v34 > 0x24 )
      goto LABEL_52;
    v35 = 1LL << v34;
    if ( ((1LL << v34) & 0x80000001CLL) == 0 )
    {
      if ( (v35 & 0x400000020LL) == 0 )
      {
        if ( (v35 & 0x1000000040LL) != 0 )
        {
          v36 = sub_32F220((char *)(*(_QWORD *)(v25 + 24) + 80LL), v32);
          if ( v36 >= 0 )
          {
            v37 = a1->m128i_i64[1];
            v86 = (__m128i)0xFFFFFFFF00000000LL;
            sub_120A10((__int64)&v86, *(_QWORD *)(v37 + 1504), v36, *(_DWORD *)(*(_QWORD *)(v37 + 1504) + 84LL), -1, 0);
            v38 = *(_QWORD *)(v25 + 24);
            if ( *(_BYTE *)v38 == 10 )
              sub_10BCE0((__int64)a1, *(_QWORD *)(v38 + 8), v86.m128i_i8, v33);
            sub_11CDA0((__int64)&v86);
          }
        }
LABEL_52:
        sub_93B40(v79);
        goto LABEL_21;
      }
      v66 = *(_QWORD *)(v25 + 24);
      if ( *(_BYTE *)(v66 + 80) != 10 )
      {
LABEL_79:
        if ( *(_BYTE *)v66 == 10 )
          sub_10BCE0((__int64)a1, *(_QWORD *)(v66 + 8), (char *)(v66 + 160), v33);
        goto LABEL_52;
      }
      sub_10BCE0((__int64)a1, *(_QWORD *)(v66 + 88), (char *)(v66 + 160), v33);
    }
    v66 = *(_QWORD *)(v25 + 24);
    goto LABEL_79;
  }
  if ( (unsigned __int8)v10 > 8u )
  {
    if ( v10 == 15 )
    {
      sub_10BF10();
      goto LABEL_21;
    }
    goto LABEL_23;
  }
  if ( v10 == 1 )
  {
    v12 = a1[8].m128i_i32[0];
    goto LABEL_71;
  }
  if ( v10 != 5 )
  {
LABEL_23:
    if ( a4 )
      return 0;
LABEL_24:
    if ( v11 != 14 )
      return 0;
    goto LABEL_25;
  }
  v12 = a1[8].m128i_i32[0];
  if ( (v12 & 4) == 0 )
  {
    if ( !(unsigned __int8)sub_1026C0((_QWORD *)a1->m128i_i64[1], *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
      goto LABEL_21;
    v65 = *(_BYTE *)a2;
    v9 = a1[8].m128i_i8[5];
    v82 = -1;
    v83 = 0;
    v12 = a1[8].m128i_i32[0];
    if ( v65 != 1 )
    {
      if ( v65 != 5 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_71:
    v13 = *(int *)(a2 + 8);
    v10 = 1;
    goto LABEL_10;
  }
  LOBYTE(v83) = 0;
LABEL_9:
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_10:
  LOBYTE(v83) = v10;
  v82 = v13;
LABEL_11:
  HIDWORD(v83) = *(_DWORD *)(a2 + 4);
  if ( v9 )
  {
    if ( (v12 & 2) != 0
      && (unsigned __int8)sub_102810(a2)
      && (*(_BYTE *)a2 == 1
        ? (v15 = sub_64440(v6, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4), a5))
        : (v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1496LL) + 24LL) + 16LL)
               & (*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL)),
           v86.m128i_i64[1] = *(int *)(a2 + 4),
           v86.m128i_i64[0] = v14,
           v15 = sub_317BD0(&a1[4].m128i_i64[1], &v86)),
          !v15) )
    {
      v12 = a1[8].m128i_i32[0];
    }
    else
    {
      v86.m128i_i64[0] = (__int64)&v82;
      sub_10B0E0(a1 + 6, (__int64)&v82, (const __m128i **)&v86);
      v12 = a1[8].m128i_i32[0];
    }
  }
  sub_10B640((__m128i *)a1[3].m128i_i64[0], (_QWORD *)a1->m128i_i64[1], (__int64)&v82, v12, a5);
LABEL_21:
  if ( a4 )
    return 0;
  v11 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 1 )
  {
    if ( v11 == 5 )
    {
      if ( (unsigned __int8)sub_1026C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
        goto LABEL_25;
      v11 = *(_BYTE *)a2;
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( !(unsigned __int8)sub_11E2C0((int **)a1[2].m128i_i64[0], &v78, v79, 0) )
    return 0;
  v17 = *(_BYTE *)a2;
  v18 = v78;
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v17 == 1 )
      goto LABEL_98;
    if ( v17 != 5 || !(unsigned __int8)sub_1026C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
      goto LABEL_83;
    v73 = *(_BYTE *)a2;
    v86.m128i_i8[8] = 0;
    if ( v73 == 1 )
    {
LABEL_98:
      v72 = *(int *)(a2 + 8);
      v73 = 1;
    }
    else
    {
      v72 = -1;
      if ( v73 != 5 )
        goto LABEL_100;
      v72 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    }
    v86.m128i_i8[8] = v73;
LABEL_100:
    v74 = (__m128i *)a1[3].m128i_i64[0];
    v86.m128i_i64[0] = v72 + v18;
    v82 = (__int64)&v86;
    sub_10B0E0(v74, (__int64)&v86, (const __m128i **)&v82);
    goto LABEL_30;
  }
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(_DWORD *)(v19 + 4);
  if ( v78 > v20 )
  {
    v71 = v19 + 16;
    if ( (unsigned __int8)sub_102810(v71) )
      sub_10B410((__int64)a1, v71, v18 - v20, a5);
  }
  else if ( (unsigned __int8)sub_102810(*(_QWORD *)(a2 + 8)) )
  {
    sub_10B410((__int64)a1, v19, v18, a5);
  }
LABEL_30:
  v21 = *(_BYTE *)a2;
  v22 = v78 + LODWORD(v79[0]);
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v21 == 1 )
      goto LABEL_97;
    if ( v21 == 5 && (unsigned __int8)sub_1026C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
    {
      v67 = *(_BYTE *)a2;
      v86.m128i_i8[8] = 0;
      if ( v67 != 1 )
      {
        v68 = -1;
        if ( v67 != 5 )
        {
LABEL_89:
          v69 = (__m128i *)a1[3].m128i_i64[0];
          v82 = (__int64)&v86;
          v86.m128i_i64[0] = v68 + v22;
          sub_10B0E0(v69, (__int64)&v86, (const __m128i **)&v82);
          return 0;
        }
        v68 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_96:
        v86.m128i_i8[8] = v67;
        goto LABEL_89;
      }
LABEL_97:
      v68 = *(int *)(a2 + 8);
      v67 = 1;
      goto LABEL_96;
    }
LABEL_83:
    sub_101D90(a5);
  }
  v23 = *(_QWORD *)(a2 + 8);
  v24 = *(_DWORD *)(v23 + 4);
  if ( v22 > v24 )
  {
    v70 = v23 + 16;
    if ( (unsigned __int8)sub_102810(v70) )
      sub_10B410((__int64)a1, v70, v22 - v24, a5);
  }
  else if ( (unsigned __int8)sub_102810(v23) )
  {
    sub_10B410((__int64)a1, v23, v22, a5);
  }
  return 0;
}

