__int64 __fastcall sub_3F51B0(__int64 a1)
{
  __int64 v1; // r12
  __m128i si128; // xmm1
  char *v4; // rbx
  __m128i *v5; // rax
  int tinfo_size; // eax
  int v7; // r12d
  int v8; // eax
  __int64 v9; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v10[24]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[80]; // [rsp+70h] [rbp-90h] BYREF
  char v12; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+C8h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 || (getinf() & 0xF) != 1 || *(_BYTE *)(a1 + 876) )
    return 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v4 = &v12;
  v5 = (__m128i *)v10;
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
  while ( v5 != (__m128i *)&v12 );
  v9 = 7;
  copy_tinfo_t();
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  sub_120450((__int64)v10, *(_QWORD *)(a1 + 832), 18, tinfo_size, -1, 0);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL);
  v8 = get_tinfo_size();
  sub_32F3F0((__int64)v11, v7, v8);
  v9 = 1;
  v1 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)"__setReg", &v9, 2, (__int64)v10, 0);
  clear_tinfo_t();
  *(_DWORD *)(*(_QWORD *)(v1 + 72) + 280LL) |= 4u;
  sub_B4CD0(*(_QWORD **)(a1 + 16), v1);
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
  while ( v4 != v10 );
  return v1;
}

