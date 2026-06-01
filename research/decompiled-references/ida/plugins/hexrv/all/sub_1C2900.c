_DWORD *__fastcall sub_1C2900(_DWORD *a1, _QWORD *a2, __int64 a3, signed int a4, __int64 a5)
{
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int16 v19; // r14
  __int16 v20; // r8
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  _DWORD *v26; // r15
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r10
  _DWORD *i; // r10
  int v37; // eax
  unsigned int v38; // r12d
  __int64 v39; // rax
  __int64 *v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  _DWORD *v45; // r13
  __int64 v46; // rbx
  _DWORD *v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+8h] [rbp-E0h]
  char *v49; // [rsp+8h] [rbp-E0h]
  _DWORD *v50; // [rsp+8h] [rbp-E0h]
  __int16 v51; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v52; // [rsp+8h] [rbp-E0h]
  __int64 v53; // [rsp+8h] [rbp-E0h]
  __int64 v55; // [rsp+18h] [rbp-D0h]
  unsigned int v56; // [rsp+20h] [rbp-C8h]
  __int16 v57; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+20h] [rbp-C8h]
  unsigned int v59; // [rsp+20h] [rbp-C8h]
  __int64 v61; // [rsp+50h] [rbp-98h]
  __int128 v62; // [rsp+58h] [rbp-90h]
  int v63; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v64; // [rsp+78h] [rbp-70h]
  int v65; // [rsp+80h] [rbp-68h]
  int v66[4]; // [rsp+90h] [rbp-58h] BYREF
  int v67; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v68; // [rsp+A8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 3 )
  {
    sub_1C2320((__int64)a1, a2, *(_DWORD *)(a3 + 8), a4);
    goto LABEL_22;
  }
  if ( v6 > 3 )
  {
    if ( v6 != 4 )
      goto LABEL_46;
    v38 = a4 / 2;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(
      a2,
      *(unsigned __int16 *)(a3 + 8),
      (unsigned int)(a4 / 2));
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, *(unsigned __int16 *)(a3 + 10), v38);
  }
  else if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v7 = *(__int64 **)(a3 + 8);
      v61 = 0;
      v62 = 0;
      v8 = *v7;
      v55 = *v7 + 24 * v7[1];
      if ( v55 != *v7 )
      {
        while ( *(_DWORD *)v8 != 4 )
        {
          v63 = 0;
          copy_argloc();
          v22 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 16));
          v65 = _mm_cvtsi128_si32(v22);
          v23 = sub_3346E0(&v63);
          sub_1C2900(v66, v23, v8, (unsigned int)_mm_extract_epi16(v22, 1), a5);
          copy_argloc();
          cleanup_argloc();
          if ( v63 == 2 )
          {
            v28 = v64;
            v29 = *v64;
            if ( 24 * v64[1] )
            {
              do
              {
                *(_WORD *)(v29 + 16) += *(_WORD *)(v8 + 16);
                v29 += 24;
                v30 = *v28;
                v31 = 24 * v28[1];
                v32 = *v28 + v31;
              }
              while ( v29 != v32 );
              v33 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 3);
              v58 = v33;
              if ( v33 )
              {
                v34 = v61;
                v35 = 24 * v62;
                if ( *((_QWORD *)&v62 + 1) < v33 + (unsigned __int64)v62 )
                {
                  v53 = 24 * v28[1];
                  v61 = qvector_reserve();
                  v34 = v61;
                  v35 = 24 * v62;
                  v31 = v53;
                }
                v49 = (char *)(v34 + v35);
                memmove(&v49[v31], v49, 0);
                for ( i = v49; v32 != v30; i = v50 + 6 )
                {
                  *i = 0;
                  v50 = i;
                  copy_argloc();
                  v37 = *(_DWORD *)(v30 + 16);
                  v30 += 24;
                  v50[4] = v37;
                }
                *(_QWORD *)&v62 = v58 + v62;
              }
            }
          }
          else if ( v63 == 4 )
          {
            v9 = (unsigned __int16)v64;
            v10 = (unsigned int)v64 >> 16;
            if ( !*(_BYTE *)(a2[12] + 145LL) )
            {
              v10 = (unsigned __int16)v64;
              v9 = (unsigned int)v64 >> 16;
            }
            v14 = *(unsigned __int16 *)(v8 + 18);
            v11 = v62;
            v12 = *(_WORD *)(v8 + 16);
            v13 = v61;
            LOWORD(v14) = (unsigned __int16)v14 >> 1;
            if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
            {
              v59 = v10;
              v52 = *(_WORD *)(v8 + 16);
              v61 = qvector_reserve();
              v13 = v61;
              v10 = v59;
              v11 = v62;
              v12 = v52;
            }
            v15 = v13 + 24 * v11;
            v56 = v10;
            v16 = v12 | (v14 << 16);
            *(_QWORD *)v15 = 0;
            *(_QWORD *)(v15 + 8) = 0;
            *(_DWORD *)(v15 + 16) = 0xFFFF;
            *(_QWORD *)&v62 = v62 + 1;
            v47 = (_DWORD *)v15;
            cleanup_argloc();
            *v47 = 3;
            v17 = v61;
            v47[2] = v56;
            v18 = v62;
            v47[4] = v16;
            v19 = *(_WORD *)(v8 + 16);
            v20 = *(_WORD *)(v8 + 18) >> 1;
            if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
            {
              v51 = *(_WORD *)(v8 + 18) >> 1;
              v61 = qvector_reserve();
              v18 = v62;
              v17 = v61;
              v20 = v51;
            }
            v57 = v20;
            v21 = v17 + 24 * v18;
            *(_QWORD *)v21 = 0;
            *(_QWORD *)(v21 + 8) = 0;
            *(_DWORD *)(v21 + 16) = 0xFFFF;
            *(_QWORD *)&v62 = v62 + 1;
            v48 = v21;
            cleanup_argloc();
            *(_DWORD *)v48 = 3;
            *(_DWORD *)(v48 + 8) = v9;
            *(_WORD *)(v48 + 16) = v57 + v19;
            *(_WORD *)(v48 + 18) = v57;
          }
          else
          {
            v66[0] = 0;
            copy_argloc();
            v24 = v62;
            v25 = v61;
            v67 = v65;
            if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
            {
              v61 = qvector_reserve();
              v24 = v62;
              v25 = v61;
            }
            v26 = (_DWORD *)(v25 + 24 * v24);
            *v26 = 0;
            copy_argloc();
            *(_QWORD *)&v62 = v62 + 1;
            v26[4] = v67;
            cleanup_argloc();
          }
          v8 += 24;
          cleanup_argloc();
          if ( v8 == v55 )
            goto LABEL_34;
        }
        if ( !under_debugger )
          sub_37DDE0(51507);
LABEL_48:
        BUG();
      }
LABEL_34:
      v39 = qalloc_or_throw();
      *(_QWORD *)v39 = 0;
      v40 = (__int64 *)v39;
      *(_OWORD *)(v39 + 8) = 0;
      if ( (_QWORD)v62 )
      {
        v42 = qalloc_or_throw();
        *v40 = v42;
        v43 = v42;
        v44 = 0;
        v40[2] = v62;
        while ( 1 )
        {
          v45 = (_DWORD *)(24 * v44 + v43);
          v46 = v61 + 24 * v44;
          *v45 = 0;
          copy_argloc();
          ++v44;
          v45[4] = *(_DWORD *)(v46 + 16);
          if ( (_QWORD)v62 == v44 )
            break;
          v43 = *v40;
        }
        v40[1] = v62;
      }
      if ( v61 )
      {
        if ( (_QWORD)v62 )
        {
          v41 = 0;
          do
          {
            ++v41;
            cleanup_argloc();
          }
          while ( (_QWORD)v62 != v41 );
        }
        qfree();
      }
      goto LABEL_21;
    }
LABEL_46:
    if ( !under_debugger )
      sub_37DDE0(51112);
    goto LABEL_48;
  }
LABEL_21:
  *a1 = 0;
  copy_argloc();
LABEL_22:
  cleanup_argloc();
  return a1;
}

