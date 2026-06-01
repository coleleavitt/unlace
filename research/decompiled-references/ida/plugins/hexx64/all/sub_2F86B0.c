unsigned __int64 __fastcall sub_2F86B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r14
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rbp
  __m128i v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-88h]
  __int64 v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+20h] [rbp-78h]
  __m128i v18; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v23 = __readfsqword(0x28u);
  v15 = off_4E14B0;
  v16 = v3;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v18 = v4;
  *(_OWORD *)(a1 + 24) = 0;
  v17 = v5;
  v19 = 0;
  copy_tinfo_t();
  v20 = *(_QWORD *)(a1 + 48);
  v21 = *(_DWORD *)(a1 + 56);
  v15 = off_4E2CD8;
  v22 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v14 = v7;
    qfree(v8);
    v7 = _mm_load_si128(&v14);
  }
  *(_QWORD *)(a1 + 16) = v6;
  *(__m128i *)(a1 + 24) = v7;
  copy_tinfo_t();
  v9 = *(_QWORD *)(a2 + 48);
  v10 = _mm_loadu_si128(&v18);
  v18 = 0;
  *(_QWORD *)(a1 + 48) = v9;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = v17;
  v17 = 0;
  *(_QWORD *)(a2 + 8) = v16;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v14 = v10;
    qfree(v11);
    v10 = _mm_load_si128(&v14);
  }
  *(_QWORD *)(a2 + 16) = v12;
  *(__m128i *)(a2 + 24) = v10;
  copy_tinfo_t();
  v15 = off_4E14B0;
  *(_QWORD *)(a2 + 48) = v20;
  *(_DWORD *)(a2 + 56) = v21;
  *(_QWORD *)(a2 + 64) = v22;
  clear_tinfo_t();
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v17);
  }
  return v23 - __readfsqword(0x28u);
}

