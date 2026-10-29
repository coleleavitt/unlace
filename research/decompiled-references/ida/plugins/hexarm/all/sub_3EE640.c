unsigned __int64 __fastcall sub_3EE640(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rbx
  __m128i si128; // xmm1
  __m128i *v6; // rax
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-228h]
  __int64 v15; // [rsp+10h] [rbp-220h]
  __int64 v16; // [rsp+10h] [rbp-220h]
  __int64 v17; // [rsp+10h] [rbp-220h]
  __int64 v18; // [rsp+10h] [rbp-220h]
  __int64 v19; // [rsp+10h] [rbp-220h]
  __int64 v21; // [rsp+18h] [rbp-218h]
  __int64 v22; // [rsp+20h] [rbp-210h]
  _BYTE v24[24]; // [rsp+60h] [rbp-1D0h] BYREF
  _BYTE v25[24]; // [rsp+B0h] [rbp-180h] BYREF
  _BYTE v26[24]; // [rsp+100h] [rbp-130h] BYREF
  _BYTE v27[24]; // [rsp+150h] [rbp-E0h] BYREF
  _BYTE v28[24]; // [rsp+1A0h] [rbp-90h] BYREF
  char v29; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+1F8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( sub_CF9B0() == 1 )
  {
    sub_11CEE0(a2);
    copy_tinfo_t();
    clear_tinfo_t();
    *(_DWORD *)(a2 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
  }
  else
  {
    v4 = &v29;
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v22 = *(_QWORD *)(a1 + 1504);
    v6 = (__m128i *)v24;
    do
    {
      v6->m128i_i32[1] = -1;
      v6 += 5;
      v6[-5].m128i_i16[0] = 0;
      v6[-5].m128i_i16[1] = 0;
      v6[-5].m128i_i64[1] = 0;
      v6[-4] = si128;
      v6[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v6[-3] + 8) = 0;
      v6[-2].m128i_i32[2] = 0;
      v6[-1].m128i_i64[0] = 0;
      v6[-1].m128i_i32[2] = 0;
    }
    while ( v6 != (__m128i *)&v29 );
    v15 = *(_QWORD *)(a3 + 16);
    copy_tinfo_t();
    clear_tinfo_t();
    v7 = getinf();
    sub_120450((__int64)v24, v22, 3, v7, v15, 0);
    v16 = *(_QWORD *)(a3 + 16);
    v14 = *(_QWORD *)(a3 + 40LL * a4 + 48);
    copy_tinfo_t();
    clear_tinfo_t();
    v8 = getinf();
    sub_120450((__int64)v25, v22, (int)v14, v8, v16, 1);
    v17 = *(_QWORD *)(a3 + 16);
    LOWORD(v14) = *(_WORD *)(a3 + 40LL * (a4 + 1) + 46);
    copy_tinfo_t();
    clear_tinfo_t();
    v9 = getinf();
    sub_120450((__int64)v26, v22, (unsigned __int16)v14, v9, v17, 2);
    v18 = *(_QWORD *)(a3 + 16);
    LOWORD(v14) = *(_WORD *)(a3 + 40LL * (a4 + 2) + 46);
    copy_tinfo_t();
    clear_tinfo_t();
    v10 = getinf();
    sub_120450((__int64)v27, v22, (unsigned __int16)v14, v10, v18, 3);
    v19 = *(_QWORD *)(a3 + 16);
    v21 = *(_QWORD *)(a3 + 40LL * (a4 + 3) + 48);
    copy_tinfo_t();
    clear_tinfo_t();
    v11 = getinf();
    sub_120450((__int64)v28, v22, (int)v21, v11, v19, 4);
    copy_tinfo_t();
    clear_tinfo_t();
    *(_DWORD *)(a2 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    v12 = sub_335C70(a1, *(_QWORD *)(a3 + 16), (__int64)"ARM64_SYSREG", (_BYTE *)(a2 + 24), 5, (__int64)v24, 1);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v12;
    *(_DWORD *)(*(_QWORD *)(v12 + 72) + 280LL) |= 0x14u;
    do
    {
      v4 -= 80;
      cleanup_argloc();
      if ( *((_QWORD *)v4 + 4) )
      {
        *((_QWORD *)v4 + 5) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11C7E0((__int64)v4);
    }
    while ( v4 != v24 );
  }
  return v30 - __readfsqword(0x28u);
}

