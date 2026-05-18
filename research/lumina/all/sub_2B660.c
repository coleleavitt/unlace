unsigned __int64 __fastcall sub_2B660(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 v10; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rax
  const char *v25; // rsi
  __int64 v26; // rax
  const char *v28; // rsi
  char v29; // bp
  __int64 v30; // rdx
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-108h] BYREF
  __m128i v50; // [rsp+8h] [rbp-100h] BYREF
  __int64 v51; // [rsp+18h] [rbp-F0h]
  __m128i v52; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+30h] [rbp-D8h]
  __m128i v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __m128i v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v58; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+78h] [rbp-90h]
  __m128i v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h]
  __m128i v62; // [rsp+98h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-60h]
  __m128i v64; // [rsp+B0h] [rbp-58h] BYREF
  char v65; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-40h]

  v3 = a1[1];
  v4 = *a1;
  v66 = __readfsqword(0x28u);
  v6 = v4 + 200 * v3;
  if ( v4 != v6 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + 8) )
      {
        v8 = *(const char **)v4;
        v9 = s1;
        if ( !v7 )
          goto LABEL_5;
      }
      else
      {
        v8 = s1;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = *(const char **)a2;
LABEL_5:
      if ( strcmp(v9, v8) )
        goto LABEL_6;
LABEL_9:
      v10 = *(_QWORD *)(a2 + 32);
      if ( *(_QWORD *)(v4 + 32) )
      {
        v11 = *(const char **)(v4 + 24);
        v12 = s1;
        if ( !v10 )
          goto LABEL_12;
      }
      else
      {
        v11 = s1;
        if ( !v10 )
        {
          v13 = *(_QWORD *)(a2 + 56);
          if ( *(_QWORD *)(v4 + 56) )
            goto LABEL_14;
          goto LABEL_45;
        }
      }
      v12 = *(const char **)(a2 + 24);
LABEL_12:
      if ( strcmp(v12, v11) )
        goto LABEL_6;
      v13 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v4 + 56) )
      {
LABEL_14:
        v14 = *(const char **)(v4 + 48);
        v15 = s1;
        if ( !v13 )
          goto LABEL_16;
        goto LABEL_15;
      }
LABEL_45:
      v14 = s1;
      if ( !v13 )
        goto LABEL_17;
LABEL_15:
      v15 = *(const char **)(a2 + 48);
LABEL_16:
      if ( strcmp(v15, v14) )
        goto LABEL_6;
LABEL_17:
      v16 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v4 + 80) )
      {
        v17 = s1;
        if ( !v16 )
          goto LABEL_20;
LABEL_39:
        if ( strcmp(*(const char **)(a2 + 72), v17) )
          goto LABEL_6;
        goto LABEL_20;
      }
      v17 = *(const char **)(v4 + 72);
      if ( v16 )
        goto LABEL_39;
      if ( strcmp(s1, v17) )
        goto LABEL_6;
LABEL_20:
      v18 = *(_QWORD *)(a2 + 104);
      if ( *(_QWORD *)(v4 + 104) )
      {
        v19 = *(const char **)(v4 + 96);
        v20 = s1;
        if ( !v18 )
          goto LABEL_23;
      }
      else
      {
        v19 = s1;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = *(const char **)(a2 + 96);
LABEL_23:
      if ( strcmp(v20, v19) )
        goto LABEL_6;
LABEL_24:
      v21 = *(_QWORD *)(a2 + 128);
      if ( *(_QWORD *)(v4 + 128) )
      {
        v22 = *(const char **)(v4 + 120);
        v23 = s1;
        if ( !v21 )
          goto LABEL_27;
      }
      else
      {
        v22 = s1;
        if ( !v21 )
          goto LABEL_28;
      }
      v23 = *(const char **)(a2 + 120);
LABEL_27:
      if ( strcmp(v23, v22) )
        goto LABEL_6;
LABEL_28:
      v24 = *(_QWORD *)(a2 + 152);
      if ( !*(_QWORD *)(v4 + 152) )
      {
        v25 = s1;
        if ( !v24 )
          goto LABEL_31;
        goto LABEL_36;
      }
      v25 = *(const char **)(v4 + 144);
      if ( v24 )
      {
LABEL_36:
        if ( strcmp(*(const char **)(a2 + 144), v25) )
          goto LABEL_6;
LABEL_31:
        v26 = *(_QWORD *)(a2 + 176);
        if ( *(_QWORD *)(v4 + 176) )
        {
          v28 = *(const char **)(v4 + 168);
          if ( !v26 )
          {
            if ( !strcmp(s1, v28) )
              goto LABEL_33;
            goto LABEL_51;
          }
        }
        else
        {
          if ( !v26 )
            goto LABEL_33;
          v28 = s1;
        }
        if ( !strcmp(*(const char **)(a2 + 168), v28) )
        {
LABEL_33:
          if ( v6 != v4 )
            return v66 - __readfsqword(0x28u);
          break;
        }
LABEL_51:
        v4 += 200;
        if ( v6 == v4 )
          break;
      }
      else
      {
        if ( !strcmp(s1, v25) )
          goto LABEL_31;
LABEL_6:
        v4 += 200;
        if ( v6 == v4 )
          break;
      }
    }
  }
  sub_2B4D0((__int64)&v49, a2);
  sub_2B4D0((__int64)&v57, a2 + 96);
  v29 = *(_BYTE *)(a2 + 192);
  v30 = a1[1];
  v31 = *a1;
  v65 = v29;
  if ( a1[2] < (unsigned __int64)(v30 + 1) )
  {
    v48 = sub_1987B0(a1, v31, v30 + 1, 200);
    *a1 = v48;
    v30 = a1[1];
    v31 = v48;
  }
  v32 = _mm_loadu_si128(&v50);
  v33 = v31 + 200 * v30;
  *(_QWORD *)v33 = v49;
  v34 = v51;
  *(__m128i *)(v33 + 8) = v32;
  v35 = _mm_load_si128(&v52);
  *(_QWORD *)(v33 + 24) = v34;
  v36 = v53;
  *(__m128i *)(v33 + 32) = v35;
  v37 = _mm_loadu_si128(&v54);
  *(_QWORD *)(v33 + 48) = v36;
  v38 = v55;
  *(__m128i *)(v33 + 56) = v37;
  v39 = _mm_load_si128(&v56);
  *(_QWORD *)(v33 + 72) = v38;
  v40 = v57;
  *(__m128i *)(v33 + 80) = v39;
  v41 = _mm_loadu_si128(&v58);
  *(_QWORD *)(v33 + 96) = v40;
  v42 = v59;
  *(__m128i *)(v33 + 104) = v41;
  v43 = _mm_load_si128(&v60);
  *(_QWORD *)(v33 + 120) = v42;
  v44 = v61;
  *(__m128i *)(v33 + 128) = v43;
  v45 = _mm_loadu_si128(&v62);
  *(_QWORD *)(v33 + 144) = v44;
  v46 = v63;
  *(__m128i *)(v33 + 152) = v45;
  v47 = _mm_load_si128(&v64);
  *(_QWORD *)(v33 + 168) = v46;
  *(__m128i *)(v33 + 176) = v47;
  *(_BYTE *)(v33 + 192) = v29;
  ++a1[1];
  return v66 - __readfsqword(0x28u);
}
