__int64 __fastcall sub_139390(__int64 a1, unsigned __int64 *a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // rsi
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // r13
  __int64 v9; // rax
  _QWORD *v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r14
  char v30; // r13
  char v31; // dl
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rsi
  char v36; // dl
  unsigned __int64 v37; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+10h] [rbp-F0h]
  unsigned __int64 *v40[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  __int128 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-48h]
  char v51; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v52; // [rsp+C8h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 64);
  v52 = __readfsqword(0x28u);
  v40[0] = nullptr;
  v40[1] = nullptr;
  v41 = 0;
  v42 = 0;
  sub_103D60(a3, v5, (__int64 *)v40);
  v7 = (unsigned __int8 *)sub_129150(a1, v40, *(_QWORD *)(a1 + 56), 0, 0, 0, 0.0, a5, 0x101u);
  v8 = v7;
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_383060(0xC71Fu, 0.0);
LABEL_45:
    BUG();
  }
  if ( !sub_A3AF0(a1, v7, v40, 2, (__m128i)0LL, a5) )
  {
LABEL_19:
    LODWORD(v8) = 0;
    goto LABEL_4;
  }
  v9 = sub_A9D90(a1, v40, *(_QWORD *)(a1 + 48), 0, 0x801u);
  LOBYTE(v8) = v9 == (_QWORD)v8;
  if ( v9 )
    goto LABEL_4;
  if ( (unsigned __int8)sub_64880(v40) && !(_QWORD)v42 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_103D60(a3, v15, &v43);
    v20 = *(_QWORD *)(a1 + 64);
    v47 = 0;
    v48 = 0u;
    v49 = 0;
    v21 = *(_QWORD *)(v20 + 632);
    v22 = *(_QWORD *)(v20 + 640);
    if ( v21 + v22 - 1 >= v21 )
    {
      a5 = (__m128)v22;
      *((_QWORD *)&v48 + 1) = qvector_reserve((__int64)&v48 + 8, 0, 1, 16);
      v16 = 16 * v49;
      *(__m128i *)(*((_QWORD *)&v48 + 1) + 16 * v49) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v22);
      *(_QWORD *)&v49 = v49 + 1;
    }
    sub_64640(&v43, &v47, v16, v17, v18, v19);
    sub_317C60(&v45, (__int64)&v48 + 8);
    sub_93B40(&v47);
    v25 = *(_QWORD *)(a1 + 64);
    v47 = 0;
    v48 = 0u;
    v49 = 0;
    v26 = *(_QWORD *)(v25 + 664);
    v27 = *(_QWORD *)(v25 + 672);
    if ( v26 + v27 - 1 >= v26 )
    {
      v37 = *(_QWORD *)(v25 + 672);
      v38 = *(_QWORD *)(v25 + 664);
      v28 = qvector_reserve((__int64)&v48 + 8, 0, 1, 16);
      v26 = v38;
      LODWORD(v27) = v37;
      *((_QWORD *)&v48 + 1) = v28;
      v23 = 16 * v49;
      *(__m128i *)(v28 + 16 * v49) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v37);
      *(_QWORD *)&v49 = v49 + 1;
    }
    sub_64640(&v43, &v47, v23, v24, v26, v27);
    sub_317C60(&v45, (__int64)&v48 + 8);
    sub_93B40(&v47);
    if ( (unsigned __int8)sub_64880(&v43) && !(_QWORD)v46 )
      goto LABEL_26;
    sub_93B40(&v43);
  }
  v11 = *(_QWORD **)(a1 + 64);
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  sub_122B20(&v43, *(_QWORD *)(*(_QWORD *)(v11[187] + 24LL) + 16LL) & (v11[17] + v11[180] - 1LL), 2u);
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v47, a1, v14, 0, v12, v13, 0.0, a5);
      if ( (unsigned __int8)sub_64820(&v43, &v47) )
      {
        if ( (unsigned __int8)sub_317F40((__int64 *)&v48 + 1, (__int64)&v45) )
          break;
      }
      if ( *((_QWORD *)&v48 + 1) )
      {
        *(_QWORD *)&v49 = 0;
        qfree(*((__int64 *)&v48 + 1));
      }
      qfree(v47);
      v14 = *(_QWORD *)(v14 + 8);
      if ( !v14 )
        goto LABEL_27;
    }
    sub_93B40(&v47);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    qfree(v43);
    goto LABEL_19;
  }
LABEL_27:
  if ( (unsigned __int8)sub_64880(v40) && !(_QWORD)v42 || (*(_BYTE *)(a3 + 48) & 4) == 0 )
    goto LABEL_29;
  v29 = *(_QWORD *)(a3 + 24);
  v30 = *(_BYTE *)(a3 + 32);
  v31 = sub_32F7B0(a3 + 24, *(_QWORD *)(a1 + 64), (__int64)v40, 1);
  v32 = *(int *)(a3 + 40);
  if ( v31 )
  {
    v33 = v29 + v32;
  }
  else
  {
    v35 = *(_QWORD *)(a1 + 64);
    v36 = *(_BYTE *)(a3 + 32);
    v47 = *(_QWORD *)(a3 + 24) + (int)v32 - 1;
    LOBYTE(v48) = v36;
    v33 = v29 - (unsigned __int8)sub_32F7B0((__int64)&v47, v35, (__int64)v40, 1);
  }
  *(_QWORD *)&v49 = v33;
  v47 = 0;
  BYTE8(v49) = v30;
  v50 = 0xFFFFFFFF00000001LL;
  v51 = 1;
  v48 = 0;
  v34 = sub_104DF0(a2, (__int64)&v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  if ( !v34 || v34[1] != 1 || *(_DWORD *)*v34 != *(_DWORD *)(a1 + 72) )
  {
LABEL_29:
    if ( !under_debugger )
      sub_383060(0xC720u, 0.0);
    goto LABEL_45;
  }
LABEL_26:
  LODWORD(v8) = 1;
  sub_93B40(&v43);
LABEL_4:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  qfree((__int64)v40[0]);
  return (unsigned int)v8;
}

