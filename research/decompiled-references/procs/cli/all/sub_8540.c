__int64 *__fastcall sub_8540(__int64 *a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbp
  __m128i v16; // xmm0
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __m128i v20; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v7 = *(_QWORD *)(a2 + 616);
  v21 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( netnode_supval(*(_QWORD *)(v7 + 144), a3, v18, 16, 97) > 0 )
  {
    sub_7630((__int64)&v19, a2, a3, 0.0, a5, a6);
    v14 = *a1;
    v15 = v19;
    v16 = _mm_loadu_si128(&v20);
    if ( *a1 )
    {
      a1[1] = 0;
      v17 = v16;
      qfree(v14, a2, v10, v11, v12, v13);
      v16 = _mm_load_si128(&v17);
    }
    *a1 = v15;
    *(__m128i *)(a1 + 1) = v16;
  }
  return a1;
}
