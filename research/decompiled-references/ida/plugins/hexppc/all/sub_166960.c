__int64 __fastcall sub_166960(const __m128i *a1)
{
  int v1; // r12d
  unsigned int v2; // r12d
  unsigned int *v4; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rdi
  char v28; // al
  unsigned int v29; // r13d
  __int64 v30; // rax
  const char *v31; // rdx
  _DWORD *v32; // rax
  unsigned int v33; // r13d
  __int64 v34; // rax
  __int128 v35; // rdi
  __int128 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 *v38; // rdi
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  unsigned __int8 *v41; // [rsp+0h] [rbp-110h]
  __int64 v42; // [rsp+8h] [rbp-108h]
  unsigned int v43; // [rsp+18h] [rbp-F8h]
  int v44; // [rsp+20h] [rbp-F0h]
  char v45; // [rsp+27h] [rbp-E9h]
  __int64 v46; // [rsp+28h] [rbp-E8h]
  __int64 v47; // [rsp+30h] [rbp-E0h]
  unsigned int *v48; // [rsp+30h] [rbp-E0h]
  __int64 v49; // [rsp+30h] [rbp-E0h]
  __int64 v50; // [rsp+38h] [rbp-D8h]
  unsigned int *v51; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-B0h]
  __int128 v54; // [rsp+68h] [rbp-A8h]
  unsigned int v55[8]; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v56; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-68h]
  _QWORD v58[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v59[10]; // [rsp+C0h] [rbp-50h] BYREF

  v59[3] = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v4 = (unsigned int *)a1[3].m128i_i64[1];
  if ( *((_BYTE *)v4 + 64) != 7 )
    return 0;
  v9 = sub_10E680(a1->m128i_i64[1], 1);
  v10 = *(_DWORD *)(v9 + 76);
  v50 = v9;
  v11 = v9;
  if ( v10 == 3 )
  {
    while ( *(_DWORD *)(v11 + 352) == 1 )
    {
      v12 = a1[4].m128i_i64[0];
      v13 = **(unsigned int **)(v11 + 368);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
        goto LABEL_60;
      v11 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
      v14 = *(_DWORD *)(v11 + 76);
      if ( v14 != 3 )
      {
        v50 = v11;
        LOBYTE(v1) = a1 != (const __m128i *)v11;
        LOBYTE(v14) = v14 == 4;
        v2 = v14 & v1;
        goto LABEL_10;
      }
    }
    return 0;
  }
  LOBYTE(v1) = a1 != (const __m128i *)v9;
  LOBYTE(v10) = v10 == 4;
  v2 = v10 & v1;
LABEL_10:
  if ( !(_BYTE)v2 )
    return 0;
  v15 = *(_QWORD *)(v50 + 56);
  if ( *(_BYTE *)(v15 + 64) != 7 )
    return 0;
  if ( (*(_BYTE *)(v15 + 6) & 2) != 0 )
    return 0;
  v11 = *(_QWORD *)(v50 + 56);
  v45 = sub_11CB60((_BYTE *)v11, *(_QWORD *)(a1[30].m128i_i64[0] + 112), 0, v6, v7, v8);
  if ( v45 )
    return 0;
  v16 = a1[4].m128i_i64[0];
  v17 = v4[18];
  if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 64)
    || (v11 = *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17),
        v46 = v11,
        v18 = sub_10E680(v11, 0),
        v19 = a1[4].m128i_i64[0],
        v47 = v18,
        v20 = *(unsigned int *)(v15 + 72),
        (unsigned int)v20 >= *(_DWORD *)(v19 + 64)) )
  {
LABEL_60:
    sub_1640B0(v11);
  }
  if ( v47 == sub_10E680(*(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20), 0) )
  {
    if ( *(_DWORD *)(v50 + 352) != 1 )
      return 0;
    v44 = 1;
  }
  else
  {
    if ( v50 != sub_10E680(v11, 1) || *(_DWORD *)(v50 + 352) != 2 || sub_32C980(v50) != 1 )
      return 0;
    v44 = 2;
  }
  v21 = a1[4].m128i_i64[0];
  v22 = *(_QWORD *)(v15 + 24);
  v57 = 0;
  v58[1] = 0;
  v23 = *(_QWORD *)(v21 + 1504);
  v59[1] = 0;
  v42 = v23;
  v56 = 0xFFFFFFFF00000000LL;
  v58[0] = 0xFFFFFFFF00000000LL;
  v59[0] = 0xFFFFFFFF00000000LL;
  sub_32C520(v55, v22);
  v24 = *v4;
  v25 = *(_DWORD *)v15;
  if ( (unsigned int)(v24 - 43) <= 9 )
  {
    v48 = (unsigned int *)v15;
    if ( v25 == 42 )
    {
      if ( *(_DWORD *)(v15 + 36) != 1 )
        goto LABEL_46;
      v49 = v15 + 32;
      if ( *(_BYTE *)(v15 + 32) == 4 )
      {
        v39 = *(_DWORD **)(v15 + 40);
        if ( *v39 == 6 )
          v49 = (__int64)(v39 + 8);
      }
      if ( *(_BYTE *)v49 != 1 || *(_DWORD *)(v49 + 8) > 7u )
        goto LABEL_46;
      *(_QWORD *)&v35 = v50;
      *((_QWORD *)&v35 + 1) = v52;
      v52[0] = 0;
      v52[1] = 0;
      v53 = 0;
      v54 = 0;
      sub_120460(v35, v49, 1u, 0xFFFF0000);
      if ( (unsigned __int8)sub_165220(v52, v9, v50)
        || (*((_QWORD *)&v36 + 1) = v49, *(_QWORD *)&v36 = a1, v51 = v4, (v37 = sub_125A00(v36, (__int64)&v51, 1)) == 0)
        || (unsigned int)(*(_DWORD *)v37 - 32) > 9
        || (v41 = (unsigned __int8 *)v37, !sub_122120((unsigned __int8 *)(v37 + 64), v49, 0)) )
      {
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree();
        }
LABEL_80:
        qfree();
        goto LABEL_46;
      }
      sub_90100((__int64)v52);
      sub_121960((__int64)v55, v15);
      v38 = &v56;
      if ( (_BYTE)v56 == 4 )
        v38 = (unsigned __int64 *)(v57 + 32);
      sub_1228A0((__int64)v38, v41);
      sub_158230(v55, v42, nullptr, 0, nullptr, nullptr, (__m128i)0LL, 0);
      if ( v55[0] - 43 > 9 )
        goto LABEL_46;
      v24 = *v4;
      if ( (_DWORD)v24 == 42 )
        goto LABEL_46;
      v48 = v55;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)v24 != 42 )
  {
    if ( *(_DWORD *)v15 == 42 )
      goto LABEL_46;
    v48 = (unsigned int *)v15;
LABEL_23:
    v26 = sub_32A6A0(v24);
    v27 = *v4;
    if ( (_DWORD)v27 != *v48 )
    {
      v43 = v26;
      if ( v26 != *v48 )
      {
        if ( (unsigned int)sub_32A6C0(v27) != *v48 )
        {
          if ( (unsigned int)sub_32A6C0(v43) != *v48 )
            goto LABEL_46;
          v45 = v2;
        }
        if ( !sub_122120((unsigned __int8 *)v4 + 32, (__int64)(v48 + 12), 0) )
          goto LABEL_46;
        v28 = sub_122120((unsigned __int8 *)v4 + 48, (__int64)(v48 + 8), 0);
LABEL_30:
        if ( v28 )
          goto LABEL_31;
LABEL_46:
        sub_119360((__int64)v59);
        sub_119360((__int64)v58);
        sub_119360((__int64)&v56);
        return 0;
      }
      v45 = v2;
    }
    if ( !sub_122120((unsigned __int8 *)v4 + 32, (__int64)(v48 + 8), 0) )
      goto LABEL_46;
    v28 = sub_122120((unsigned __int8 *)v4 + 48, (__int64)(v48 + 12), 0);
    goto LABEL_30;
  }
  if ( v25 != 42 )
    goto LABEL_46;
  if ( (unsigned __int8)sub_12B040(v42, a1, (__int64)v4, (__int64)(v4 + 8), (__int64)v4, v15 + 32, 0) )
  {
    v48 = (unsigned int *)v15;
  }
  else
  {
    if ( *((_BYTE *)v4 + 32) != 4
      || (v40 = *((_DWORD **)v4 + 5), *v40 != 6)
      || !(unsigned __int8)sub_12B040(v42, a1, (__int64)v4, (__int64)(v40 + 8), (__int64)v4, v15 + 32, 0) )
    {
      if ( *(_BYTE *)(v15 + 32) != 4 )
        goto LABEL_46;
      v32 = *(_DWORD **)(v15 + 40);
      if ( *v32 != 6
        || !(unsigned __int8)sub_12B040(v42, a1, (__int64)v4, (__int64)(v4 + 8), (__int64)v4, (__int64)(v32 + 8), 0) )
      {
        goto LABEL_46;
      }
    }
    v48 = (unsigned int *)v15;
    v45 = v2;
  }
LABEL_31:
  if ( v48 != v55 )
  {
    sub_120C40((__int64)v52, v50, (__int64)v48, 1u);
    if ( !(unsigned __int8)sub_165220(v52, v9, v50) )
    {
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree();
      }
      qfree();
      goto LABEL_36;
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree();
    }
    goto LABEL_80;
  }
LABEL_36:
  sub_119360((__int64)v59);
  sub_119360((__int64)v58);
  sub_119360((__int64)&v56);
  if ( !v45 )
  {
    if ( v44 != 1 )
    {
      v33 = *(_DWORD *)(v15 + 72);
      sub_164C60((__int64)a1, v33);
      sub_9EAE0((__int64)a1, (__int64)"REMOVE_IDENTICAL_JX (%d->%d)", *(_DWORD *)(v46 + 72), v33);
    }
    sub_10EC20(v50);
    *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
    v34 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( v34 )
      *(_DWORD *)(v34 + 48) = 63;
    v31 = "nop";
    goto LABEL_41;
  }
  if ( v44 != 1 )
  {
    v29 = *(_DWORD *)(sub_10E680(*(_QWORD *)(v50 + 8), 0) + 72);
    sub_164C60((__int64)a1, v29);
    sub_9EAE0((__int64)a1, (__int64)"REMOVE_IDENTICAL_JX (%d->%d)", *(_DWORD *)(v46 + 72), v29);
    sub_10ED70(v50);
    *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
    v30 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( v30 )
      *(_DWORD *)(v30 + 48) = 63;
    v31 = "goto";
LABEL_41:
    sub_9EAE0(v50, (__int64)"REMOVE_IDENTICAL_JX (%s)", v31);
    return v2;
  }
  return 0;
}

