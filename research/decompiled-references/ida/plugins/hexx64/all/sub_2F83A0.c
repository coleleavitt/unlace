unsigned __int64 __fastcall sub_2F83A0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v16; // [rsp+18h] [rbp-120h]
  __m128i v17; // [rsp+20h] [rbp-118h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-108h]
  __int64 v19; // [rsp+38h] [rbp-100h]
  __int64 v20; // [rsp+40h] [rbp-F8h]
  __m128i v21; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-E0h]
  __int64 v23; // [rsp+60h] [rbp-D8h]
  int v24; // [rsp+68h] [rbp-D0h]
  __int64 v25; // [rsp+70h] [rbp-C8h]
  _QWORD v26[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-A8h]
  __m128i v28; // [rsp+98h] [rbp-A0h]
  __int64 v29; // [rsp+A8h] [rbp-90h]
  __int64 v30; // [rsp+B0h] [rbp-88h]
  int v31; // [rsp+B8h] [rbp-80h]
  __int64 v32; // [rsp+C0h] [rbp-78h]
  _BYTE v33[40]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+F8h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 8);
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v34 = __readfsqword(0x28u);
  v19 = v6;
  v8 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v21 = v7;
  *(_OWORD *)(a3 + 24) = 0;
  v20 = v8;
  v22 = 0;
  v18 = off_4E14B0;
  copy_tinfo_t();
  v9 = *(_QWORD *)(a3 + 48);
  v18 = off_4E2CD8;
  v23 = v9;
  v24 = *(_DWORD *)(a3 + 56);
  v25 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v12 = *(_QWORD *)(a3 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a3 + 24) = 0;
    v16 = v10;
    v17 = v11;
    qfree(v12);
    v11 = _mm_load_si128(&v17);
    v10 = v16;
  }
  *(_QWORD *)(a3 + 16) = v10;
  *(__m128i *)(a3 + 24) = v11;
  copy_tinfo_t();
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(a1 + 64);
  sub_2CE280((__int64)v33, a4);
  v13 = _mm_loadu_si128(&v21);
  v26[0] = off_4E14B0;
  v26[1] = v19;
  v28 = v13;
  v27 = v20;
  v20 = 0;
  v29 = 0;
  v21 = 0;
  copy_tinfo_t();
  v26[0] = off_4E2CD8;
  v30 = v23;
  v31 = v24;
  v32 = v25;
  sub_2F7B50(a1, 0, (__int64 *)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 3)), (__int64)v26, (__int64)v33);
  v26[0] = off_4E14B0;
  clear_tinfo_t();
  if ( v27 )
  {
    v28.m128i_i64[0] = 0;
    qfree(v27);
  }
  sub_66C50((__int64)v33);
  v18 = off_4E14B0;
  clear_tinfo_t();
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v34 - __readfsqword(0x28u);
}

