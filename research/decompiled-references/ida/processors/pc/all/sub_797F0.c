__int64 __fastcall sub_797F0(__int64 a1, __int64 *a2, int a3, __int64 (__fastcall *a4)(char *, __int64), __int64 a5)
{
  __int64 *v5; // r12
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  char v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 *v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 func; // rax
  __int64 v20; // rbp
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r15
  const __m128i *v28; // rax
  __m128i v29; // xmm1
  char v30; // r8
  __int64 v31; // rax
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __m128i *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  const __m128i *v39; // rax
  __m128i v40; // xmm1
  char v41; // bp
  __int64 v42; // rax
  __int64 v43; // rsi
  __m128i v44; // xmm0
  __m128i *v45; // rax
  __int64 v47; // rax
  __int64 v48; // r13
  const __m128i *v49; // rax
  __int64 v50; // rax
  unsigned __int64 *v51; // rax
  __int64 v52; // rax
  const __m128i *v53; // rax
  __m128i v54; // [rsp+0h] [rbp-218h] BYREF
  __m128i v55; // [rsp+10h] [rbp-208h] BYREF
  __int64 v56; // [rsp+28h] [rbp-1F0h]
  __int64 v57; // [rsp+30h] [rbp-1E8h]
  __int64 *v58; // [rsp+38h] [rbp-1E0h]
  __int64 v59; // [rsp+40h] [rbp-1D8h]
  bool v60; // [rsp+4Fh] [rbp-1C9h]
  unsigned __int64 v61; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v62; // [rsp+58h] [rbp-1C0h]
  __int64 v63; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-1B0h] BYREF
  __int128 v65; // [rsp+70h] [rbp-1A8h]
  __int64 v66; // [rsp+80h] [rbp-198h]
  __int64 v67; // [rsp+88h] [rbp-190h]
  __int64 v68; // [rsp+90h] [rbp-188h]
  __int64 v69; // [rsp+98h] [rbp-180h] BYREF
  unsigned __int64 v70; // [rsp+1D8h] [rbp-40h] BYREF

  v5 = a2;
  v70 = __readfsqword(0x28u);
  v8 = sub_3F9C0(a2, a3, a4, a5);
  if ( (_BYTE)v8 )
    return 1;
  v11 = v8;
  v12 = callui(
          1197,
          "rip",
          &v63,
          &callui,
          v9,
          v10,
          v54.m128i_i64[0],
          v54.m128i_i64[1],
          v55.m128i_i64[0],
          v55.m128i_i64[1]);
  if ( v12 )
  {
    if ( v63 != -1 )
    {
      v13 = getseg();
      if ( v13 )
      {
        v14 = (1 << (*(_BYTE *)(v13 + 43) + 4)) / 8;
        v54.m128i_i64[0] = *(_QWORD *)(a4("rsp", a5) + 8);
        v15 = (unsigned __int64 *)getseg();
        v16 = (__int64)v15;
        if ( v15 )
        {
          v17 = *v15;
          v55.m128i_i64[0] = v16;
          if ( v54.m128i_i64[0] >= v17 )
            v17 = v54.m128i_i64[0];
          v62 = v17;
          v18 = *(_QWORD *)(a4("rbp", a5) + 8);
          v57 = v55.m128i_i64[0];
          v61 = v18;
          v60 = v18 == -1;
          v59 = (__int64)(int)v14 << 10;
          v56 = 2LL * (int)v14;
          v58 = &v64;
          while ( 1 )
          {
            func = get_func();
            v20 = v63;
            v21 = func;
            if ( !func )
            {
LABEL_35:
              v22 = *(_QWORD *)(v57 + 8);
LABEL_13:
              if ( v54.m128i_i64[0] + v59 <= v22 )
                v22 = v54.m128i_i64[0] + v59;
              if ( v54.m128i_i64[0] < v22 )
              {
                v55.m128i_i64[0] = (__int64)v5;
                v23 = v58;
                v24 = v14;
                v25 = v54.m128i_i64[0];
                v26 = v22;
                do
                {
                  if ( (unsigned __int8)sub_6A100(v23, v25, v20, v21, v24) )
                  {
                    v14 = v24;
                    v5 = (__int64 *)v55.m128i_i64[0];
                    v27 = v25 - v14;
                    goto LABEL_20;
                  }
                  v25 += v24;
                }
                while ( v25 < v26 );
                v5 = (__int64 *)v55.m128i_i64[0];
              }
LABEL_28:
              v38 = v63;
              v39 = (const __m128i *)get_func();
              if ( v39 )
              {
                v40 = _mm_loadl_epi64(v39);
                v41 = 1;
              }
              else
              {
                v53 = (const __m128i *)getseg();
                v40 = (__m128i)(unsigned __int64)v38;
                if ( v53 )
                  v40 = _mm_loadl_epi64(v53);
                v41 = 0;
              }
              v42 = v5[1];
              v43 = *v5;
              v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, v40);
              if ( v5[2] < (unsigned __int64)(v42 + 1) )
              {
                v55 = v44;
                v52 = qvector_reserve();
                v44 = _mm_load_si128(&v55);
                *v5 = v52;
                v43 = v52;
                v42 = v5[1];
              }
              v45 = (__m128i *)(v43 + 32 * v42);
              v45[1].m128i_i64[0] = v54.m128i_i64[0];
              v45[1].m128i_i8[8] = v41;
              *v45 = v44;
              ++v5[1];
              return 1;
            }
            if ( (*(_BYTE *)(func + 17) & 4) != 0
              && (v48 = v54.m128i_i64[0] - get_spd(), (unsigned __int8)sub_6A100(v58, v48, v20, v21, v14)) )
            {
              v27 = v48 - v14;
              v28 = (const __m128i *)get_func();
              if ( v28 )
                goto LABEL_21;
            }
            else
            {
              if ( !v12 )
                goto LABEL_35;
              v22 = *(_QWORD *)(v57 + 8);
              if ( v14 != 8 || (*(_BYTE *)(v21 + 16) & 0x10) == 0 || v60 || (v61 & 7) != 0 || v61 < v62 || v22 < v61 )
                goto LABEL_13;
              v50 = getseg();
              if ( !v50 || (*(_BYTE *)(v50 + 42) & 1) == 0 )
                goto LABEL_35;
              v66 = -1;
              v51 = (unsigned __int64 *)&v69;
              v67 = 0;
              v68 = 0;
              v65 = -1;
              do
              {
                *(_WORD *)v51 = 0;
                v51 += 5;
                *((_WORD *)v51 - 19) = 0;
                *((_WORD *)v51 - 18) = 0;
                *((_DWORD *)v51 - 2) = 0;
                *((_WORD *)v51 - 17) = 0;
                *((_OWORD *)v51 - 2) = 0;
                *(v51 - 2) = 0;
              }
              while ( v51 != &v70 );
              if ( (unsigned int)decode_insn()
                && (_WORD)v67 == 143
                && (v69 & 0xFFFF00000000FF00LL) == 0x5000000000100LL
                && (unsigned __int8)sub_6A100(&v64, v54.m128i_i64[0], v20, v21, 8) )
              {
                v27 = v54.m128i_i64[0] - 8;
              }
              else
              {
                if ( !(unsigned __int8)sub_6A100(
                                         &v64,
                                         *(unsigned __int16 *)(v21 + 40) + *(_QWORD *)(v21 + 56) + v61,
                                         v20,
                                         v21,
                                         8) )
                  goto LABEL_35;
                v27 = v61;
              }
LABEL_20:
              v28 = (const __m128i *)get_func();
              if ( v28 )
              {
LABEL_21:
                v29 = _mm_loadl_epi64(v28);
                v30 = 1;
                goto LABEL_22;
              }
            }
            v49 = (const __m128i *)getseg();
            v29 = (__m128i)(unsigned __int64)v20;
            if ( v49 )
              v29 = _mm_loadl_epi64(v49);
            v30 = 0;
LABEL_22:
            v31 = v5[1];
            v32 = *v5;
            v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, v29);
            if ( v31 && *(_QWORD *)(v32 + 32 * v31 - 16) >= v27 )
              goto LABEL_28;
            if ( v5[2] < (unsigned __int64)(v31 + 1) )
            {
              v55.m128i_i8[0] = v30;
              v54 = v33;
              v47 = qvector_reserve();
              v30 = v55.m128i_i8[0];
              v33 = _mm_load_si128(&v54);
              *v5 = v47;
              v32 = v47;
              v31 = v5[1];
            }
            v34 = v64;
            v35 = (__m128i *)(v32 + 32 * v31);
            v35[1].m128i_i64[0] = v27;
            v35[1].m128i_i8[8] = v30;
            *v35 = v33;
            v36 = v56;
            ++v5[1];
            v37 = v27 + v36;
            v63 = v34;
            v12 = 0;
            v54.m128i_i64[0] = v37;
          }
        }
      }
    }
  }
  return v11;
}
