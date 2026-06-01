__int64 __fastcall sub_F2E10(__int64 a1, const __m128i *a2, __int64 a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  char v8; // r8
  unsigned __int8 *v9; // rdi
  int v11; // r14d
  unsigned __int8 v12; // al
  int v13; // ecx
  int v14; // r15d
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // edx
  __int64 result; // rax
  char v21; // al
  char v22; // al
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  const char *v26; // rax
  const char *v27; // r13
  size_t v28; // rax
  size_t v29; // r14
  size_t v30; // rbx
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int32 v33; // eax
  __int128 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+0h] [rbp-158h]
  unsigned __int8 v38; // [rsp+0h] [rbp-158h]
  unsigned __int8 v39; // [rsp+0h] [rbp-158h]
  char v40; // [rsp+8h] [rbp-150h]
  unsigned __int8 v42; // [rsp+10h] [rbp-148h]
  __int64 v43; // [rsp+18h] [rbp-140h]
  _DWORD *v44; // [rsp+38h] [rbp-120h] BYREF
  int v45[4]; // [rsp+40h] [rbp-118h] BYREF
  void *v46; // [rsp+50h] [rbp-108h] BYREF
  __int128 v47; // [rsp+58h] [rbp-100h]
  unsigned __int64 v48; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+78h] [rbp-E0h]
  int v50; // [rsp+88h] [rbp-D0h]
  _BYTE v51[8]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+98h] [rbp-C0h]
  __int64 v53; // [rsp+A0h] [rbp-B8h]
  __int64 v54; // [rsp+B0h] [rbp-A8h]
  __int64 v55; // [rsp+B8h] [rbp-A0h]
  unsigned int v56; // [rsp+D8h] [rbp-80h]
  int *v57; // [rsp+E0h] [rbp-78h]
  __int64 v58; // [rsp+E8h] [rbp-70h]
  __int64 v59; // [rsp+F0h] [rbp-68h]
  __int64 v60; // [rsp+100h] [rbp-58h]
  __int64 v61; // [rsp+108h] [rbp-50h]
  unsigned __int64 v62; // [rsp+118h] [rbp-40h]

  v6 = 80LL * a4;
  v7 = a2[30].m128i_i64[0];
  v8 = *(_BYTE *)(v7 + 145);
  v9 = (unsigned __int8 *)(v6 + *(_QWORD *)(a1 + 24));
  v62 = __readfsqword(0x28u);
  v40 = v8;
  if ( v8 == sub_11CC50(v9, v7) )
  {
    v11 = a4;
    if ( !v40 )
    {
      v11 = a4 - 1;
      v6 = 80LL * (a4 - 1);
    }
  }
  else
  {
    v11 = a4 + 1;
    v6 = 80LL * (a4 + 1);
  }
  v12 = sub_11CC50(v9, v7);
  v13 = v11;
  v14 = a4 - v12;
  if ( v11 > v14 )
    v13 = v14;
  if ( *(_DWORD *)(a1 + 8) > v13 )
    return 0;
  if ( (unsigned __int64)(v13 + 1) >= *(_QWORD *)(a1 + 32) )
    return 0;
  v15 = *(_QWORD *)(a1 + 24);
  v16 = v15 + v6;
  if ( ((*(_DWORD *)(v16 + 56) - 2) & 0xFFFFFFFD) == 0 )
    return 0;
  v17 = 80LL * v14;
  v18 = v15 + v17;
  v43 = v17;
  v19 = *(_DWORD *)(v15 + v17 + 56) - 2;
  result = 0;
  if ( (v19 & 0xFFFFFFFD) == 0 )
    return result;
  sub_D10B0((__int64)v51, a2[30].m128i_i64[0], 0x40u);
  v45[0] = 0;
  copy_argloc();
  sub_1C4830(a2[30].m128i_i64[0], (__int64)v45, *(int *)(v16 + 4), v18 + 56, *(int *)(v18 + 4));
  sub_32C270(&v44, *(_QWORD *)(v7 + 112), *(_DWORD *)(v16 + 4) + *(_DWORD *)(v18 + 4));
  sub_D67C0(v57, v45, &v44, -1, v56);
  if ( !v21 && !(unsigned __int8)sub_D6750((__int64)v51, v45, (__int64)&v44, 1) )
    goto LABEL_12;
  if ( (unsigned __int8)sub_130BC0(a2, a3, v16, a3, v18, 0) )
  {
    *((_QWORD *)&v34 + 1) = a3;
    *(_QWORD *)&v34 = a2;
    if ( !(unsigned __int8)sub_132E20(v34, v16, a3, v18, 8u) )
      goto LABEL_12;
LABEL_35:
    copy_argloc();
    copy_tinfo_t();
    v26 = sub_1B28E0(v16);
    v46 = nullptr;
    v27 = v26;
    v47 = 0;
    if ( v26 )
    {
      v28 = strlen(v26);
      v29 = v28 + 1;
      v30 = v28;
      v46 = (void *)qvector_reserve((__int64)&v46, 0, v28 + 1, 1);
      *(_QWORD *)&v47 = v29;
      memmove(v46, v27, v30);
      *((_BYTE *)v46 + v30) = 0;
    }
    v31 = (_QWORD *)(*(_QWORD *)(a1 + 24) + v43);
    cleanup_argloc();
    v32 = v31[4];
    if ( v32 )
    {
      v31[5] = 0;
      qfree(v32);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v31);
    memmove(v31, v31 + 10, *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - (_QWORD)v31 - 80);
    --*(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)sub_31B570(a2[30].m128i_i64[0]) && (unsigned int)(*(_DWORD *)(a1 + 20) - 208) > 0x2F )
    {
      v35 = a2[4].m128i_i64[0];
      v49 = 0;
      v48 = 0;
      v50 = 0;
      sub_D62A0((__int64)v51, (unsigned int *)&v48, v35, (_QWORD *)(a1 + 24), 0.0);
    }
    v33 = a2[1].m128i_i32[2];
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    a2[1].m128i_i32[2] = v33;
    sub_A2520((__int64)a2, "combined partial callarg %s");
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree((__int64)v46);
    }
    v22 = 1;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v16 + 4) == *(_DWORD *)(v18 + 4) )
  {
    v23 = a2[30].m128i_i64[0];
    v24 = *(_QWORD *)(v23 + 112);
    if ( !sub_11CC50((unsigned __int8 *)v16, v23)
      && *(_BYTE *)v18 == 4
      && (v36 = *(_QWORD *)(v18 + 8), *(_DWORD *)v36 == 11)
      && *(_BYTE *)(v36 + 32) == 1
      && *(_BYTE *)v16 == 1
      && *(_DWORD *)(v36 + 40) == *(_DWORD *)(v16 + 8)
      && (unsigned __int8)sub_11CD10(v36 + 32, v24) )
    {
      sub_125180(v16, (unsigned __int8 *)(*(_QWORD *)(v18 + 8) + 32LL));
    }
    else
    {
      if ( !sub_11CC50((unsigned __int8 *)v18, v23) )
        goto LABEL_12;
      if ( *(_BYTE *)v16 != 4 )
        goto LABEL_12;
      v25 = *(_QWORD *)(v16 + 8);
      if ( *(_DWORD *)v25 != 10
        || *(_BYTE *)(v25 + 32) != 1
        || *(_BYTE *)v18 != 1
        || *(_DWORD *)(v25 + 40) != *(_DWORD *)(v18 + 8)
        || !(unsigned __int8)sub_11CD10(v25 + 32, v24) )
      {
        goto LABEL_12;
      }
      *(_QWORD *)&v49 = 0;
      v48 = 0xFFFFFFFF00000000LL;
      sub_11CA10((char *)&v48, (char *)(*(_QWORD *)(v16 + 8) + 32LL));
      sub_11CA10((char *)v16, (char *)&v48);
      sub_11CDA0((__int64)&v48);
    }
    goto LABEL_35;
  }
LABEL_12:
  v22 = 0;
LABEL_13:
  v42 = v22;
  clear_tinfo_t();
  cleanup_argloc();
  result = v42;
  if ( v60 )
  {
    v61 = 0;
    qfree(v60);
    result = v42;
  }
  if ( v58 )
  {
    v37 = result;
    v59 = 0;
    qfree(v58);
    result = v37;
  }
  if ( v54 )
  {
    v38 = result;
    v55 = 0;
    qfree(v54);
    result = v38;
  }
  if ( v52 )
  {
    v39 = result;
    v53 = 0;
    qfree(v52);
    return v39;
  }
  return result;
}

