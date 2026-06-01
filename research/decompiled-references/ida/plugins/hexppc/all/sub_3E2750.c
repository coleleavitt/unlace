unsigned __int64 __fastcall sub_3E2750(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rax
  char *v3; // rbx
  __m128i si128; // xmm1
  int v6; // eax
  __int64 *v7; // rdi
  __int16 v8; // ax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-108h]
  int v15; // [rsp+10h] [rbp-100h]
  __int64 v16; // [rsp+10h] [rbp-100h]
  __int64 v18; // [rsp+28h] [rbp-E8h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-E0h] BYREF
  _BYTE v20[24]; // [rsp+80h] [rbp-90h] BYREF
  char v21; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp-38h]

  v2 = (__m128i *)v19;
  v3 = &v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v22 = __readfsqword(0x28u);
  do
  {
    v2->m128i_i32[1] = -1;
    v2 += 5;
    v2[-5].m128i_i16[0] = 0;
    v2[-5].m128i_i16[1] = 0;
    v2[-5].m128i_i64[1] = 0;
    v2[-4] = si128;
    v2[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v2[-3] + 8) = 0;
    v2[-2].m128i_i32[2] = 0;
    v2[-1].m128i_i64[0] = 0;
    v2[-1].m128i_i32[2] = 0;
  }
  while ( v2 != (__m128i *)&v21 );
  v6 = sub_3356F0();
  sub_11CFD0((__int64)v19, v6, 0, 8, -1, 0);
  v18 = 37;
  copy_tinfo_t();
  v7 = &v18;
  clear_tinfo_t();
  v15 = *(_DWORD *)(sub_3356F0() + 80);
  v8 = a1[67].m128i_i16[2];
  if ( v8 != 45 )
  {
    if ( v8 == 3 )
    {
      v14 = a1[66].m128i_i64[0];
      goto LABEL_6;
    }
LABEL_15:
    sub_5AE3A(v7, &v18, 0.0);
  }
  v7 = (__int64 *)a1;
  sub_3E2460(a1);
  if ( a1[67].m128i_i16[2] != 3 )
    goto LABEL_15;
  v14 = -a1[66].m128i_i64[0];
LABEL_6:
  sub_3E2460(a1);
  v9 = sub_3356F0();
  sub_11CFD0((__int64)v20, v9, v14, v15, -1, 0);
  copy_tinfo_t();
  v18 = 50;
  v10 = a1[68].m128i_i64[0];
  v11 = *(_QWORD *)(v10 + 40);
  v16 = sub_331530(v10, v11, (__int64)"$present", &v18, 2, (__int64)v19, 1);
  clear_tinfo_t();
  *(_BYTE *)a2 = 4;
  *(_QWORD *)(a2 + 8) = v16;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v16 + 68);
  v12 = *(_QWORD *)(v16 + 72);
  *(_DWORD *)(v12 + 280) |= 0x10u;
  *(_DWORD *)(v12 + 284) = 13;
  if ( a1[67].m128i_i16[2] != 41 )
    sub_5AE3A(&v18, v11, 0.0);
  sub_3E2460(a1);
  do
  {
    v3 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v3 + 4) )
    {
      *((_QWORD *)v3 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_119360((__int64)v3);
  }
  while ( v3 != v19 );
  return v22 - __readfsqword(0x28u);
}

