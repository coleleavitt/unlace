__int64 __fastcall sub_47E90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __m128i *v5; // rax
  _BYTE v7[112]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v8; // [rsp+70h] [rbp-48h] BYREF
  __m128i v9; // [rsp+80h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+98h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_19CE60(v7);
  sub_19CE90(v7, *(_QWORD *)a2, *(unsigned int *)(a2 + 8));
  sub_19D080(&v8, v7);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = sub_1987B0(a1, 0, 32, 1);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  memset((void *)(v2 + v3), 0, 32 - v3);
  v4 = _mm_load_si128(&v8);
  v5 = *(__m128i **)a1;
  *(_QWORD *)(a1 + 8) = 32;
  *v5 = v4;
  v5[1] = _mm_load_si128(&v9);
  return a1;
}
