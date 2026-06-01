__int64 __fastcall sub_94F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // r15d
  int *v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r15
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // [rsp+8h] [rbp-128h]
  __m128i v29; // [rsp+10h] [rbp-120h] BYREF
  __int64 v30; // [rsp+20h] [rbp-110h]
  char v31; // [rsp+2Fh] [rbp-101h]
  __int64 v32; // [rsp+30h] [rbp-100h]
  int *v33; // [rsp+38h] [rbp-F8h]
  int *v34; // [rsp+40h] [rbp-F0h]
  int *v35; // [rsp+48h] [rbp-E8h]
  __int64 *v36; // [rsp+50h] [rbp-E0h]
  __int64 *v37; // [rsp+58h] [rbp-D8h]
  __int64 *v38; // [rsp+60h] [rbp-D0h]
  __int64 v39; // [rsp+68h] [rbp-C8h]
  __int64 v40; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+88h] [rbp-A8h]
  _QWORD v44[2]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-80h]
  __m128i v46; // [rsp+B8h] [rbp-78h]
  __int64 v47[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-50h]
  __m128i v49; // [rsp+E8h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+F8h] [rbp-38h]

  v39 = a1;
  v50 = __readfsqword(0x28u);
  v2 = sub_118420(a2, &v40, 9);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( *(_BYTE *)(v2 + 32) != 1 || *(_DWORD *)(v2 + 40) )
    return 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !v6 || *(_DWORD *)v6 != 12 )
    goto LABEL_8;
  v7 = v6 + 32;
  if ( (unsigned __int8)sub_1216A0(v6 + 32, a2 + 64, 0) )
  {
    v7 = v6 + 48;
  }
  else if ( !(unsigned __int8)sub_1216A0(v6 + 48, a2 + 64, 0) )
  {
    goto LABEL_8;
  }
  if ( (unsigned __int8)sub_11AB20(v7, a2 + 64, 3) )
LABEL_8:
    v7 = 0;
  v41 = a2;
  v8 = sub_124F80(v39, v3 + 32, &v41, 0);
  v9 = v8;
  if ( !v8 || v41 != v8 || *(_DWORD *)v8 != 25 )
    return 0;
  v10 = *(int **)(v8 + 8);
  v11 = *v10;
  if ( *v10 == 26 )
  {
    v10 = *((int **)v10 + 1);
    v11 = *v10;
  }
  if ( v11 != 12 )
    return 0;
  v12 = v10[9];
  if ( v12 != *(_DWORD *)(a2 + 36) )
    return 0;
  v13 = *(_QWORD *)(*(_QWORD *)(v39 + 480) + 112LL);
  v30 = v13;
  if ( v12 >= *(_DWORD *)(v13 + 88) && (v12 != *(_DWORD *)(v13 + 88) || !(unsigned __int8)sub_1186F0(v30, 12)) )
    return 0;
  v33 = v10 + 8;
  v34 = v10 + 12;
  if ( !(unsigned int)sub_12BFC0(v30, v39, v9, v9, (_DWORD)v10, (int)v10 + 32, (__int64)(v10 + 12), 2) )
    return 0;
  v35 = v10 + 16;
  v32 = a2 + 64;
  v4 = sub_11AB20(v10 + 16, a2 + 64, 3);
  if ( (_BYTE)v4 )
    return 0;
  if ( !v7 )
  {
    if ( !(unsigned __int8)sub_11AB20(v40, v35, 3) )
      goto LABEL_25;
    return 0;
  }
  if ( !(unsigned __int8)sub_1216A0(v32, v6 + 64, 0) )
  {
    v38 = v47;
    sub_123560(v47, v39, a2, 1);
    if ( !sub_A58D0(v39, v47, *(_QWORD *)(v6 + 8), 0, 1) && (unsigned __int8)sub_60500(v38) && !v49.m128i_i64[0] )
    {
      sub_8F680((__int64)v38);
      goto LABEL_23;
    }
    sub_8F680((__int64)v38);
    return 0;
  }
LABEL_23:
  if ( (unsigned __int8)sub_11AB20(v40, v35, 3) || (unsigned __int8)sub_11AB20(v7, v35, 3) )
    return 0;
LABEL_25:
  v42 = 0;
  v43 = 0;
  if ( *((_QWORD *)v10 + 1) == a2 )
  {
    v31 = 1;
    v36 = &v42;
    goto LABEL_40;
  }
  v36 = &v42;
  v37 = v44;
  sub_123560(v44, v39, v10, 1);
  v14 = *((_QWORD *)v10 + 1);
  v36 = &v42;
  if ( !sub_A55E0(v39, v44, v14, a2, 1) )
  {
    v31 = 1;
    v36 = &v42;
    goto LABEL_29;
  }
  v36 = &v42;
  v15 = sub_151460(&v42);
  if ( (unsigned __int8)sub_1515E0(v39, (_DWORD)v10, (_DWORD)v35, v15, v16, v17) )
  {
    v31 = 0;
LABEL_29:
    if ( sub_A58D0(v39, v37, *((_QWORD *)v10 + 1), a2, 1) )
    {
      if ( (unsigned __int8)sub_11AB20(v33, v35, 3) )
      {
        v18 = sub_151460(v36);
        if ( !(unsigned __int8)sub_1515E0(v39, (_DWORD)v10, (_DWORD)v33, v18, v19, v20) )
          goto LABEL_60;
      }
      if ( (unsigned __int8)sub_11AB20(v34, v35, 3) )
      {
        v25 = sub_151460(v36);
        if ( !(unsigned __int8)sub_1515E0(v39, (_DWORD)v10, (_DWORD)v34, v25, v26, v27) )
          goto LABEL_60;
      }
      v31 = 0;
    }
    v38 = v47;
    sub_1201C0(v47, v39, v10, 1);
    sub_60550(v37, v47);
    v21 = v48;
    v22 = _mm_loadu_si128(&v49);
    v48 = 0;
    v49 = 0;
    if ( v45 )
    {
      v28 = v21;
      v29 = v22;
      v46.m128i_i64[0] = 0;
      qfree();
      v21 = v28;
      v22 = _mm_load_si128(&v29);
    }
    v45 = v21;
    v46 = v22;
    sub_8F680((__int64)v38);
    if ( sub_A55E0(v39, v37, *((_QWORD *)v10 + 1), a2, 1) )
    {
      v23 = sub_151460(v36);
      if ( !(unsigned __int8)sub_151880(v39, v10, v33, *((_QWORD *)v10 + 1), a2, v23)
        || !(unsigned __int8)sub_151880(v39, v10, v34, *((_QWORD *)v10 + 1), a2, 0) )
      {
        goto LABEL_60;
      }
    }
    sub_8F680((__int64)v37);
LABEL_40:
    sub_151510(v36, 0);
    v47[1] = 0;
    v44[0] = 0xFFFFFFFF00000000LL;
    v47[0] = 0xFFFFFFFF00000000LL;
    v44[1] = 0;
    v37 = v44;
    v38 = v47;
    sub_118550(v40, v44);
    v38 = v47;
    sub_AD060(v39, a2, (unsigned int)v44, (_DWORD)v10, (_DWORD)v33, a2, (__int64)v44, 0);
    v38 = v47;
    if ( v7 )
    {
      sub_118550(v7, v47);
      sub_AD060(v39, a2, (unsigned int)v47, (_DWORD)v10, (_DWORD)v34, a2, (__int64)v47, 0);
      sub_118550(v6 + 64, v32);
    }
    else
    {
      sub_120CC0(v47);
      sub_11C320(v47, v30, 9, *(_QWORD *)(a2 + 24), HIDWORD(v44[0]));
    }
    sub_152D50(v39, *((_QWORD *)v10 + 1), v35, *(_QWORD *)(a2 + 8), v32, 1);
    sub_118550(a2 + 32, v37);
    sub_118550(a2 + 48, v38);
    if ( v31 )
      sub_1190E0(v10);
    if ( v7 )
      sub_1190E0(v6);
    v24 = v39;
    sub_94F10(v39, a2);
    sub_163350(v24, a2, 6);
    v4 = 1;
    sub_1188E0(v38);
    sub_1188E0(v37);
    goto LABEL_47;
  }
LABEL_60:
  sub_8F680((__int64)v37);
LABEL_47:
  sub_151510(v36, 1);
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v4;
}

