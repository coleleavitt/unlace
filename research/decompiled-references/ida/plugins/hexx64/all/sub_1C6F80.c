_DWORD *__fastcall sub_1C6F80(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  int v7; // eax
  __int64 *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  _QWORD *v15; // rsi
  int v16; // r14d
  _QWORD *v17; // rax
  int v18; // r14d
  __int64 v19; // rdx
  __int16 v20; // r14
  __int16 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  _DWORD *v26; // r15
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  _QWORD *v34; // rsi
  unsigned __int64 v35; // rdx
  size_t v36; // rax
  __int64 v37; // r10
  _DWORD *i; // r10
  int v39; // eax
  unsigned int v40; // r12d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // rbp
  __int64 v45; // r12
  _QWORD *v46; // rdi
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // r14
  _DWORD *v52; // r13
  _QWORD *v53; // rbx
  _DWORD *v54; // [rsp+8h] [rbp-E0h]
  _QWORD *v55; // [rsp+8h] [rbp-E0h]
  _DWORD *v56; // [rsp+8h] [rbp-E0h]
  __int16 v57; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v58; // [rsp+8h] [rbp-E0h]
  __int64 v59; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+18h] [rbp-D0h]
  unsigned int v62; // [rsp+20h] [rbp-C8h]
  __int16 v63; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+20h] [rbp-C8h]
  unsigned int v65; // [rsp+20h] [rbp-C8h]
  _QWORD *v66; // [rsp+28h] [rbp-C0h]
  __int64 v68; // [rsp+38h] [rbp-B0h]
  _QWORD *v69; // [rsp+50h] [rbp-98h] BYREF
  __int128 v70; // [rsp+58h] [rbp-90h]
  int v71; // [rsp+70h] [rbp-78h]
  __int64 *v72; // [rsp+78h] [rbp-70h]
  int v73; // [rsp+80h] [rbp-68h]
  _DWORD v74[4]; // [rsp+90h] [rbp-58h] BYREF
  int v75; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-40h]

  v66 = a2;
  v76 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 3 )
  {
    sub_1C69A0((__int64)a1, a2, *(_DWORD *)(a3 + 8), a4, a6);
    goto LABEL_22;
  }
  if ( v7 > 3 )
  {
    if ( v7 != 4 )
      goto LABEL_46;
    v40 = (int)a4 / 2;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(
      a2,
      *(unsigned __int16 *)(a3 + 8),
      (unsigned int)((int)a4 / 2));
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, *(unsigned __int16 *)(a3 + 10), v40);
  }
  else if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v8 = *(__int64 **)(a3 + 8);
      v9.m128i_i64[0] = 0;
      v69 = nullptr;
      v70 = 0;
      v10 = *v8;
      v61 = *v8 + 24 * v8[1];
      if ( v61 != *v8 )
      {
        while ( *(_DWORD *)v10 != 4 )
        {
          v71 = 0;
          copy_argloc();
          v9 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 16));
          v73 = _mm_cvtsi128_si32(v9);
          v23 = (_QWORD *)sub_339CA0();
          sub_1C6F80(v74, v23, v10, (unsigned int)_mm_extract_epi16(v9, 1), a5);
          a2 = v74;
          copy_argloc();
          cleanup_argloc();
          if ( v71 == 2 )
          {
            v28 = v72;
            v29 = *v72;
            if ( 24 * v72[1] )
            {
              do
              {
                *(_WORD *)(v29 + 16) += *(_WORD *)(v10 + 16);
                v29 += 24;
                v30 = *v28;
                v31 = 24 * v28[1];
                v32 = *v28 + v31;
              }
              while ( v29 != v32 );
              v33 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 3);
              v64 = v33;
              if ( v33 )
              {
                v34 = v69;
                v35 = v33 + v70;
                v36 = 0;
                v37 = 24 * v70;
                if ( *((_QWORD *)&v70 + 1) < v35 )
                {
                  v68 = 24 * v70;
                  v59 = 24 * v28[1];
                  v69 = (_QWORD *)qvector_reserve((__int64)&v69, (__int64)v69, v35, 24);
                  v34 = v69;
                  v37 = v68;
                  v31 = v59;
                  v36 = 24 * v70 - v68;
                }
                a2 = (_QWORD *)((char *)v34 + v37);
                memmove((char *)a2 + v31, a2, v36);
                for ( i = a2; v32 != v30; i = v56 + 6 )
                {
                  *i = 0;
                  a2 = (_QWORD *)v30;
                  v56 = i;
                  copy_argloc();
                  v39 = *(_DWORD *)(v30 + 16);
                  v30 += 24;
                  v56[4] = v39;
                }
                *(_QWORD *)&v70 = v64 + v70;
              }
            }
          }
          else if ( v71 == 4 )
          {
            v11 = (unsigned __int16)v72;
            v12 = (unsigned int)v72 >> 16;
            if ( !*(_BYTE *)(v66[12] + 145LL) )
            {
              v12 = (unsigned __int16)v72;
              v11 = (unsigned int)v72 >> 16;
            }
            v16 = *(unsigned __int16 *)(v10 + 18);
            v13 = v70;
            v14 = *(_WORD *)(v10 + 16);
            v15 = v69;
            LOWORD(v16) = (unsigned __int16)v16 >> 1;
            if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
            {
              v65 = v12;
              v58 = *(_WORD *)(v10 + 16);
              v69 = (_QWORD *)qvector_reserve((__int64)&v69, (__int64)v69, v70 + 1, 24);
              v15 = v69;
              v12 = v65;
              v13 = v70;
              v14 = v58;
            }
            v17 = &v15[3 * v13];
            v62 = v12;
            v18 = v14 | (v16 << 16);
            *v17 = 0;
            v17[1] = 0;
            *((_DWORD *)v17 + 4) = 0xFFFF;
            *(_QWORD *)&v70 = v70 + 1;
            v54 = v17;
            cleanup_argloc();
            *v54 = 3;
            a2 = v69;
            v54[2] = v62;
            v19 = v70;
            v54[4] = v18;
            v20 = *(_WORD *)(v10 + 16);
            v21 = *(_WORD *)(v10 + 18) >> 1;
            if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v19 + 1) )
            {
              v57 = *(_WORD *)(v10 + 18) >> 1;
              v69 = (_QWORD *)qvector_reserve((__int64)&v69, (__int64)a2, v19 + 1, 24);
              v19 = v70;
              a2 = v69;
              v21 = v57;
            }
            v63 = v21;
            v22 = &a2[3 * v19];
            *v22 = 0;
            v22[1] = 0;
            *((_DWORD *)v22 + 4) = 0xFFFF;
            *(_QWORD *)&v70 = v70 + 1;
            v55 = v22;
            cleanup_argloc();
            *(_DWORD *)v55 = 3;
            *((_DWORD *)v55 + 2) = v11;
            *((_WORD *)v55 + 8) = v63 + v20;
            *((_WORD *)v55 + 9) = v63;
          }
          else
          {
            v74[0] = 0;
            copy_argloc();
            v24 = v70;
            v25 = v69;
            v75 = v73;
            if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
            {
              v69 = (_QWORD *)qvector_reserve((__int64)&v69, (__int64)v69, v70 + 1, 24);
              v24 = v70;
              v25 = v69;
            }
            v26 = &v25[3 * v24];
            a2 = v74;
            *v26 = 0;
            copy_argloc();
            *(_QWORD *)&v70 = v70 + 1;
            v26[4] = v75;
            cleanup_argloc();
          }
          v10 += 24;
          cleanup_argloc();
          if ( v10 == v61 )
            goto LABEL_34;
        }
        if ( !under_debugger )
          sub_383060(0xC933u, *(double *)v9.m128i_i64);
LABEL_48:
        BUG();
      }
LABEL_34:
      v41 = qalloc_or_throw(24, (__int64)a2, a3, a4);
      *(_QWORD *)v41 = 0;
      v44 = (__int64 *)v41;
      *(_OWORD *)(v41 + 8) = 0;
      v45 = v70;
      if ( (_QWORD)v70 )
      {
        v49 = qalloc_or_throw(24 * v70, (__int64)a2, v42, v43);
        *v44 = v49;
        v50 = v49;
        v51 = 0;
        v44[2] = v45;
        while ( 1 )
        {
          v52 = (_DWORD *)(24 * v51 + v50);
          v53 = &v69[3 * v51];
          *v52 = 0;
          copy_argloc();
          ++v51;
          v52[4] = *((_DWORD *)v53 + 4);
          if ( v45 == v51 )
            break;
          v50 = *v44;
        }
        v44[1] = v45;
      }
      v46 = v69;
      if ( v69 )
      {
        v47 = v70;
        if ( (_QWORD)v70 )
        {
          v48 = 0;
          do
          {
            ++v48;
            cleanup_argloc();
            v46 = v69;
          }
          while ( v47 != v48 );
        }
        *(_QWORD *)&v70 = 0;
        qfree((__int64)v46);
      }
      goto LABEL_21;
    }
LABEL_46:
    if ( !under_debugger )
      sub_383060(0xC7A8u, a6);
    goto LABEL_48;
  }
LABEL_21:
  *a1 = 0;
  copy_argloc();
LABEL_22:
  cleanup_argloc();
  return a1;
}

