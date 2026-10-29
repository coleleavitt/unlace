__int64 __fastcall sub_169BB0(__int64 a1, double a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  char v22; // al
  __int64 v23; // r10
  const char *v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  int v27; // edx
  const char *v28; // r9
  const char *v29; // r8
  const char *v30; // rcx
  int v31; // esi
  __m128i *v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // r13
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 *v44; // [rsp+0h] [rbp-158h]
  int v45; // [rsp+Ch] [rbp-14Ch]
  unsigned __int64 v46; // [rsp+20h] [rbp-138h]
  __int64 v47; // [rsp+28h] [rbp-130h]
  const char *v48; // [rsp+30h] [rbp-128h]
  __int64 v49; // [rsp+38h] [rbp-120h]
  int v50; // [rsp+44h] [rbp-114h] BYREF
  __int64 v51; // [rsp+48h] [rbp-110h] BYREF
  const char *v52; // [rsp+50h] [rbp-108h] BYREF
  __int128 v53; // [rsp+58h] [rbp-100h]
  const char *v54; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+78h] [rbp-E0h]
  const char *v56; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v57; // [rsp+98h] [rbp-C0h]
  __int64 v58; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-A0h]
  __int64 v60; // [rsp+C8h] [rbp-90h]
  __int64 v61; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v62; // [rsp+D8h] [rbp-80h]
  __int64 v63; // [rsp+E8h] [rbp-70h]
  __int64 v64; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v65; // [rsp+F8h] [rbp-60h]
  __int64 v66; // [rsp+108h] [rbp-50h]
  unsigned __int64 v67; // [rsp+118h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v4 + 64) != 7 )
    return 0;
  v5 = sub_1120C0(*(_QWORD *)(a1 + 8), 1);
  v6 = v5;
  if ( *(_DWORD *)(v5 + 76) != 4 || *(_BYTE *)(*(_QWORD *)(v5 + 56) + 64LL) != 7 || *(_DWORD *)(v5 + 352) != 1 )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 64);
LABEL_7:
    v8 = *(unsigned int *)(v4 + 72);
    if ( (unsigned int)v8 < *(_DWORD *)(v7 + 64) )
    {
      v9 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v7 + 528) + 8 * v8), 1);
      v6 = v9;
      if ( *(_DWORD *)(v9 + 76) != 4
        || *(_BYTE *)(*(_QWORD *)(v9 + 56) + 64LL) != 7
        || *(_DWORD *)(v9 + 352) != 1
        || sub_330DE0(v9) != 1
        || (unsigned int)(**(_DWORD **)(v6 + 56) - 43) > 9 )
      {
        return 0;
      }
      v10 = sub_1120C0(*(_QWORD *)(a1 + 8), 0);
      v11 = *(_QWORD *)(a1 + 64);
      v12 = v10;
      v13 = *(unsigned int *)(*(_QWORD *)(v6 + 56) + 72LL);
      if ( (unsigned int)v13 < *(_DWORD *)(v11 + 64) )
      {
        v45 = 2 * (v12 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v13), 0));
        goto LABEL_15;
      }
    }
LABEL_75:
    sub_167AF0(a2);
  }
  v15 = sub_330DE0(v5);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v15 != 1 )
    goto LABEL_7;
  v16 = *(_DWORD **)(v6 + 56);
  if ( (unsigned int)(*v16 - 43) > 9 )
    goto LABEL_7;
  v17 = (unsigned int)v16[18];
  if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 64) )
    goto LABEL_75;
  v18 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v7 + 528) + 8 * v17), 0);
  if ( v6 == v18 )
    return 0;
  v19 = *(_QWORD *)(a1 + 64);
  v20 = *(unsigned int *)(v4 + 72);
  if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 64) )
    goto LABEL_75;
  v21 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20), 0);
  if ( v18 != v21 )
  {
    if ( v21 == sub_1120C0(*(_QWORD *)(v6 + 8), 0) )
    {
      v45 = 3;
      goto LABEL_15;
    }
    goto LABEL_6;
  }
  v45 = 1;
LABEL_15:
  v14 = *(_QWORD *)(v6 + 56);
  if ( sub_125B60((unsigned __int8 *)(v4 + 32), v14 + 32, 0, a2) )
  {
    v60 = 0;
    v59 = 0;
    v58 = 0x800000000LL;
    v44 = &v58;
    v2 = sub_1E0080(v4, (__int64)&v58);
    if ( !(_BYTE)v2 )
    {
LABEL_27:
      sub_312B80((__int64)v44);
      return v2;
    }
    v63 = 0;
    v62 = 0;
    v61 = 0x800000000LL;
    v2 = sub_1E0080(v14, (__int64)&v61);
    if ( !(_BYTE)v2 )
    {
LABEL_26:
      sub_312B80((__int64)&v61);
      goto LABEL_27;
    }
    v66 = 0;
    v65 = 0;
    v64 = 0x800000000LL;
    switch ( v45 )
    {
      case 2:
        sub_315730((__m128i *)&v61);
        break;
      case 3:
        sub_315730((__m128i *)&v58);
        break;
      case 1:
        sub_312D90((__int64)&v64, (__int64)&v58);
        sub_314C00((int *)&v64, (int *)&v61);
        if ( !(unsigned __int8)sub_312B30(&v64, (__int64)&v50, (__int64)&v51)
          || v50 == 4 && sub_32ABC0(v51, SHIDWORD(v64), 1) == -3 )
        {
          goto LABEL_24;
        }
LABEL_23:
        if ( (*(_BYTE *)(v14 + 6) & 2) == 0
          && !(unsigned __int8)sub_1205A0((_BYTE *)v14, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
        {
          v52 = nullptr;
          v53 = 0;
          sub_1B2660(v4 + 32, (char *)&v52, 4u);
          if ( (unsigned __int64)v53 > 1 )
            tag_remove();
          v54 = nullptr;
          v55 = 0;
          sub_315E10((__int64)&v58, (__int64 *)&v54);
          v23 = v55;
          v24 = " || ";
          if ( v45 != 1 )
            v24 = " && ";
          if ( (_QWORD)v55 )
          {
            v25 = v55 + 3;
            v26 = v55 + 4;
            v23 = v55 - 1;
          }
          else
          {
            v26 = 5;
            v25 = 4;
          }
          if ( *((_QWORD *)&v55 + 1) < v26 )
          {
            v49 = v23;
            v48 = v24;
            v47 = v25;
            v46 = v26;
            v43 = qvector_reserve((__int64)&v54, (__int64)v54, v26, 1);
            v23 = v49;
            v24 = v48;
            v54 = (const char *)v43;
            v25 = v47;
            v26 = v46;
          }
          *(_QWORD *)&v55 = v26;
          v27 = *(_DWORD *)v24;
          v54[v25] = 0;
          *(_DWORD *)&v54[v23] = v27;
          sub_315E10((__int64)&v61, (__int64 *)&v54);
          v56 = nullptr;
          v57 = 0;
          sub_315E10((__int64)&v64, (__int64 *)&v56);
          v28 = s1;
          if ( (_QWORD)v57 )
            v28 = v56;
          v29 = s1;
          if ( (_QWORD)v55 )
            v29 = v54;
          v30 = s1;
          if ( (_QWORD)v53 )
            v30 = v52;
          sub_3311F0(*(_QWORD **)(a1 + 64), *(_QWORD *)(v4 + 24), 0x36u, v30, v29, v28, &v58);
          if ( v56 )
          {
            *(_QWORD *)&v57 = 0;
            qfree((__int64)v56);
          }
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree((__int64)v54);
          }
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree((__int64)v52);
          }
          v31 = *(_DWORD *)(v4 + 52);
          v32 = *(__m128i **)(v4 + 56);
          *(_DWORD *)v4 = v50 + 43;
          v33 = sub_32ABC0(v51, v31, 0);
          v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
          v32[1] = v34;
          v35 = *(_QWORD *)(a1 + 64);
          v36 = *(unsigned int *)(v14 + 72);
          v37 = *(_DWORD *)(v35 + 64);
          if ( (unsigned int)v36 >= v37 )
            sub_167AF0(*(double *)v34.m128i_i64);
          v38 = *(_QWORD *)(*(_QWORD *)(v35 + 528) + 8 * v36);
          if ( v45 == 3 )
          {
            sub_1686A0(a1, *(_DWORD *)(v38 + 72), *(double *)v34.m128i_i64);
            v35 = *(_QWORD *)(a1 + 64);
            v37 = *(_DWORD *)(v35 + 64);
          }
          v39 = *(unsigned int *)(v4 + 72);
          if ( (unsigned int)v39 >= v37 )
            sub_167AF0(*(double *)v34.m128i_i64);
          sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v35 + 528) + 8 * v39));
          sub_13B2C0(*(_QWORD *)(a1 + 8));
          sub_112550(v6, *(_QWORD *)(v6 + 8), v38);
          sub_11D5A0(v14);
          v40 = *(_DWORD *)(v6 + 24);
          BYTE1(v40) &= ~2u;
          LOBYTE(v40) = v40 | 0x80;
          *(_DWORD *)(v6 + 24) = v40;
          v41 = *(_QWORD *)(a1 + 64);
          v42 = *(unsigned int *)(v14 + 72);
          if ( (unsigned int)v42 >= *(_DWORD *)(v41 + 64) )
            sub_167AF0(*(double *)v34.m128i_i64);
          sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v41 + 528) + 8 * v42));
          sub_13B2C0(*(_QWORD *)(v6 + 8));
          sub_66FA0(*(_QWORD *)(a1 + 64), 1);
          goto LABEL_25;
        }
LABEL_24:
        v2 = 0;
LABEL_25:
        sub_312B80((__int64)&v64);
        goto LABEL_26;
      default:
        v22 = sub_312B30(&v64, (__int64)&v50, (__int64)&v51);
LABEL_41:
        if ( !v22 )
          goto LABEL_24;
        goto LABEL_23;
    }
    sub_312D90((__int64)&v64, (__int64)&v58);
    sub_3147B0((__int64)&v64, (int *)&v61);
    v22 = sub_312B30(&v64, (__int64)&v50, (__int64)&v51);
    goto LABEL_41;
  }
  return 0;
}

