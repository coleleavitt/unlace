__int64 __fastcall sub_3CF5C0(unsigned __int64 a1, const char *a2, int a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  __m128i v7; // xmm0
  unsigned __int64 v8; // rbx
  void *v10; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  __m128i v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+34h] [rbp-34h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = (unsigned __int64)a2;
    v11 = 0;
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v10 = (void *)qvector_reserve();
    *(_QWORD *)&v11 = v5;
    memmove(v10, a2, v6);
    *((_BYTE *)v10 + v6) = 0;
    v7 = _mm_loadl_epi64((const __m128i *)&v10);
    v14 = 0;
    v13 = a3;
    v12 = _mm_unpacklo_epi64(v7, (__m128i)a1);
    sub_1AAEE0(
      v8,
      v8 + v11,
      (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3CD880,
      (__int64)&v12);
    LOBYTE(v8) = *(_QWORD *)(a1 + 8) != 0;
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  else
  {
    LODWORD(v8) = 0;
  }
  return (unsigned int)v8;
}

