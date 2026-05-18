__int64 __fastcall sub_8CF20(__int64 a1, __m128i *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r14
  __int64 v7; // rax
  const __m128i *v8; // rbp
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r12d
  __m128i v13; // xmm7
  __m128i v14; // xmm6
  __m128i v15; // xmm5
  __m128i v16; // xmm8
  __m128i v17; // xmm4
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  __m128i v20; // xmm8
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __m128i v24; // xmm8
  __m128i v25; // xmm8
  __m128i v26; // xmm8
  __m128i v27; // xmm8
  __int64 (__fastcall **v28)(); // [rsp+0h] [rbp-F8h] BYREF
  char v29; // [rsp+8h] [rbp-F0h]
  void *ptr; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-E0h]
  bool v32; // [rsp+28h] [rbp-D0h]
  __m128i v33; // [rsp+30h] [rbp-C8h]
  __m128i v34; // [rsp+40h] [rbp-B8h]
  __m128i v35; // [rsp+50h] [rbp-A8h]
  __m128i v36; // [rsp+60h] [rbp-98h]
  __m128i v37; // [rsp+70h] [rbp-88h]
  __m128i v38; // [rsp+80h] [rbp-78h]
  __m128i v39; // [rsp+90h] [rbp-68h]
  __m128i v40; // [rsp+A0h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v29 = 28;
  v31 = 0;
  v28 = &off_238068;
  ptr = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)sub_1987B0(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v31 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v32 = a2 != nullptr;
  v8 = (const __m128i *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v28);
  v11 = sub_8ACB0((_QWORD *)(a1 + 40), (__int64)v8, 29, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v13 = _mm_loadu_si128(a2);
    v14 = _mm_loadu_si128(a2 + 1);
    v15 = _mm_loadu_si128(a2 + 2);
    *a2 = _mm_loadu_si128(v8 + 1);
    v16 = _mm_loadu_si128(v8 + 2);
    v17 = _mm_loadu_si128(a2 + 3);
    v18 = _mm_loadu_si128(a2 + 4);
    v19 = _mm_loadu_si128(a2 + 5);
    v33 = v13;
    a2[1] = v16;
    v20 = _mm_loadu_si128(v8 + 3);
    v21 = _mm_loadu_si128(a2 + 6);
    v22 = _mm_loadu_si128(a2 + 7);
    v23 = a2[8].m128i_i64[0];
    v34 = v14;
    a2[2] = v20;
    v24 = _mm_loadu_si128(v8 + 4);
    v41 = v23;
    a2[3] = v24;
    v25 = _mm_loadu_si128(v8 + 5);
    v35 = v15;
    a2[4] = v25;
    v26 = _mm_loadu_si128(v8 + 6);
    v36 = v17;
    a2[5] = v26;
    v27 = _mm_loadu_si128(v8 + 7);
    v37 = v18;
    v38 = v19;
    v39 = v21;
    v40 = v22;
    a2[6] = v27;
    a2[7] = _mm_loadu_si128(v8 + 8);
    a2[8].m128i_i64[0] = v8[9].m128i_i64[0];
    v8[9].m128i_i64[0] = v23;
    v8[1] = v13;
    v8[2] = v14;
    v8[3] = v15;
    v8[4] = v17;
    v8[5] = v18;
    v8[6] = v19;
    v8[7] = v21;
    v8[8] = v22;
  }
  if ( v8 )
    (*(void (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 8))(v8);
  sub_9C360(&v28);
  return v11;
}
