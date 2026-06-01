__int64 __fastcall sub_3EEE0(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // [rsp+8h] [rbp-70h] BYREF
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  __m128i v18; // [rsp+18h] [rbp-60h] BYREF
  char v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __m128i v21; // [rsp+38h] [rbp-40h] BYREF
  char v22; // [rsp+48h] [rbp-30h]
  char v23; // [rsp+50h] [rbp-28h]
  unsigned __int64 v24; // [rsp+58h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v16 = 0;
  sub_3E6C0((__int64)&v17, a2, &v16, a3, a5, a6);
  if ( v19 )
  {
    v10 = v17;
    v11 = _mm_loadu_si128(&v18);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = v10;
    *(__m128i *)(a1 + 8) = v11;
  }
  else
  {
    if ( (_BYTE)v17 )
    {
      v13 = v16;
      sub_3CC90((__int64)&v20, v16, a3, v7, v8, v9);
      v14 = v20;
      v15 = _mm_loadu_si128(&v21);
      if ( v23 )
      {
        *(_QWORD *)a1 = v20;
        *(_BYTE *)(a1 + 40) = 1;
        *(__m128i *)(a1 + 8) = v15;
        return a1;
      }
      if ( v22 )
      {
        *(_QWORD *)a1 = v13;
        *(_BYTE *)(a1 + 32) = 1;
        *(_BYTE *)(a1 + 40) = 0;
        *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v14, v15);
        _mm_storeh_ps((double *)(a1 + 24), (__m128)v15);
        return a1;
      }
    }
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  return a1;
}
