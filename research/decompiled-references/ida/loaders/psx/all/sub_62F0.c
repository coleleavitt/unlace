unsigned __int64 __fastcall sub_62F0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  __m128i *v16; // rbx
  __int64 v17; // rdi
  __int64 (__fastcall **v19)(); // [rsp+8h] [rbp-118h] BYREF
  __int64 v20; // [rsp+10h] [rbp-110h]
  __int128 v21; // [rsp+18h] [rbp-108h]
  __int64 v22; // [rsp+28h] [rbp-F8h]
  const char *v23; // [rsp+30h] [rbp-F0h]
  int v24; // [rsp+38h] [rbp-E8h]
  __m128i v25; // [rsp+40h] [rbp-E0h] BYREF
  int v26; // [rsp+50h] [rbp-D0h]
  char v27; // [rsp+58h] [rbp-C8h] BYREF
  char v28; // [rsp+A0h] [rbp-80h] BYREF
  int v29; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-60h]
  __int128 v31; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v20 = 0x3FF000004LL;
  v23 = "Choose module";
  v21 = -1;
  v9 = (int *)&v27;
  v19 = (__int64 (__fastcall **)())&unk_9D10;
  v22 = 0;
  v24 = 3;
  v26 = -1;
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_9CF8), (__m128i)(unsigned __int64)off_9CE0);
  do
  {
    *(_QWORD *)v9 = 0;
    v9 += 6;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( &v29 != v9 );
  v29 = 0;
  if ( ((HIDWORD(v20) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v20) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449);
      BUG();
    }
    BYTE3(v20) = ((HIDWORD(v20) >> 19) & 0x3F) - 1;
    HIDWORD(v20) &= 0xFE07FFFF;
  }
  v19 = off_9C28;
  v30 = 0;
  v31 = 0;
  sub_43B0(&v19, a1);
  v10 = callui(16, 0, &v19);
  if ( v10 < 0 && v10 >= (unsigned __int64)v31 || (v11 = v30 + 280 * v10) == 0 )
    sub_27B0(0);
  v12 = *(_QWORD *)v11;
  v13 = *(int *)(v11 + 20);
  byte_A2A8 = 0;
  qword_A2A0 = v12;
  qlseek(a1, v13, 0);
  sub_4770(a1, (__m128)0LL, (__m128)(unsigned __int64)off_9CE0, a4, a5, v14, v15, a8, a9);
  v19 = off_9C28;
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  v19 = (__int64 (__fastcall **)())&unk_9D10;
  v16 = (__m128i *)&v28;
  do
  {
    v17 = v16->m128i_i64[0];
    if ( v16->m128i_i64[0] )
    {
      v16->m128i_i64[1] = 0;
      qfree(v17);
    }
    v16 = (__m128i *)((char *)v16 - 24);
  }
  while ( &v25 != v16 );
  return v32 - __readfsqword(0x28u);
}

