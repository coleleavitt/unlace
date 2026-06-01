__int64 __fastcall sub_2838E0(_QWORD *a1, __int64 a2)
{
  __int64 **v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r15
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 **v15; // rbp
  __int64 v16; // rax
  __int64 *i; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __m128i v41; // xmm1
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 **k; // rbx
  __int64 *v51; // rbp
  __int64 *v52; // r13
  __int64 *v53; // rax
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 *j; // r13
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 **v67; // [rsp+0h] [rbp-100h]
  _QWORD *v68; // [rsp+10h] [rbp-F0h]
  int v69; // [rsp+18h] [rbp-E8h]
  int v70; // [rsp+1Ch] [rbp-E4h]
  __int64 v71; // [rsp+20h] [rbp-E0h]
  __int64 **v72; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v75; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+50h] [rbp-B0h]
  __int128 v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int128 v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h]
  __int128 v81; // [rsp+90h] [rbp-70h]
  __int128 v82; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+B0h] [rbp-50h]
  char v84; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v85; // [rsp+C0h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v75 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v84 = 0;
  v83 = -1;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  sub_27F000(&v72, a1, a2);
  v71 = a1[8];
  v67 = v72;
  v68 = v73;
  v2 = (__int64 **)v73;
  while ( 1 )
  {
    v3 = sub_283100(&v74, (__int64)(v2 + 2), 0);
    if ( v3 == 4 )
    {
      if ( !under_debugger )
        sub_37DDE0(51644);
      BUG();
    }
    if ( v3 > 4 )
      break;
    if ( !v3 )
    {
      v2 = (__int64 **)*v2;
      if ( v67 != v2 )
        continue;
    }
    goto LABEL_6;
  }
  if ( v3 - 5 <= 1 )
  {
LABEL_18:
    v23 = 0;
    goto LABEL_19;
  }
LABEL_6:
  if ( v75.m128i_i64[0] <= 2uLL )
    goto LABEL_18;
  v69 = 0;
  v4 = 0;
  v70 = 0;
  do
  {
    v14 = *(_QWORD *)(v76 + 8 * v4);
    if ( v14 )
    {
      v5 = (_QWORD *)j__qalloc_or_throw();
      *v5 = -1;
      v8 = v5;
      v5[1] = -4294967226LL;
      v5[3] = 0;
      v5[2] = 0xFFFFFFFFLL;
      *v5 = *(_QWORD *)v14;
      v9 = *(_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = -1;
      LODWORD(v5) = *((_DWORD *)v5 + 2);
      *((_DWORD *)v8 + 2) = v9;
      v10 = *(_DWORD *)(v14 + 12);
      *(_DWORD *)(v14 + 8) = (_DWORD)v5;
      LODWORD(v5) = *((_DWORD *)v8 + 3);
      *((_DWORD *)v8 + 3) = v10;
      v11 = *(_QWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 12) = (_DWORD)v5;
      v12 = v8[3];
      v8[3] = v11;
      *(_QWORD *)(v14 + 24) = v12;
    }
    else
    {
      v15 = (__int64 **)(v78 + 24LL * v70);
      v8 = sub_23C730();
      if ( (_QWORD)v82 == *((_QWORD *)&v82 + 1) )
      {
        v16 = *v8;
      }
      else
      {
        v16 = *(_QWORD *)(v82 + 16);
        *v8 = v16;
      }
      if ( v16 == -1 )
      {
        v53 = v15[2];
        *v8 = v53;
        if ( v53 == (__int64 *)-1LL )
          sub_27A1C0();
      }
      for ( i = *v15; i != v15[1]; i = (__int64 *)*i )
      {
        v18 = v8[3];
        v19 = qalloc_or_throw();
        *(_QWORD *)(v19 + 24) = -4294967226LL;
        *(_QWORD *)(v19 + 16) = -1;
        *(_QWORD *)(v19 + 40) = 0;
        *(_QWORD *)(v19 + 32) = 0xFFFFFFFFLL;
        *(_QWORD *)v19 = v18;
        v20 = *(__int64 **)(v18 + 8);
        *(_QWORD *)(v19 + 8) = v20;
        *v20 = v19;
        *(_QWORD *)(v18 + 8) = v19;
        ++*(_QWORD *)(v18 + 16);
        v21 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = i[2];
        LODWORD(v20) = *((_DWORD *)i + 6);
        i[2] = v21;
        LODWORD(v21) = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = (_DWORD)v20;
        LODWORD(v20) = *((_DWORD *)i + 7);
        *((_DWORD *)i + 6) = v21;
        LODWORD(v21) = *(_DWORD *)(v19 + 28);
        *(_DWORD *)(v19 + 28) = (_DWORD)v20;
        v22 = i[5];
        *((_DWORD *)i + 7) = v21;
        v6 = *(_QWORD *)(v19 + 40);
        *(_QWORD *)(v19 + 40) = v22;
        i[5] = v6;
      }
      ++v70;
    }
    sub_251F30(v74 + 56 * v4, (__int64)v8, v74, v6, v7);
    ++v69;
    v13 = v75.m128i_i64[0];
    v4 = v69;
  }
  while ( (unsigned __int64)v69 < v75.m128i_i64[0] );
  if ( v84 )
  {
    v54 = v74;
    if ( v75.m128i_i64[1] < (unsigned __int64)(v75.m128i_i64[0] + 1) )
    {
      v74 = qvector_reserve();
      v13 = v75.m128i_i64[0];
      v54 = v74;
    }
    v55 = v54 + 56 * v13;
    *(_QWORD *)v55 = -1;
    *(_QWORD *)(v55 + 12) = -1;
    *(_DWORD *)(v55 + 8) = 70;
    *(_OWORD *)(v55 + 24) = 0;
    *(_OWORD *)(v55 + 40) = 0;
    ++v75.m128i_i64[0];
    v58 = sub_23C730();
    if ( (_QWORD)v82 == *((_QWORD *)&v82 + 1) )
    {
      if ( *v58 != -1 )
      {
LABEL_49:
        sub_251F30(v55, (__int64)v58, v56, v57, v59);
        goto LABEL_32;
      }
    }
    else
    {
      v60 = *(_QWORD *)(v82 + 16);
      *v58 = v60;
      if ( v60 != -1 )
      {
LABEL_47:
        for ( j = (__int64 *)v82; j != *((__int64 **)&v82 + 1); j = (__int64 *)*j )
        {
          v62 = v58[3];
          v63 = qalloc_or_throw();
          *(_QWORD *)(v63 + 24) = -4294967226LL;
          *(_QWORD *)(v63 + 16) = -1;
          *(_QWORD *)(v63 + 40) = 0;
          *(_QWORD *)(v63 + 32) = 0xFFFFFFFFLL;
          *(_QWORD *)v63 = v62;
          v64 = *(__int64 **)(v62 + 8);
          *(_QWORD *)(v63 + 8) = v64;
          *v64 = v63;
          *(_QWORD *)(v62 + 8) = v63;
          ++*(_QWORD *)(v62 + 16);
          v65 = *(_QWORD *)(v63 + 16);
          *(_QWORD *)(v63 + 16) = j[2];
          LODWORD(v64) = *((_DWORD *)j + 6);
          j[2] = v65;
          LODWORD(v65) = *(_DWORD *)(v63 + 24);
          *(_DWORD *)(v63 + 24) = (_DWORD)v64;
          LODWORD(v64) = *((_DWORD *)j + 7);
          *((_DWORD *)j + 6) = v65;
          LODWORD(v65) = *(_DWORD *)(v63 + 28);
          *(_DWORD *)(v63 + 28) = (_DWORD)v64;
          v57 = j[5];
          *((_DWORD *)j + 7) = v65;
          v56 = *(_QWORD *)(v63 + 40);
          *(_QWORD *)(v63 + 40) = v57;
          j[5] = v56;
        }
        goto LABEL_49;
      }
    }
    v66 = v83;
    *v58 = v83;
    if ( v66 == -1 )
      sub_27A1C0();
    goto LABEL_47;
  }
LABEL_32:
  if ( (_QWORD)v80 )
    *((_QWORD *)&v80 + 1) = v80;
  v30 = j__qalloc_or_throw();
  *(_QWORD *)v30 = -1;
  *(_QWORD *)(v30 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v30 + 24) = 0;
  *(_QWORD *)(v30 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v30 + 40) = 0;
  *(_QWORD *)(v30 + 48) = 0;
  *(_DWORD *)(v30 + 56) = 0;
  *(_QWORD *)(v30 + 64) = 0;
  *(_QWORD *)(v30 + 72) = 0;
  *(_QWORD *)(v30 + 80) = 0;
  v31 = *((_QWORD *)&v80 + 1);
  *(_OWORD *)(v30 + 88) = 0;
  *(_OWORD *)(v30 + 120) = 0;
  *(_QWORD *)(v30 + 104) = 0;
  *(_QWORD *)(v30 + 112) = 0;
  *(_QWORD *)v30 = *(_QWORD *)v31;
  v32 = *(_DWORD *)(v31 + 8);
  *(_QWORD *)v31 = -1;
  v33 = *(_DWORD *)(v30 + 8);
  *(_DWORD *)(v30 + 8) = v32;
  v34 = *(_DWORD *)(v31 + 12);
  *(_DWORD *)(v31 + 8) = v33;
  v35 = *(_DWORD *)(v30 + 12);
  *(_DWORD *)(v30 + 12) = v34;
  v36 = *(_QWORD *)(v31 + 24);
  *(_DWORD *)(v31 + 12) = v35;
  v37 = *(_QWORD *)(v30 + 24);
  *(_QWORD *)(v30 + 24) = v36;
  v38 = *(_QWORD *)(v31 + 32);
  *(_QWORD *)(v31 + 24) = v37;
  v39 = *(_QWORD *)(v30 + 32);
  *(_QWORD *)(v30 + 32) = v38;
  v40 = *(_QWORD *)(v31 + 40);
  v41 = _mm_loadu_si128(&v75);
  *(_QWORD *)(v31 + 32) = v39;
  v42 = *(_QWORD *)(v30 + 40);
  *(_QWORD *)(v30 + 40) = v40;
  v43 = *(_QWORD *)(v31 + 48);
  *(_QWORD *)(v31 + 40) = v42;
  v44 = *(_QWORD *)(v30 + 48);
  *(_QWORD *)(v30 + 48) = v43;
  LODWORD(v43) = *(_DWORD *)(v31 + 56);
  *(_QWORD *)(v31 + 48) = v44;
  LODWORD(v44) = *(_DWORD *)(v30 + 56);
  *(_DWORD *)(v30 + 56) = v43;
  *(_DWORD *)(v31 + 56) = v44;
  v45 = *(_QWORD *)(v30 + 112);
  v46 = v74;
  v47 = _mm_loadu_si128((const __m128i *)(v30 + 120));
  *(__m128i *)(v30 + 120) = v41;
  v74 = v45;
  v48 = v81;
  *(_QWORD *)(v30 + 112) = v46;
  v49 = *(_QWORD *)(v48 + 24);
  v75 = v47;
  sub_23D4C0(v30, v71, v68[2], v49 + 8);
  sub_250450((__int64)(v68 + 2));
  *((_DWORD *)v68 + 6) = 77;
  v68[5] = v30;
  if ( *((_QWORD *)&v81 + 1) )
  {
    for ( k = (__int64 **)*v68; k != v67; k = (__int64 **)v51 )
    {
      v51 = *k;
      v52 = *((__int64 **)&v81 + 1);
      *k[1] = (__int64)*k;
      v51[1] = (__int64)k[1];
      sub_250450((__int64)(k + 2));
      qfree();
      v67[2] = (__int64 *)((char *)v67[2] - 1);
      if ( k + 2 == (__int64 **)v52 )
        break;
    }
  }
  v23 = 1;
LABEL_19:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  v24 = v74;
  if ( v74 )
  {
    v25 = v75.m128i_i64[0];
    if ( v75.m128i_i64[0] )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = v24 + v26;
        if ( *(_QWORD *)(v24 + v26 + 32) )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree();
        }
        ++v27;
        v26 += 56;
        sub_250450(v28);
        v24 = v74;
      }
      while ( v25 != v27 );
    }
    v75.m128i_i64[0] = 0;
    qfree();
  }
  return v23;
}

