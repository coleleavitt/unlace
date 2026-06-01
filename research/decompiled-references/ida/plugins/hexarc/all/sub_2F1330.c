unsigned __int64 __fastcall sub_2F1330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // r14
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rbp
  __m128i v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-88h]
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  __m128i v16; // [rsp+28h] [rbp-70h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  int v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v21 = __readfsqword(0x28u);
  v13 = off_4ADCB0;
  v14 = v2;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v16 = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v15 = v4;
  v17 = 0;
  copy_tinfo_t();
  v18 = *(_QWORD *)(a1 + 48);
  v19 = *(_DWORD *)(a1 + 56);
  v13 = off_4AF4D8;
  v20 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v12 = v6;
    qfree();
    v6 = _mm_load_si128(&v12);
  }
  *(_QWORD *)(a1 + 16) = v5;
  *(__m128i *)(a1 + 24) = v6;
  copy_tinfo_t();
  v7 = *(_QWORD *)(a2 + 48);
  v8 = _mm_loadu_si128(&v16);
  v16 = 0;
  *(_QWORD *)(a1 + 48) = v7;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v15;
  v15 = 0;
  *(_QWORD *)(a2 + 8) = v14;
  if ( v9 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v12 = v8;
    qfree();
    v8 = _mm_load_si128(&v12);
  }
  *(_QWORD *)(a2 + 16) = v10;
  *(__m128i *)(a2 + 24) = v8;
  copy_tinfo_t();
  v13 = off_4ADCB0;
  *(_QWORD *)(a2 + 48) = v18;
  *(_DWORD *)(a2 + 56) = v19;
  *(_QWORD *)(a2 + 64) = v20;
  clear_tinfo_t();
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree();
  }
  return v21 - __readfsqword(0x28u);
}

