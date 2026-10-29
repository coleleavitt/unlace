unsigned __int64 __fastcall sub_3D9AA0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __m128 v12; // xmm1
  __m128i v13; // xmm0
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  int v26; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // r13
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+18h] [rbp-120h]
  unsigned __int64 v47; // [rsp+18h] [rbp-120h]
  unsigned __int64 v48; // [rsp+18h] [rbp-120h]
  __m128i v49; // [rsp+20h] [rbp-118h] BYREF
  __int64 v50; // [rsp+30h] [rbp-108h]
  __int64 v51[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-E0h]
  __int64 v54[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __int64 v57[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-80h]
  __int64 v60[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+F8h] [rbp-40h]

  v8 = a2[1];
  v63 = __readfsqword(0x28u);
  if ( v8 > 1 )
  {
    v10 = *a2;
    if ( *(_BYTE *)(v10 + v8 - 2) != 10 )
    {
      if ( a2[2] < v8 + 1 )
      {
        v42 = qvector_reserve((__int64)a2, v10, v8 + 1, 1);
        *a2 = v42;
        v10 = v42;
      }
      a2[1] = v8 + 1;
      *(_BYTE *)(v10 + v8 - 1) = 10;
      *(_BYTE *)(*a2 + v8) = 0;
    }
  }
  sub_FAAD0(a2);
  ++*a3;
  v11 = *(_QWORD *)(a4 + 64);
  v50 = 0;
  v12 = (__m128)v11;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v11 + 1496)), (__m128i)v11);
  v49 = v13;
  sub_124680((__int64)v51, a4, a5, 0, *(double *)v13.m128i_i64, (__m128)v11);
  if ( !(unsigned __int8)sub_64880(v51) || v53 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v51, a2, (__int64)&v49, *(double *)v13.m128i_i64);
    ++*a3;
  }
  sub_127A20((__int64)v54, a4, a5, 0, v14, v15, *(double *)v13.m128i_i64, v12);
  if ( !(unsigned __int8)sub_64880(v54) || v56 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v54, a2, (__int64)&v49, *(double *)v13.m128i_i64);
    ++*a3;
  }
  sub_124680((__int64)v57, a4, a5, 1, *(double *)v13.m128i_i64, v12);
  sub_64640(v57, v51, v16, v17, v18, v19);
  sub_317C60(&v58, (__int64)&v52);
  if ( !(unsigned __int8)sub_64880(v57) || v59 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v57, a2, (__int64)&v49, *(double *)v13.m128i_i64);
    ++*a3;
  }
  sub_127A20((__int64)v60, a4, a5, 1, v20, v21, *(double *)v13.m128i_i64, v12);
  sub_64640(v60, v54, v22, v23, v24, v25);
  sub_317C60(&v61, (__int64)&v55);
  if ( !(unsigned __int8)sub_64880(v60) || v62 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v60, a2, (__int64)&v49, *(double *)v13.m128i_i64);
    ++*a3;
  }
  if ( !*(_DWORD *)(a5 + 4) )
    goto LABEL_27;
  sub_FAAD0(a2);
  ++*a3;
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x4000) != 0 )
  {
    sub_FAAD0(a2);
    v26 = *(_DWORD *)(a5 + 4);
    if ( (v26 & 0x2000) == 0 )
    {
LABEL_14:
      if ( (v26 & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_50;
    }
  }
  else if ( (v26 & 0x2000) == 0 )
  {
    goto LABEL_14;
  }
  v28 = a2[1];
  if ( v28 )
  {
    v29 = v28 + 9;
    v30 = v28 + 10;
    --v28;
  }
  else
  {
    v30 = 11;
    v29 = 10;
  }
  v31 = *a2;
  if ( a2[2] < v30 )
  {
    v48 = v30;
    v45 = qvector_reserve((__int64)a2, v31, v30, 1);
    *a2 = v45;
    v30 = v48;
    v31 = v45;
  }
  a2[1] = v30;
  *(_BYTE *)(v31 + v29) = 0;
  qmemcpy((void *)(*a2 + v28), " ignlowsrc", 10);
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x20000) == 0 )
  {
LABEL_15:
    if ( (v26 & 0x800) == 0 )
      goto LABEL_16;
    goto LABEL_55;
  }
LABEL_50:
  v32 = a2[1];
  if ( v32 )
  {
    v33 = v32 + 8;
    v34 = v32 + 9;
    --v32;
  }
  else
  {
    v34 = 10;
    v33 = 9;
  }
  v35 = *a2;
  if ( a2[2] < v34 )
  {
    v47 = v34;
    v44 = qvector_reserve((__int64)a2, v35, v34, 1);
    *a2 = v44;
    v34 = v47;
    v35 = v44;
  }
  a2[1] = v34;
  *(_BYTE *)(v35 + v33) = 0;
  v36 = *a2 + v32;
  *(_QWORD *)v36 = 0x6F7270746E6F6420LL;
  *(_BYTE *)(v36 + 8) = 112;
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x800) == 0 )
  {
LABEL_16:
    if ( (v26 & 0x200000) == 0 )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_55:
  v37 = a2[1];
  if ( v37 )
  {
    v38 = v37 + 8;
    v39 = v37 + 9;
    --v37;
  }
  else
  {
    v39 = 10;
    v38 = 9;
  }
  v40 = *a2;
  if ( a2[2] < v39 )
  {
    v46 = v39;
    v43 = qvector_reserve((__int64)a2, v40, v39, 1);
    *a2 = v43;
    v39 = v46;
    v40 = v43;
  }
  a2[1] = v39;
  *(_BYTE *)(v40 + v38) = 0;
  v41 = *a2 + v37;
  *(_QWORD *)v41 = 0x656E69626D6F6320LL;
  *(_BYTE *)(v41 + 8) = 100;
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x200000) == 0 )
  {
LABEL_17:
    if ( (v26 & 0x20) == 0 )
      goto LABEL_18;
    goto LABEL_65;
  }
LABEL_64:
  sub_3CFCE0(a2, " unpaired ");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x20) == 0 )
  {
LABEL_18:
    if ( (v26 & 8) == 0 )
      goto LABEL_19;
    goto LABEL_61;
  }
LABEL_65:
  sub_3CFCE0(a2, " farcall ");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 8) == 0 )
  {
LABEL_19:
    if ( (v26 & 0x1000) == 0 )
      goto LABEL_20;
    goto LABEL_62;
  }
LABEL_61:
  sub_3CFCE0(a2, " popecx");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x1000) == 0 )
  {
LABEL_20:
    if ( (v26 & 0x40) == 0 )
      goto LABEL_21;
    goto LABEL_72;
  }
LABEL_62:
  sub_3CFCE0(a2, " extstx");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v26 & 0x80u) == 0 )
      goto LABEL_22;
    goto LABEL_73;
  }
LABEL_72:
  sub_3CFCE0(a2, " tailcall ");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x80u) == 0 )
  {
LABEL_22:
    if ( (v26 & 0x10000) == 0 )
      goto LABEL_23;
    goto LABEL_67;
  }
LABEL_73:
  sub_3CFCE0(a2, " assert");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x10000) == 0 )
  {
LABEL_23:
    if ( (v26 & 0x40000) == 0 )
      goto LABEL_24;
    goto LABEL_68;
  }
LABEL_67:
  sub_3CFCE0(a2, " multimov");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x40000) == 0 )
  {
LABEL_24:
    if ( (v26 & 0x8000) == 0 )
      goto LABEL_25;
LABEL_69:
    sub_3CFCE0(a2, " was_noret_icall");
    v26 = *(_DWORD *)(a5 + 4);
    if ( (v26 & 0x80000) == 0 )
    {
LABEL_26:
      if ( (v26 & 0x100000) == 0 )
        goto LABEL_27;
      goto LABEL_43;
    }
    goto LABEL_70;
  }
LABEL_68:
  sub_3CFCE0(a2, " not_combinable");
  v26 = *(_DWORD *)(a5 + 4);
  if ( (v26 & 0x8000) != 0 )
    goto LABEL_69;
LABEL_25:
  if ( (v26 & 0x80000) == 0 )
    goto LABEL_26;
LABEL_70:
  sub_3CFCE0(a2, " mbarrier");
  if ( (*(_DWORD *)(a5 + 4) & 0x100000) != 0 )
LABEL_43:
    sub_3CFCE0(a2, " unmerged");
LABEL_27:
  if ( v61 )
  {
    v62 = 0;
    qfree(v61);
  }
  qfree(v60[0]);
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
  }
  qfree(v57[0]);
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
  }
  qfree(v54[0]);
  if ( v52 )
  {
    v53 = 0;
    qfree(v52);
  }
  qfree(v51[0]);
  return v63 - __readfsqword(0x28u);
}

