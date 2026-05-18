__int64 __fastcall sub_94A00(__int64 a1, __int64 *a2, __m128i *a3, const char *a4, const char *a5)
{
  __int64 v8; // rax
  _QWORD *v9; // rbp
  size_t v10; // r14
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r13
  const __m128i *v14; // r12
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r13d
  __m128i v18; // xmm7
  __m128i v19; // xmm6
  __m128i v20; // xmm5
  __m128i v21; // xmm4
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  __m128i v25; // xmm8
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm8
  __m128i v29; // xmm8
  __m128i v30; // xmm8
  __m128i v31; // xmm8
  __m128i v32; // xmm8
  const char *v34; // rax
  const char *v35; // rbx
  size_t v36; // rax
  size_t v37; // r8
  void *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rax
  size_t v41; // [rsp+0h] [rbp-128h]
  size_t v42; // [rsp+0h] [rbp-128h]
  size_t v43; // [rsp+8h] [rbp-120h]
  __int64 (__fastcall **v44)(); // [rsp+10h] [rbp-118h] BYREF
  char v45; // [rsp+18h] [rbp-110h]
  void *ptr; // [rsp+20h] [rbp-108h] BYREF
  __int128 v47; // [rsp+28h] [rbp-100h]
  void *v48; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v49; // [rsp+40h] [rbp-E8h]
  int v50; // [rsp+50h] [rbp-D8h]
  char v51; // [rsp+54h] [rbp-D4h]
  __m128i v52; // [rsp+60h] [rbp-C8h]
  __m128i v53; // [rsp+70h] [rbp-B8h]
  __m128i v54; // [rsp+80h] [rbp-A8h]
  __m128i v55; // [rsp+90h] [rbp-98h]
  __m128i v56; // [rsp+A0h] [rbp-88h]
  __m128i v57; // [rsp+B0h] [rbp-78h]
  __m128i v58; // [rsp+C0h] [rbp-68h]
  __m128i v59; // [rsp+D0h] [rbp-58h]
  __int64 v60; // [rsp+E0h] [rbp-48h]
  int v61[2]; // [rsp+E8h] [rbp-40h]

  *(_QWORD *)v61 = __readfsqword(0x28u);
  v8 = sub_93FC0(a1, a2);
  if ( v8 )
  {
    v9 = (_QWORD *)v8;
    v45 = 102;
    ptr = nullptr;
    v47 = 0;
    v44 = &off_238E48;
    if ( a4 )
    {
      v10 = strlen(a4);
      ptr = (void *)sub_1987B0(&ptr, 0, v10 + 1, 1);
      *(_QWORD *)&v47 = v10 + 1;
      memmove(ptr, a4, v10);
      *((_BYTE *)ptr + v10) = 0;
    }
    v48 = nullptr;
    v49 = 0;
    if ( a5 )
    {
      v11 = strlen(a5);
      v12 = v11 + 1;
      v13 = v11;
      v48 = (void *)sub_1987B0(&v48, 0, v11 + 1, 1);
      *(_QWORD *)&v49 = v12;
      memmove(v48, a5, v13);
      *((_BYTE *)v48 + v13) = 0;
    }
    v51 = 0;
    v50 = 8;
    v14 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)()))(v9[5] + 80LL))(
                             v9 + 5,
                             &v44);
    v17 = sub_8ACB0(v9 + 5, (__int64)v14, 103, nullptr, v15, v16);
    if ( v17 )
    {
      v34 = (const char *)sub_18FCA0(0);
      v35 = v34;
      if ( v34 && (v36 = strlen(v34), (v37 = v36) != 0) )
      {
        v38 = (void *)*a2;
        v39 = v36 + 1;
        if ( a2[2] < v36 + 1 )
        {
          v42 = v36 + 1;
          v43 = v36;
          v40 = sub_1987B0(a2, *a2, v39, 1);
          v37 = v43;
          v39 = v42;
          *a2 = v40;
          v38 = (void *)v40;
        }
        a2[1] = v39;
        v41 = v37;
        memmove(v38, v35, v37);
        *(_BYTE *)(*a2 + v41) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    else
    {
      v18 = _mm_loadu_si128(a3);
      v19 = _mm_loadu_si128(a3 + 1);
      v20 = _mm_loadu_si128(a3 + 2);
      *a3 = _mm_loadu_si128(v14 + 1);
      v21 = _mm_loadu_si128(a3 + 3);
      v22 = _mm_loadu_si128(a3 + 4);
      v23 = _mm_loadu_si128(a3 + 5);
      v24 = _mm_loadu_si128(a3 + 6);
      v52 = v18;
      v25 = _mm_loadu_si128(v14 + 2);
      v26 = _mm_loadu_si128(a3 + 7);
      v53 = v19;
      v27 = a3[8].m128i_i64[0];
      v54 = v20;
      a3[1] = v25;
      v28 = _mm_loadu_si128(v14 + 3);
      v60 = v27;
      a3[2] = v28;
      v29 = _mm_loadu_si128(v14 + 4);
      v55 = v21;
      a3[3] = v29;
      v30 = _mm_loadu_si128(v14 + 5);
      v56 = v22;
      a3[4] = v30;
      v31 = _mm_loadu_si128(v14 + 6);
      v57 = v23;
      a3[5] = v31;
      v32 = _mm_loadu_si128(v14 + 7);
      v58 = v24;
      v59 = v26;
      a3[6] = v32;
      a3[7] = _mm_loadu_si128(v14 + 8);
      a3[8].m128i_i64[0] = v14[9].m128i_i64[0];
      v14[9].m128i_i64[0] = v27;
      v14[1] = v18;
      v14[2] = v19;
      v14[3] = v20;
      v14[4] = v21;
      v14[5] = v22;
      v14[6] = v23;
      v14[7] = v24;
      v14[8] = v26;
    }
    if ( v14 )
      (*(void (__fastcall **)(const __m128i *))(v14->m128i_i64[0] + 8))(v14);
    sub_9C8C0(&v44);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  }
  else
  {
    return 33;
  }
  return v17;
}
