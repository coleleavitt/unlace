_QWORD *__fastcall sub_6C630(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+8h] [rbp-50h]
  __int128 v9; // [rsp+10h] [rbp-48h]
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  v7 = off_C8908;
  v9 = 0;
  v10 = 0;
  sub_A1190(a2[2].m128i_i64[0], &v7, 0);
  v2 = operator new(0x40u);
  v3 = _mm_loadu_si128(a2 + 1);
  v4 = *((_QWORD *)&v9 + 1);
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)v2 = &off_C88C0;
  *(__m128i *)(v2 + 16) = v3;
  v5 = _mm_load_si128(&v10);
  *(_DWORD *)(v2 + 56) = -1;
  *(_QWORD *)(v2 + 32) = v4;
  *a1 = v2;
  *(__m128i *)(v2 + 40) = v5;
  return a1;
}

