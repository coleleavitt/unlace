unsigned __int64 __fastcall sub_778A0(__int64 a1, unsigned __int8 **a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r13
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v2 = a1;
  v17 = __readfsqword(0x28u);
  sub_77850(a1, (__int64)a2);
  if ( *a2 >= a2[1] )
    goto LABEL_12;
  *(_DWORD *)(a1 + 24) = unpack_dd();
  sub_76BD0((__int64)&v15, a2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v15;
  v15 = 0;
  v5 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v3 )
  {
    *(_QWORD *)(v2 + 40) = 0;
    v14 = v5;
    qfree();
    v6 = _mm_load_si128(&v14);
    v7 = v15;
    *(_QWORD *)(v2 + 32) = v4;
    *(__m128i *)(v2 + 40) = v6;
    if ( v7 )
    {
      v16.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v4;
    *(__m128i *)(v2 + 40) = v5;
  }
  sub_76BD0((__int64)&v15, a2);
  v8 = *(_QWORD *)(v2 + 56);
  v9 = v15;
  v15 = 0;
  v10 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v8 )
  {
    *(_QWORD *)(v2 + 64) = 0;
    v14 = v10;
    qfree();
    v11 = _mm_load_si128(&v14);
    v12 = v15;
    *(_QWORD *)(v2 + 56) = v9;
    *(__m128i *)(v2 + 64) = v11;
    if ( v12 )
    {
      v16.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(v2 + 56) = v9;
    *(__m128i *)(v2 + 64) = v10;
  }
  a1 = (__int64)a2;
  sub_76D40(a2, v2 + 80, -1);
  if ( *a2 >= a2[1] )
LABEL_12:
    sub_73F90(a1);
  *(_DWORD *)(v2 + 88) = unpack_dd();
  *(_DWORD *)(v2 + 92) = sub_767A0(a2);
  *(_QWORD *)(v2 + 96) = sub_767C0((__int64)a2);
  return v17 - __readfsqword(0x28u);
}

