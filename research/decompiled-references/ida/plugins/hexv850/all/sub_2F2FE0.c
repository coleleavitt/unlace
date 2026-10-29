unsigned __int64 __fastcall sub_2F2FE0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v14; // [rsp+18h] [rbp-120h]
  __m128i v15; // [rsp+20h] [rbp-118h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-108h]
  __int64 v17; // [rsp+38h] [rbp-100h]
  __int64 v18; // [rsp+40h] [rbp-F8h]
  __m128i v19; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-E0h]
  __int64 v21; // [rsp+60h] [rbp-D8h]
  int v22; // [rsp+68h] [rbp-D0h]
  __int64 v23; // [rsp+70h] [rbp-C8h]
  _QWORD v24[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+90h] [rbp-A8h]
  __m128i v26; // [rsp+98h] [rbp-A0h]
  __int64 v27; // [rsp+A8h] [rbp-90h]
  __int64 v28; // [rsp+B0h] [rbp-88h]
  int v29; // [rsp+B8h] [rbp-80h]
  __int64 v30; // [rsp+C0h] [rbp-78h]
  _BYTE v31[40]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+F8h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v6 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v32 = __readfsqword(0x28u);
  v17 = v5;
  v7 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v19 = v6;
  *(_OWORD *)(a3 + 24) = 0;
  v18 = v7;
  v20 = 0;
  v16 = off_4B4E50;
  copy_tinfo_t();
  v8 = *(_QWORD *)(a3 + 48);
  v16 = off_4B6678;
  v21 = v8;
  v22 = *(_DWORD *)(a3 + 56);
  v23 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( *(_QWORD *)(a3 + 16) )
  {
    *(_QWORD *)(a3 + 24) = 0;
    v14 = v9;
    v15 = v10;
    qfree();
    v10 = _mm_load_si128(&v15);
    v9 = v14;
  }
  *(_QWORD *)(a3 + 16) = v9;
  *(__m128i *)(a3 + 24) = v10;
  copy_tinfo_t();
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(a1 + 64);
  sub_2C8EC0((__int64)v31, a4);
  v11 = _mm_loadu_si128(&v19);
  v24[0] = off_4B4E50;
  v24[1] = v17;
  v26 = v11;
  v25 = v18;
  v18 = 0;
  v27 = 0;
  v19 = 0;
  copy_tinfo_t();
  v24[0] = off_4B6678;
  v28 = v21;
  v29 = v22;
  v30 = v23;
  sub_2F2790(a1, 0, (__int64 *)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 3)), (__int64)v24, (__int64)v31);
  v24[0] = off_4B4E50;
  clear_tinfo_t();
  if ( v25 )
  {
    v26.m128i_i64[0] = 0;
    qfree();
  }
  sub_621D0((__int64)v31);
  v16 = off_4B4E50;
  clear_tinfo_t();
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

