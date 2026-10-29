unsigned __int64 __fastcall sub_5A460(__int64 a1)
{
  char *v1; // rax
  char *v3; // rdi
  __int64 v4; // rsi
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v6)(__int64, __int64, _QWORD); // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  signed int **v9; // rax
  signed int *v10; // r14
  __int64 v11; // r13
  int v12; // r11d
  _QWORD *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbp
  unsigned __int8 (__fastcall *v17)(__int64, __int64, __int64); // rax
  _QWORD *v18; // rbp
  signed int v19; // r12d
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int8 (__fastcall *v23)(__int64, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v24)(__int64, __int64, _QWORD); // rax
  _QWORD *v25; // rbp
  __int64 v26; // rbx
  __m128i v27; // xmm0
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // xmm0_8
  __int64 v30; // rax
  unsigned __int8 (__fastcall *v32)(__int64, __int64, _QWORD); // rax
  _QWORD *v33; // r8
  __int64 v34; // rbp
  __m128i v35; // xmm0
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 i; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  __int64 v47; // r10
  __int64 j; // r8
  char *v49; // rdx
  char *v50; // rax
  char *v51; // rax
  int v52; // r9d
  char *v53; // rdx
  char *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // [rsp+1Ch] [rbp-8Ch]
  __int64 v76; // [rsp+20h] [rbp-88h]
  __int64 v77; // [rsp+28h] [rbp-80h]
  __int64 v78; // [rsp+30h] [rbp-78h]
  _QWORD *v79; // [rsp+40h] [rbp-68h]
  unsigned __int64 v80; // [rsp+40h] [rbp-68h]
  unsigned __int64 v81; // [rsp+40h] [rbp-68h]
  _QWORD *v82; // [rsp+40h] [rbp-68h]
  unsigned __int64 v83; // [rsp+40h] [rbp-68h]
  unsigned __int64 v84; // [rsp+40h] [rbp-68h]
  unsigned __int64 v85; // [rsp+40h] [rbp-68h]
  unsigned __int64 v86; // [rsp+40h] [rbp-68h]
  int v87; // [rsp+48h] [rbp-60h]
  _QWORD *v88; // [rsp+48h] [rbp-60h]
  int v89; // [rsp+48h] [rbp-60h]
  _QWORD *v90; // [rsp+48h] [rbp-60h]
  int v91; // [rsp+54h] [rbp-54h] BYREF
  unsigned __int64 v92; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v94; // [rsp+68h] [rbp-40h]

  v1 = *(char **)(a1 + 24);
  v94 = __readfsqword(0x28u);
  v3 = *(char **)(a1 + 16);
  v78 = a1 + 48;
  v77 = a1 + 80;
  if ( v3 != v1 )
  {
    while ( 1 )
    {
      v4 = *((unsigned int *)v3 + 1);
      v75 = *((_DWORD *)v3 + 1);
      if ( v1 - v3 <= 8 )
        goto LABEL_3;
      v46 = *((_QWORD *)v1 - 1);
      *((_DWORD *)v1 - 2) = *(_DWORD *)v3;
      v47 = (v1 - 8 - v3) >> 3;
      *((_DWORD *)v1 - 1) = *((_DWORD *)v3 + 1);
      if ( v47 - 1 > 1 )
        break;
      v4 = 0;
LABEL_89:
      if ( (v47 & 1) == 0 && (v47 - 2) / 2 == v4 )
      {
        v53 = &v3[8 * v4];
        v54 = &v3[16 * v4 + 8];
        *(_DWORD *)v53 = *(_DWORD *)v54;
        *((_DWORD *)v53 + 1) = *((_DWORD *)v54 + 1);
        v4 = 2 * v4 + 1;
      }
      sub_57040((__int64)v3, v4, 0, v46);
LABEL_3:
      *(_QWORD *)(a1 + 24) -= 8LL;
      hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v3, v4);
      hexdsp(208, v78, (unsigned int)v75);
      v6 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(208, v78);
      v6(205, v77, (unsigned int)v75);
      v7 = v75;
      v8 = a1;
      v76 = **(_QWORD **)(a1 + 64) + 16LL * v75;
      v9 = (signed int **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v75);
      v10 = *v9;
      v11 = (__int64)&(*v9)[(_QWORD)v9[1]];
      if ( *v9 != (signed int *)v11 )
      {
        while ( 1 )
        {
          v18 = *(_QWORD **)(a1 + 8);
          v19 = *v10;
          v20 = v18[4];
          if ( v20 )
            break;
          v21 = v18[1];
          v91 = -1;
          if ( v21 )
          {
            v7 = v18[3];
            v8 = (__int64)(v18 + 3);
            v36 = v18[5];
            if ( (unsigned __int64)&v91 < v7 || (unsigned __int64)&v91 >= v7 + 4 * v36 )
            {
              v45 = 0;
              if ( v36 >= v21
                || (v80 = v21,
                    v61 = qvector_reserve(v8, v7, v21, 4),
                    v45 = v18[4],
                    v21 = v80,
                    v18[3] = v61,
                    v7 = v61,
                    v45 < v80) )
              {
                while ( 1 )
                {
                  *(_DWORD *)(v7 + 4 * v45++) = -1;
                  if ( v21 == v45 )
                    break;
                  v7 = v18[3];
                }
              }
            }
            else
            {
              v37 = 0;
              if ( v36 >= v21
                || (v83 = v21,
                    v70 = qvector_reserve(v8, v7, v21, 4),
                    v37 = v18[4],
                    v21 = v83,
                    v18[3] = v70,
                    v7 = v70,
                    v37 < v83) )
              {
                while ( 1 )
                {
                  *(_DWORD *)(v7 + 4 * v37++) = -1;
                  if ( v21 == v37 )
                    break;
                  v7 = v18[3];
                }
              }
            }
            v18[4] = v21;
            for ( i = 0; i != v21; ++i )
            {
              v39 = *(int *)(*v18 + 4 * i);
              if ( (_DWORD)v39 != -1 )
              {
                v7 = v18[3];
                *(_DWORD *)(v7 + 4 * v39) = i;
              }
            }
            v13 = *(_QWORD **)(a1 + 8);
            v22 = v13[4];
            if ( v75 < 0 || (unsigned __int64)v75 >= v18[4] )
            {
              if ( v22 )
                goto LABEL_21;
              v40 = v13[1];
              if ( !v40 )
              {
                v18 = *(_QWORD **)(a1 + 8);
                goto LABEL_16;
              }
              v8 = (__int64)(v13 + 3);
              v12 = -1;
            }
            else
            {
              v8 = 4LL * v75;
              v12 = *(_DWORD *)(v18[3] + v8);
              if ( v22 || (v40 = v13[1]) == 0 )
              {
                v18 = *(_QWORD **)(a1 + 8);
                goto LABEL_8;
              }
              v8 = (__int64)(v13 + 3);
            }
            v91 = -1;
            v7 = v13[3];
            v41 = v13[5];
            if ( (unsigned __int64)&v91 < v7 || (unsigned __int64)&v91 >= v7 + 4 * v41 )
            {
              if ( v41 < v40 )
              {
                v87 = v12;
                v79 = v13;
                v60 = qvector_reserve(v8, v7, v40, 4);
                v13 = v79;
                v12 = v87;
                v79[3] = v60;
              }
              v44 = v13[4];
              if ( v44 < v40 )
              {
                do
                  *(_DWORD *)(v13[3] + 4 * v44++) = -1;
                while ( v44 != v40 );
              }
            }
            else
            {
              if ( v41 < v40 )
              {
                v89 = v12;
                v82 = v13;
                v69 = qvector_reserve(v8, v7, v40, 4);
                v13 = v82;
                v12 = v89;
                v82[3] = v69;
              }
              v42 = v13[4];
              if ( v42 < v40 )
              {
                do
                  *(_DWORD *)(v13[3] + 4 * v42++) = -1;
                while ( v42 != v40 );
              }
            }
            v13[4] = v40;
            do
            {
              v43 = *(int *)(*v13 + 4 * v20);
              if ( (_DWORD)v43 != -1 )
                *(_DWORD *)(v13[3] + 4 * v43) = v20;
              ++v20;
            }
            while ( v20 != v40 );
            if ( v19 < 0 )
              goto LABEL_68;
LABEL_9:
            v14 = v19;
            if ( (unsigned __int64)v19 < v13[4] )
              goto LABEL_10;
LABEL_68:
            v15 = -1;
LABEL_11:
            if ( v15 <= v12 )
              goto LABEL_23;
            v16 = **(_QWORD **)(a1 + 64) + 16LL * v19;
            v17 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v8, v7);
            v7 = v16;
            v8 = 207;
            if ( !v17(207, v16, v76) )
              goto LABEL_13;
            v32 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(207, v16);
            v7 = a1 + 48;
            v8 = 205;
            if ( !v32(205, v78, (unsigned int)v19) )
              goto LABEL_13;
            v33 = *(_QWORD **)(a1 + 8);
            v34 = v33[4];
            if ( !v34 )
            {
              v55 = v33[1];
              v91 = -1;
              if ( !v55 )
                goto LABEL_107;
              v56 = v33[3];
              v57 = v33[5];
              if ( (unsigned __int64)&v91 < v56 || (unsigned __int64)&v91 >= v56 + 4 * v57 )
              {
                v67 = 0;
                if ( v57 >= v55
                  || (v88 = v33,
                      v81 = v55,
                      v68 = qvector_reserve(v33 + 3, v56, v55, 4),
                      v33 = v88,
                      v55 = v81,
                      v56 = v68,
                      v67 = v88[4],
                      v88[3] = v68,
                      v67 < v81) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v56 + 4 * v67++) = -1;
                    if ( v55 == v67 )
                      break;
                    v56 = v33[3];
                  }
                }
              }
              else
              {
                v58 = 0;
                if ( v57 >= v55
                  || (v90 = v33,
                      v85 = v55,
                      v73 = qvector_reserve(v33 + 3, v56, v55, 4),
                      v33 = v90,
                      v55 = v85,
                      v56 = v73,
                      v58 = v90[4],
                      v90[3] = v73,
                      v58 < v85) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v56 + 4 * v58++) = -1;
                    if ( v55 == v58 )
                      break;
                    v56 = v33[3];
                  }
                }
              }
              v33[4] = v55;
              do
              {
                v59 = *(int *)(*v33 + 4 * v34);
                if ( (_DWORD)v59 != -1 )
                  *(_DWORD *)(v33[3] + 4 * v59) = v34;
                ++v34;
              }
              while ( v55 != v34 );
            }
            if ( v19 >= 0 && (unsigned __int64)v19 < v33[4] )
            {
              v35 = _mm_cvtsi32_si128(*(_DWORD *)(v33[3] + 4LL * v19));
              goto LABEL_39;
            }
LABEL_107:
            v35 = _mm_cvtsi32_si128(0xFFFFFFFF);
LABEL_39:
            v28 = *(unsigned __int64 **)(a1 + 24);
            v29 = _mm_unpacklo_epi32(v35, _mm_cvtsi32_si128(v19)).m128i_u64[0];
            if ( v28 == *(unsigned __int64 **)(a1 + 32) )
            {
              v93 = v29;
              sub_5A340(a1 + 16, &v93);
              v30 = *(_QWORD *)(a1 + 24);
              goto LABEL_31;
            }
LABEL_30:
            *v28 = v29;
            v30 = *(_QWORD *)(a1 + 24) + 8LL;
            *(_QWORD *)(a1 + 24) = v30;
LABEL_31:
            v8 = *(_QWORD *)(a1 + 16);
            ++v10;
            v7 = ((v30 - v8) >> 3) - 1;
            sub_57040(v8, v7, 0, *(_QWORD *)(v30 - 8));
            if ( (signed int *)v11 == v10 )
              goto LABEL_32;
          }
          else
          {
LABEL_16:
            if ( v19 >= 0 )
            {
              v14 = v19;
              if ( (unsigned __int64)v19 < v18[4] )
              {
                v13 = v18;
LABEL_19:
                v12 = -1;
LABEL_10:
                v15 = *(_DWORD *)(v13[3] + 4 * v14);
                goto LABEL_11;
              }
            }
LABEL_23:
            v23 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v8, v7);
            v7 = a1 + 80;
            v8 = 205;
            if ( v23(205, v77, (unsigned int)v19) )
            {
              v24 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(205, v77);
              v7 = a1 + 48;
              v8 = 205;
              if ( v24(205, v78, (unsigned int)v19) )
              {
                v25 = *(_QWORD **)(a1 + 8);
                v26 = v25[4];
                if ( v26 )
                  goto LABEL_26;
                v62 = v25[1];
                v91 = -1;
                if ( !v62 )
                  goto LABEL_120;
                v63 = v25[3];
                v64 = v25[5];
                if ( (unsigned __int64)&v91 < v63 || (unsigned __int64)&v91 >= v63 + 4 * v64 )
                {
                  v71 = 0;
                  if ( v64 >= v62
                    || (v84 = v62,
                        v72 = qvector_reserve(v25 + 3, v63, v62, 4),
                        v71 = v25[4],
                        v62 = v84,
                        v25[3] = v72,
                        v63 = v72,
                        v71 < v84) )
                  {
                    while ( 1 )
                    {
                      *(_DWORD *)(v63 + 4 * v71++) = -1;
                      if ( v62 == v71 )
                        break;
                      v63 = v25[3];
                    }
                  }
                }
                else
                {
                  v65 = 0;
                  if ( v64 >= v62
                    || (v86 = v62,
                        v74 = qvector_reserve(v25 + 3, v63, v62, 4),
                        v65 = v25[4],
                        v62 = v86,
                        v25[3] = v74,
                        v63 = v74,
                        v65 < v86) )
                  {
                    while ( 1 )
                    {
                      *(_DWORD *)(v63 + 4 * v65++) = -1;
                      if ( v62 == v65 )
                        break;
                      v63 = v25[3];
                    }
                  }
                }
                v25[4] = v62;
                do
                {
                  v66 = *(int *)(*v25 + 4 * v26);
                  if ( (_DWORD)v66 != -1 )
                    *(_DWORD *)(v25[3] + 4 * v66) = v26;
                  ++v26;
                }
                while ( v62 != v26 );
LABEL_26:
                if ( v19 >= 0 && (unsigned __int64)v19 < v25[4] )
                  v27 = _mm_cvtsi32_si128(*(_DWORD *)(v25[3] + 4LL * v19));
                else
LABEL_120:
                  v27 = _mm_cvtsi32_si128(0xFFFFFFFF);
                v28 = *(unsigned __int64 **)(a1 + 24);
                v29 = _mm_unpacklo_epi32(v27, _mm_cvtsi32_si128(v19)).m128i_u64[0];
                if ( v28 == *(unsigned __int64 **)(a1 + 32) )
                {
                  v92 = v29;
                  sub_5A340(a1 + 16, &v92);
                  v30 = *(_QWORD *)(a1 + 24);
                  goto LABEL_31;
                }
                goto LABEL_30;
              }
            }
LABEL_13:
            if ( (signed int *)v11 == ++v10 )
              goto LABEL_32;
          }
        }
        if ( v75 < 0 || v75 >= v20 )
        {
          v22 = v18[4];
          v13 = *(_QWORD **)(a1 + 8);
LABEL_21:
          if ( v19 >= 0 )
          {
            v14 = v19;
            if ( v19 < v22 )
              goto LABEL_19;
          }
          goto LABEL_23;
        }
        v8 = 4LL * v75;
        v12 = *(_DWORD *)(v18[3] + v8);
LABEL_8:
        v13 = v18;
        if ( v19 < 0 )
          goto LABEL_68;
        goto LABEL_9;
      }
LABEL_32:
      v1 = *(char **)(a1 + 24);
      v3 = *(char **)(a1 + 16);
      if ( v1 == v3 )
        return v94 - __readfsqword(0x28u);
    }
    for ( j = 0; ; j = v4 )
    {
      v4 = 2 * (j + 1) - 1;
      v51 = &v3[16 * j + 16];
      v49 = &v3[8 * v4];
      v52 = *(_DWORD *)v49;
      if ( *(_DWORD *)v49 <= *(_DWORD *)v51 )
      {
        if ( v52 == *(_DWORD *)v51 )
        {
          if ( *((_DWORD *)v49 + 1) > *((_DWORD *)v51 + 1) )
            goto LABEL_83;
        }
        else
        {
          v52 = *(_DWORD *)v51;
        }
        v49 = &v3[16 * j + 16];
        v4 = 2 * (j + 1);
      }
LABEL_83:
      v50 = &v3[8 * j];
      *(_DWORD *)v50 = v52;
      *((_DWORD *)v50 + 1) = *((_DWORD *)v49 + 1);
      if ( v4 >= (v47 - 1) / 2 )
        goto LABEL_89;
    }
  }
  return v94 - __readfsqword(0x28u);
}

