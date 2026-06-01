__int64 __fastcall sub_1C2F0(__int64 a1, const __m128i **a2, unsigned __int64 a3)
{
  const __m128i *v4; // rax
  const __m128i *v5; // rsi
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp-8h] [rbp-68h]
  __int64 v12; // [rsp+0h] [rbp-60h] BYREF
  void (__fastcall __noreturn **v13)(); // [rsp+8h] [rbp-58h] BYREF
  int v14; // [rsp+10h] [rbp-50h]
  __m128i v15; // [rsp+18h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int128 v17; // [rsp+30h] [rbp-30h]
  unsigned __int64 v18; // [rsp+40h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v13 = &off_C7258;
  v14 = 0;
  v12 = -1;
  v4 = *a2;
  v5 = a2[32];
  v6 = _mm_loadl_epi64(v4 + 1);
  v16 = 0;
  v15 = _mm_unpacklo_epi64(v6, (__m128i)a3);
  v17 = 0;
  if ( (unsigned __int8)sub_89AD0(&v15, v5, &v12, &v13) )
    sub_1BAC0(a1, (__int64)a2, v12, v7, v8, v9, v11);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return 1;
}

