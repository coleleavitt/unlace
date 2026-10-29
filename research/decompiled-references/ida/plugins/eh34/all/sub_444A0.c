__int64 __fastcall sub_444A0(__int64 a1, __int64 *a2, int *a3, __int64 a4, __int64 *a5, unsigned int a6, int a7)
{
  __int64 v10; // r15
  _QWORD *v12; // rdi
  __int64 v14; // rdi
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v16; // rsi
  __int64 v17; // r12
  int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  _QWORD *v25; // r8
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int32 v28; // r9d
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rsi
  __m128i *v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rcx
  const __m128i *v44; // rdi
  __int64 v45; // rsi
  __m128i v46; // xmm0
  bool v47; // cf
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rcx
  const __m128i *v52; // rdi
  __int64 v53; // rsi
  __m128i v54; // xmm0
  int v55; // [rsp+0h] [rbp-A8h]
  __int64 v56; // [rsp+10h] [rbp-98h]
  _QWORD *v57; // [rsp+18h] [rbp-90h]
  _QWORD *v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+20h] [rbp-88h]
  unsigned __int64 v60; // [rsp+20h] [rbp-88h]
  unsigned __int64 v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  __int32 v63; // [rsp+28h] [rbp-80h]
  __int64 v64; // [rsp+30h] [rbp-78h]
  unsigned __int64 v65; // [rsp+30h] [rbp-78h]
  __int64 v66; // [rsp+38h] [rbp-70h]
  __m128i v67; // [rsp+40h] [rbp-68h] BYREF
  __m128i v68; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-40h]

  v10 = *a5;
  v55 = a4;
  v69 = __readfsqword(0x28u);
  if ( v10 != -1 )
  {
    v23 = sub_4CC20(a2 + 6, v10);
    v24 = a2[5];
    v25 = *(_QWORD **)(v23 + 16);
    v56 = v23;
    v26 = *a2;
    v67 = (__m128i)v24;
    v27 = v25 + 1;
    v68.m128i_i8[0] = 0;
    v28 = *(_DWORD *)(v26 + 8);
    v68.m128i_i32[2] = v28;
    v29 = v25[2];
    v30 = v25[1];
    v31 = v25[3];
    v32 = v29 + 1;
    if ( (unsigned __int64)&v67 >= v30 && (unsigned __int64)&v67 < v30 + 32 * v31 )
    {
      if ( v31 < v32 )
      {
        v64 = v25[3];
        v63 = v28;
        v61 = v24;
        v58 = v25;
        v48 = qvector_reserve(v27, 0, v29 + 1, 32);
        v49 = v48;
        v50 = v58[2];
        v51 = v58[3];
        v58[3] = v64;
        v52 = (const __m128i *)v58[1];
        v53 = v50 - 1;
        if ( v53 >= 0 )
        {
          do
          {
            v54 = _mm_loadu_si128(v52);
            v48 += 32;
            v52 += 2;
            *(__m128i *)(v48 - 32) = v54;
            *(__m128i *)(v48 - 16) = _mm_loadu_si128(v52 - 1);
            v47 = v53-- == 0;
          }
          while ( !v47 );
          v52 = (const __m128i *)v58[1];
        }
        v66 = v51;
        v65 = v49;
        qfree(v52);
        v25 = v58;
        v30 = v65;
        v28 = v63;
        v29 = v58[2];
        v24 = v61;
        v58[1] = v65;
        v58[3] = v66;
      }
      v37 = v30 + 32 * v29;
      *(_QWORD *)v37 = v24;
      *(_QWORD *)(v37 + 8) = 0;
      *(_BYTE *)(v37 + 16) = 0;
      *(_DWORD *)(v37 + 24) = v28;
      ++v25[2];
      if ( a5[1] )
        goto LABEL_13;
    }
    else
    {
      if ( v31 < v32 )
      {
        v59 = v25[3];
        v57 = v25;
        v40 = qvector_reserve(v27, 0, v29 + 1, 32);
        v41 = v40;
        v42 = v57[2];
        v43 = v57[3];
        v57[3] = v59;
        v44 = (const __m128i *)v57[1];
        v45 = v42 - 1;
        if ( v45 >= 0 )
        {
          do
          {
            v46 = _mm_loadu_si128(v44);
            v40 += 32;
            v44 += 2;
            *(__m128i *)(v40 - 32) = v46;
            *(__m128i *)(v40 - 16) = _mm_loadu_si128(v44 - 1);
            v47 = v45-- == 0;
          }
          while ( !v47 );
          v44 = (const __m128i *)v57[1];
        }
        v62 = v43;
        v60 = v41;
        qfree(v44);
        v25 = v57;
        v30 = v60;
        v57[1] = v60;
        v29 = v57[2];
        v57[3] = v62;
      }
      v33 = (__m128i *)(32 * v29 + v30);
      *v33 = _mm_load_si128(&v67);
      v33[1] = _mm_load_si128(&v68);
      ++v25[2];
      if ( a5[1] )
      {
LABEL_13:
        v34 = sub_4C060(v56);
        *a3 = v34;
        v18 = v34;
        v17 = a5[1];
        goto LABEL_5;
      }
    }
    sub_64B50(
      (unsigned int)&v67,
      a2[1],
      (unsigned int)"make_handler_block: state %d ncatch %d handler %a inlined %a has nullptr for block",
      a6,
      a7,
      v55);
    v38 = v67.m128i_i64[0];
    v39 = _mm_loadu_si128((const __m128i *)&v67.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v38;
    *(__m128i *)(a1 + 8) = v39;
    return a1;
  }
  v12 = a2 + 6;
  if ( a7 == -1 )
  {
    v36 = sub_4DCB0(v12, a4, a6);
    *a3 = sub_4C060(v36);
    hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v36, a4);
    v16 = a2 + 46;
  }
  else
  {
    v14 = sub_4DCD0((_DWORD)v12, a4, a6, a7, (_DWORD)a5, a6, a4);
    *a3 = sub_4C060(v14);
    hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v14, a4);
    v16 = a2 + 48;
  }
  v17 = 0;
  hexdsp(205, v16, a6);
  v18 = *a3;
LABEL_5:
  v19 = a2[29];
  v20 = a2[28];
  if ( a2[30] < (unsigned __int64)(v19 + 1) )
  {
    v35 = qvector_reserve(a2 + 28, v20, v19 + 1, 4);
    a2[28] = v35;
    v20 = v35;
    v19 = a2[29];
  }
  *(_DWORD *)(v20 + 4 * v19) = v18;
  ++a2[29];
  *(_QWORD *)a1 = v17;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

