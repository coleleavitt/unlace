unsigned __int64 sub_12BD0(__int64 a1, ...)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rsi
  __m128i v7; // xmm0
  const char *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+0h] [rbp-118h] BYREF
  __int128 v16; // [rsp+8h] [rbp-110h]
  gcc_va_list va; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-E0h]
  __int64 v19; // [rsp+48h] [rbp-D0h]
  __int64 v20; // [rsp+50h] [rbp-C8h]
  __int64 v21; // [rsp+58h] [rbp-C0h]
  __int64 v22; // [rsp+60h] [rbp-B8h]
  __int64 v23; // [rsp+68h] [rbp-B0h]

  va_start(va, a1);
  v19 = va_arg(va, _QWORD);
  v20 = va_arg(va, _QWORD);
  v21 = va_arg(va, _QWORD);
  v22 = va_arg(va, _QWORD);
  v23 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v18 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v1 = qvector_reserve();
  v15 = v1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2F010);
  *(_WORD *)(v1 + 16) = 2649;
  *(_QWORD *)&v16 = 19;
  *(__m128i *)v1 = si128;
  *(_BYTE *)(v15 + 18) = 0;
  sub_12B10(&v15);
  v3 = v16;
  if ( (_QWORD)v16 )
  {
    v4 = v16 + 24;
    v5 = v16 + 25;
    v6 = v15;
    v3 = v16 - 1;
    if ( *((_QWORD *)&v16 + 1) >= (unsigned __int64)(v16 + 25) )
      goto LABEL_3;
  }
  else
  {
    v6 = v15;
    v5 = 26;
    v4 = 25;
    if ( *((_QWORD *)&v16 + 1) >= 0x1Au )
      goto LABEL_3;
  }
  v15 = qvector_reserve();
  v6 = v15;
LABEL_3:
  v7 = _mm_load_si128((const __m128i *)&xmmword_2F020);
  *(_QWORD *)&v16 = v5;
  v8 = s1;
  *(_BYTE *)(v6 + v4) = 0;
  v9 = v15 + v3;
  *(__m128i *)v9 = v7;
  *(__m128i *)(v9 + 9) = _mm_load_si128((const __m128i *)&xmmword_2F030);
  if ( (_QWORD)v16 )
    v8 = (const char *)v15;
  if ( (unsigned int)sub_D140(1u, (__int64)"%s", v8) != 1 )
    sub_DB80(0, (__int64)"%s", v10, v11, v12, v13, v15);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

