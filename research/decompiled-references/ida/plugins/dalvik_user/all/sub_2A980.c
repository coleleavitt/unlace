unsigned __int64 __fastcall sub_2A980(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rdi
  int v14; // r11d
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  signed int v19; // edi
  __int64 v20; // rax
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __int64 v23; // rax
  __m128i v24; // xmm5
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  char v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __m128i v37; // xmm4
  __int64 v38; // rdi
  __m128i v39; // xmm5
  __int64 v40; // rdi
  __m128i v41; // xmm6
  __m128i v42; // xmm0
  __int64 *v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm4
  __m128i v48; // xmm0
  __int64 v49; // r14
  __int64 v50; // r13
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __m128i v60; // xmm0
  __m128i v61; // xmm7
  int v62; // eax
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  int v65; // eax
  __int64 *v66; // rcx
  __m128i v67; // xmm0
  __m128i si128; // xmm0
  __int64 v70; // rdi
  int v71; // r11d
  __int64 v72; // [rsp+8h] [rbp-1C0h]
  char v73; // [rsp+8h] [rbp-1C0h]
  __int64 v74; // [rsp+10h] [rbp-1B8h]
  char v75; // [rsp+10h] [rbp-1B8h]
  __int64 v76; // [rsp+18h] [rbp-1B0h]
  __int64 v77; // [rsp+18h] [rbp-1B0h]
  __m128i v78; // [rsp+20h] [rbp-1A8h] BYREF
  __m128i v79; // [rsp+30h] [rbp-198h] BYREF
  __m128i v80; // [rsp+40h] [rbp-188h] BYREF
  __m128i v81; // [rsp+50h] [rbp-178h] BYREF
  __m128i v82; // [rsp+60h] [rbp-168h] BYREF
  __m128i v83; // [rsp+70h] [rbp-158h] BYREF
  __int64 *v84; // [rsp+80h] [rbp-148h]
  __int64 v85; // [rsp+88h] [rbp-140h]
  __m128i v86[2]; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+118h] [rbp-B0h]
  __m128i v89; // [rsp+120h] [rbp-A8h]
  __int64 v90; // [rsp+130h] [rbp-98h]
  __m128i v91; // [rsp+138h] [rbp-90h]
  __int64 v92; // [rsp+148h] [rbp-80h]
  __m128i v93; // [rsp+150h] [rbp-78h]
  __int64 v94; // [rsp+160h] [rbp-68h]
  char v95; // [rsp+168h] [rbp-60h]
  __m128i v96; // [rsp+170h] [rbp-58h] BYREF
  char v97; // [rsp+180h] [rbp-48h]
  unsigned __int64 v98; // [rsp+188h] [rbp-40h]

  v85 = a3;
  v98 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 1920 )
    return v98 - __readfsqword(0x28u);
  v5 = a2;
  if ( !v85 )
  {
LABEL_42:
    sub_2A280(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 120 )
    {
      v84 = &v87;
      do
      {
        v44 = *(_QWORD *)(v5 - 40);
        v45 = _mm_loadu_si128((const __m128i *)(v5 - 104));
        v5 -= 120LL;
        *(_OWORD *)(v5 + 16) = 0;
        v46 = _mm_loadu_si128((const __m128i *)(v5 + 40));
        v47 = _mm_loadu_si128((const __m128i *)(v5 + 64));
        *(_OWORD *)(v5 + 40) = 0;
        v48 = _mm_loadu_si128((const __m128i *)(v5 + 96));
        v49 = *(_QWORD *)(v5 + 8);
        *(_OWORD *)(v5 + 64) = 0;
        v50 = *(_QWORD *)(v5 + 32);
        v51 = *(_QWORD *)(v5 + 56);
        v77 = v44;
        LOBYTE(v44) = *(_BYTE *)(v5 + 88);
        *(_QWORD *)(v5 + 8) = 0;
        v52 = *(_QWORD *)v5;
        v73 = v44;
        LOBYTE(v44) = *(_BYTE *)(v5 + 112);
        *(_QWORD *)(v5 + 32) = 0;
        *(_QWORD *)(v5 + 56) = 0;
        v75 = v44;
        v53 = *(_QWORD *)a1;
        v86[0] = v48;
        *(_QWORD *)v5 = v53;
        v54 = *(_QWORD *)(a1 + 8);
        v55 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v56 = *(_QWORD *)(v5 + 8);
        v78 = v45;
        v79 = v46;
        v80 = v47;
        if ( v56 )
        {
          *(_QWORD *)(v5 + 16) = 0;
          v81.m128i_i64[0] = v54;
          v82 = v55;
          qfree();
          v55 = _mm_load_si128(&v82);
          v54 = v81.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 8) = v54;
        *(__m128i *)(v5 + 16) = v55;
        v57 = *(_QWORD *)(a1 + 32);
        v58 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        if ( *(_QWORD *)(v5 + 32) )
        {
          *(_QWORD *)(v5 + 40) = 0;
          v81.m128i_i64[0] = v57;
          v82 = v58;
          qfree();
          v58 = _mm_load_si128(&v82);
          v57 = v81.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 32) = v57;
        *(__m128i *)(v5 + 40) = v58;
        v59 = *(_QWORD *)(a1 + 56);
        v60 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_QWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 64) = 0;
        if ( *(_QWORD *)(v5 + 56) )
        {
          *(_QWORD *)(v5 + 64) = 0;
          v81.m128i_i64[0] = v59;
          v82 = v60;
          qfree();
          v60 = _mm_load_si128(&v82);
          v59 = v81.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 56) = v59;
        v61 = _mm_load_si128(&v78);
        *(__m128i *)(v5 + 64) = v60;
        v62 = *(_DWORD *)(a1 + 80);
        v63 = _mm_load_si128(&v79);
        v92 = v51;
        v64 = _mm_load_si128(&v80);
        *(_DWORD *)(v5 + 80) = v62;
        v65 = *(_DWORD *)(a1 + 84);
        v66 = v84;
        v87 = v52;
        *(_DWORD *)(v5 + 84) = v65;
        LOBYTE(v65) = *(_BYTE *)(a1 + 88);
        v88 = v49;
        *(_BYTE *)(v5 + 88) = v65;
        v67 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        v90 = v50;
        *(__m128i *)(v5 + 96) = v67;
        LOBYTE(v65) = *(_BYTE *)(a1 + 112);
        si128 = _mm_load_si128(v86);
        v89 = v61;
        *(_BYTE *)(v5 + 112) = v65;
        v91 = v63;
        v94 = v77;
        v93 = v64;
        v95 = v73;
        v96 = si128;
        v97 = v75;
        sub_194D0(a1, 0, 0xEEEEEEEEEEEEEEEFLL * ((__int64)(v5 - a1) >> 3), v66);
        if ( v92 )
          qfree();
        if ( v90 )
          qfree();
        if ( v88 )
          qfree();
      }
      while ( (__int64)(v5 - a1) > 120 );
    }
    return v98 - __readfsqword(0x28u);
  }
  while ( 2 )
  {
    v6 = a1 + 120;
    v7 = *(_DWORD *)(a1 + 204);
    --v85;
    v8 = 15 * ((__int64)(0xEEEEEEEEEEEEEEEFLL * (v3 >> 3)) >> 1);
    v9 = *(_QWORD *)(a1 + 120);
    v10 = a1 + 8 * v8;
    v11 = *(_QWORD *)v10;
    v12 = *(_DWORD *)(v10 + 84);
    if ( v9 != *(_QWORD *)v10 )
    {
      if ( v9 < *(_QWORD *)v10 )
      {
        v13 = *(_QWORD *)(v5 - 120);
        v14 = *(_DWORD *)(v5 - 36);
        if ( v13 == v11 )
        {
          if ( v12 < v14 )
            goto LABEL_7;
          if ( v9 < v13 )
            goto LABEL_64;
          goto LABEL_66;
        }
        goto LABEL_6;
      }
LABEL_58:
      v70 = *(_QWORD *)(v5 - 120);
      v71 = *(_DWORD *)(v5 - 36);
      if ( v9 == v70 )
      {
        if ( v7 < v71 )
          goto LABEL_66;
      }
      else if ( v9 < v70 )
      {
        goto LABEL_66;
      }
      if ( v11 == v70 )
      {
        if ( v12 >= v71 )
          goto LABEL_7;
      }
      else if ( v11 >= v70 )
      {
        goto LABEL_7;
      }
      goto LABEL_64;
    }
    if ( v7 >= v12 )
      goto LABEL_58;
    v13 = *(_QWORD *)(v5 - 120);
    v14 = *(_DWORD *)(v5 - 36);
    if ( v9 == v13 )
    {
      if ( v12 < v14 )
        goto LABEL_7;
      goto LABEL_33;
    }
LABEL_6:
    if ( v13 > v11 )
    {
LABEL_7:
      sub_2A730((__int64 *)a1, (__int64 *)v10);
      goto LABEL_8;
    }
LABEL_33:
    if ( v13 == v9 )
    {
      if ( v7 < v14 )
        goto LABEL_64;
    }
    else if ( v9 < v13 )
    {
LABEL_64:
      sub_2A730((__int64 *)a1, (__int64 *)(v5 - 120));
      goto LABEL_8;
    }
LABEL_66:
    sub_2A730((__int64 *)a1, (__int64 *)(a1 + 120));
LABEL_8:
    v15 = v5;
LABEL_9:
    v16 = *(_QWORD *)a1;
    v17 = *(unsigned int *)(a1 + 84);
    while ( 1 )
    {
      v18 = *(_QWORD *)v6;
      v19 = *(_DWORD *)(v6 + 84);
      if ( *(_QWORD *)v6 == v16 )
        break;
      if ( *(_QWORD *)v6 >= v16 )
        goto LABEL_14;
LABEL_11:
      v6 += 120LL;
    }
    if ( v19 < (int)v17 )
      goto LABEL_11;
    do
    {
LABEL_14:
      while ( 1 )
      {
        v15 -= 120LL;
        if ( v16 == *(_QWORD *)v15 )
          break;
        if ( v16 >= *(_QWORD *)v15 )
        {
          if ( v6 >= v15 )
            goto LABEL_40;
LABEL_17:
          v20 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v6 + 8) = 0;
          v21 = _mm_loadu_si128((const __m128i *)(v6 + 16));
          v22 = _mm_loadu_si128((const __m128i *)(v6 + 40));
          *(_OWORD *)(v6 + 16) = 0;
          v72 = v20;
          v23 = *(_QWORD *)(v6 + 32);
          *(_OWORD *)(v6 + 40) = 0;
          v24 = _mm_loadu_si128((const __m128i *)(v6 + 64));
          v25 = _mm_loadu_si128((const __m128i *)(v6 + 96));
          *(_QWORD *)(v6 + 32) = 0;
          v26 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 80));
          *(_OWORD *)(v6 + 64) = 0;
          v27 = *(_BYTE *)(v6 + 88);
          v74 = v23;
          v28 = *(_QWORD *)(v6 + 56);
          v26.m128i_i64[0] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v19)).m128i_u64[0];
          *(_QWORD *)(v6 + 56) = 0;
          v76 = v28;
          LOBYTE(v28) = *(_BYTE *)(v6 + 112);
          *(_QWORD *)v6 = *(_QWORD *)v15;
          v29 = *(_QWORD *)(v15 + 8);
          v96 = v25;
          v30 = _mm_loadu_si128((const __m128i *)(v15 + 16));
          *(_QWORD *)(v15 + 8) = 0;
          *(_OWORD *)(v15 + 16) = 0;
          v31 = *(_QWORD *)(v6 + 8);
          v78.m128i_i8[0] = v28;
          v79 = v21;
          v80 = v22;
          v81 = v24;
          v84 = (__int64 *)v26.m128i_i64[0];
          if ( v31 )
          {
            *(_QWORD *)(v6 + 16) = 0;
            v82.m128i_i64[0] = v29;
            v83 = v30;
            qfree();
            v30 = _mm_load_si128(&v83);
            v29 = v82.m128i_i64[0];
          }
          *(_QWORD *)(v6 + 8) = v29;
          *(__m128i *)(v6 + 16) = v30;
          v32 = *(_QWORD *)(v15 + 32);
          v33 = _mm_loadu_si128((const __m128i *)(v15 + 40));
          *(_QWORD *)(v15 + 32) = 0;
          *(_OWORD *)(v15 + 40) = 0;
          if ( *(_QWORD *)(v6 + 32) )
          {
            *(_QWORD *)(v6 + 40) = 0;
            v83.m128i_i64[0] = v32;
            v82 = v33;
            qfree();
            v32 = v83.m128i_i64[0];
            v33 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v6 + 32) = v32;
          *(__m128i *)(v6 + 40) = v33;
          v34 = *(_QWORD *)(v15 + 56);
          v35 = _mm_loadu_si128((const __m128i *)(v15 + 64));
          *(_QWORD *)(v15 + 56) = 0;
          *(_OWORD *)(v15 + 64) = 0;
          if ( *(_QWORD *)(v6 + 56) )
          {
            *(_QWORD *)(v6 + 64) = 0;
            v82.m128i_i64[0] = v34;
            v83 = v35;
            qfree();
            v35 = _mm_load_si128(&v83);
            v34 = v82.m128i_i64[0];
          }
          *(_QWORD *)(v6 + 56) = v34;
          *(__m128i *)(v6 + 64) = v35;
          *(_DWORD *)(v6 + 80) = *(_DWORD *)(v15 + 80);
          *(_DWORD *)(v6 + 84) = *(_DWORD *)(v15 + 84);
          *(_BYTE *)(v6 + 88) = *(_BYTE *)(v15 + 88);
          *(__m128i *)(v6 + 96) = _mm_loadu_si128((const __m128i *)(v15 + 96));
          *(_BYTE *)(v6 + 112) = *(_BYTE *)(v15 + 112);
          v36 = *(_QWORD *)(v15 + 8);
          *(_QWORD *)v15 = v18;
          if ( v36 )
          {
            *(_QWORD *)(v15 + 16) = 0;
            qfree();
          }
          v37 = _mm_load_si128(&v79);
          v38 = *(_QWORD *)(v15 + 32);
          *(_QWORD *)(v15 + 8) = v72;
          *(__m128i *)(v15 + 16) = v37;
          if ( v38 )
          {
            *(_QWORD *)(v15 + 40) = 0;
            qfree();
          }
          v39 = _mm_load_si128(&v80);
          v40 = *(_QWORD *)(v15 + 56);
          *(_QWORD *)(v15 + 32) = v74;
          *(__m128i *)(v15 + 40) = v39;
          if ( v40 )
          {
            *(_QWORD *)(v15 + 64) = 0;
            qfree();
          }
          v41 = _mm_load_si128(&v81);
          *(_BYTE *)(v15 + 88) = v27;
          v6 += 120LL;
          v42 = _mm_load_si128(&v96);
          *(_QWORD *)(v15 + 56) = v76;
          v43 = v84;
          *(__m128i *)(v15 + 64) = v41;
          *(_QWORD *)(v15 + 80) = v43;
          LOBYTE(v43) = v78.m128i_i8[0];
          *(__m128i *)(v15 + 96) = v42;
          *(_BYTE *)(v15 + 112) = (_BYTE)v43;
          goto LABEL_9;
        }
      }
    }
    while ( (int)v17 < *(_DWORD *)(v15 + 84) );
    if ( v6 < v15 )
      goto LABEL_17;
LABEL_40:
    sub_2A980(v6, v5, v85, v16, v17);
    v3 = v6 - a1;
    if ( (__int64)(v6 - a1) > 1920 )
    {
      v5 = v6;
      if ( !v85 )
        goto LABEL_42;
      continue;
    }
    return v98 - __readfsqword(0x28u);
  }
}

