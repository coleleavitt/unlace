__int64 __fastcall sub_3FD660(__int64 a1, int a2, int a3, int a4)
{
  __m128i *v5; // rax
  _BYTE *v6; // rbx
  __m128i si128; // xmm1
  __int64 v9; // rax
  int v10; // edx
  int tinfo_size; // eax
  __int64 v12; // rax
  char v13; // dl
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v18; // [rsp+18h] [rbp-1A8h]
  __int64 v19; // [rsp+38h] [rbp-188h] BYREF
  __int64 v20; // [rsp+40h] [rbp-180h] BYREF
  __int64 v21; // [rsp+48h] [rbp-178h]
  __int64 *v22; // [rsp+50h] [rbp-170h] BYREF
  __int128 v23; // [rsp+58h] [rbp-168h]
  _BYTE v24[4]; // [rsp+70h] [rbp-150h] BYREF
  int v25; // [rsp+74h] [rbp-14Ch]
  __int64 v26; // [rsp+78h] [rbp-148h]
  _BYTE v27[80]; // [rsp+C0h] [rbp-100h] BYREF
  _BYTE v28[80]; // [rsp+110h] [rbp-B0h] BYREF
  _BYTE v29[40]; // [rsp+160h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+188h] [rbp-38h]

  v5 = (__m128i *)v24;
  v6 = v29;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v30 = __readfsqword(0x28u);
  do
  {
    v5->m128i_i32[1] = -1;
    v5 += 5;
    v5[-5].m128i_i16[0] = 0;
    v5[-5].m128i_i16[1] = 0;
    v5[-5].m128i_i64[1] = 0;
    v5[-4] = si128;
    v5[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v5[-3] + 8) = 0;
    v5[-2].m128i_i32[2] = 0;
    v5[-1].m128i_i64[0] = 0;
    v5[-1].m128i_i32[2] = 0;
  }
  while ( v5 != (__m128i *)v29 );
  v9 = sub_3FB1A0(a1);
  v10 = *(_DWORD *)(v9 + 68);
  v24[0] = 4;
  v26 = v9;
  v25 = v10;
  copy_tinfo_t();
  tinfo_size = get_tinfo_size();
  sub_32F3F0((__int64)v27, a3, tinfo_size);
  v12 = (unsigned int)(a4 - 8);
  v13 = 37;
  v19 = 0;
  if ( (unsigned int)v12 <= 0x18 )
    v13 = asc_42E1D0[v12];
  v20 = 0;
  LOWORD(v22) = -1;
  v21 = 0;
  BYTE2(v22) = v13;
  sub_3FB0A0(&v19);
  clear_tinfo_t();
  v14 = get_tinfo_size();
  sub_32F3F0((__int64)v28, a2, v14);
  qsnprintf();
  v20 = 1;
  v15 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v29, &v20, 3, (__int64)v24, 0);
  clear_tinfo_t();
  *(_DWORD *)(*(_QWORD *)(v15 + 72) + 280LL) |= 4u;
  v18 = *(_QWORD *)(v15 + 72);
  v20 = 0;
  v21 = 0;
  v22 = nullptr;
  v23 = 0;
  v22 = (__int64 *)qvector_reserve();
  *(__m128i *)&v22[2 * v23] = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v23 = v23 + 1;
  sub_63C80((__int64 *)(v18 + 136), &v20);
  sub_317070((__int64 *)(v18 + 152), &v22);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  qfree();
  v16 = sub_B4CD0(*(_QWORD **)(a1 + 16), v15);
  clear_tinfo_t();
  do
  {
    v6 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v6 + 4) )
    {
      *((_QWORD *)v6 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v6);
  }
  while ( v6 != v24 );
  return v16;
}

