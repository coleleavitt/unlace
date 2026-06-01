__int64 __fastcall sub_24E80(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rsi
  __m128i *v14; // r15
  int v15; // eax
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  const void *v18; // rax
  unsigned int v19; // [rsp+Ch] [rbp-10ACh]
  __int64 m128i_i64; // [rsp+10h] [rbp-10A8h]
  int v22; // [rsp+24h] [rbp-1094h] BYREF
  __int64 v23; // [rsp+28h] [rbp-1090h]
  char v24[12]; // [rsp+30h] [rbp-1088h] BYREF
  int v25; // [rsp+3Ch] [rbp-107Ch]
  unsigned int v26; // [rsp+40h] [rbp-1078h]
  unsigned int v27; // [rsp+44h] [rbp-1074h]
  __int64 (__fastcall **v28)(); // [rsp+50h] [rbp-1068h] BYREF
  __int128 v29; // [rsp+58h] [rbp-1060h]
  unsigned int v30; // [rsp+68h] [rbp-1050h]
  char s[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v32; // [rsp+1078h] [rbp-40h]

  v4 = a2[1].m128i_i64[0];
  v32 = __readfsqword(0x28u);
  *a2 = _mm_load_si128((const __m128i *)&xmmword_82340);
  if ( v4 )
  {
    a2[1].m128i_i64[1] = 0;
    qfree();
    a2[1].m128i_i64[0] = 0;
    a2[2].m128i_i64[0] = 0;
  }
  if ( a2[2].m128i_i64[1] )
  {
    a2[3].m128i_i64[0] = 0;
    qfree();
    a2[2].m128i_i64[1] = 0;
    a2[3].m128i_i64[1] = 0;
  }
  v6 = a2[4].m128i_i64[1];
  a2[4].m128i_i64[0] = 0;
  if ( v6 )
  {
    a2[5].m128i_i64[0] = 0;
    qfree();
    a2[4].m128i_i64[1] = 0;
    a2[5].m128i_i64[1] = 0;
  }
  a2[6].m128i_i32[0] = 0;
  v28 = off_971D8;
  v30 = 0;
  v29 = 0;
  v7 = sub_245C0(a1, (__int64)&v28, a3);
  result = 0;
  if ( v7 )
    return result;
  v9 = DWORD1(v29);
  a2->m128i_i64[0] = a3;
  a2[4].m128i_i32[0] = 11;
  a2->m128i_i64[1] = v9;
  a2[4].m128i_i32[1] = DWORD2(v29);
  m128i_i64 = (__int64)a2[1].m128i_i64;
  sub_15ED0(a2[1].m128i_i64);
  if ( !HIDWORD(v29) )
    return 1;
  if ( v30 <= 0x1B )
    return 1;
  v10 = HIDWORD(v29) + a3;
  v11 = v30 + v10;
  if ( v10 >= v11 )
    return 1;
  while ( 1 )
  {
    if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v10,
           v24,
           28,
           0) != 28 )
      goto LABEL_23;
    if ( v25 != 2 )
      goto LABEL_23;
    v22 = 0;
    v19 = v26;
    v12 = v27 + a3;
    if ( (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v12,
           &v22,
           4,
           0) != 4 )
      goto LABEL_23;
    if ( v22 == 1129272397 )
    {
      v13 = v12;
      v15 = 25;
      v14 = a2;
      v16 = v13 + 20;
      goto LABEL_18;
    }
    if ( v22 == 1396986706 )
      break;
    if ( v22 == 808534606 )
    {
      v13 = v12;
      v14 = a2;
      v15 = 11;
      v16 = v13 + 16;
      goto LABEL_18;
    }
LABEL_23:
    v10 += 28LL;
    if ( v10 >= v11 )
      return 1;
  }
  v13 = v12;
  v15 = 11;
  v14 = a2;
  v16 = v13 + 24;
LABEL_18:
  v14[6].m128i_i32[0] = v15;
  memset(s, 0, 0x1000u);
  v17 = v19 - v16 + v13;
  if ( v17 > 0xFFF )
    v17 = 4095;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, char *, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         v16,
         s,
         v17,
         0)
    && strlen(s) )
  {
    sub_19AC0((__int64)&v14[4].m128i_i64[1], s);
    v23 = 0;
    qsplitfile();
    if ( v23 )
    {
      v18 = (const void *)qbasename();
      sub_19AC0(m128i_i64, v18);
    }
  }
  return 1;
}

