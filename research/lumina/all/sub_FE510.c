__int64 __fastcall sub_FE510(
        __int64 a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v7; // ebx
  __m128i **v9; // rax
  __m128i *v10; // rax
  __m128i **v11; // rax
  __m128i *v12; // rax
  __m128i *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i *v16; // rax
  unsigned int v17; // [rsp+0h] [rbp-58h]
  _BYTE v18[8]; // [rsp+20h] [rbp-38h] BYREF
  __m128i *v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-10h]

  v7 = dword_2415D4;
  v19 = (__m128i *)a2;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  v23 = a6;
  if ( dword_2415D4 )
  {
    v7 = 21;
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      (unsigned int)&loc_299A9,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  }
  else
  {
    v17 = 8;
    switch ( a1 )
    {
      case 1LL:
        word_241484 = 0;
        break;
      case 2LL:
        word_241484 = 1;
        break;
      case 3LL:
        word_241484 = 257;
        break;
      case 4LL:
        *(__m128i *)&xmmword_2414A0 = _mm_loadu_si128(v19);
        *(__m128i *)&xmmword_2414B0 = _mm_loadu_si128(v19 + 1);
        *(__m128i *)&xmmword_2414C0 = _mm_loadu_si128(v19 + 2);
        xmmword_2414D0 = (__int128)_mm_loadu_si128(v19 + 3);
        break;
      case 5LL:
        if ( !xmmword_2414A0 )
          sub_FE510(4, (unsigned int)off_239F80, a3, a4, a5, a6, 8);
        if ( v17 > 0x2F )
          v11 = (__m128i **)&a7;
        else
          v11 = (__m128i **)&v18[v17];
        v12 = *v11;
        *v12 = _mm_load_si128((const __m128i *)&xmmword_2414A0);
        v12[1] = _mm_load_si128((const __m128i *)&xmmword_2414B0);
        v12[2] = _mm_load_si128((const __m128i *)&xmmword_2414C0);
        v12[3] = _mm_load_si128((const __m128i *)&xmmword_2414D0);
        break;
      case 7LL:
        qword_2415B8 = (__int64)v19;
        dword_2415C0 = v20;
        dword_2415C4 = v21;
        break;
      case 9LL:
        dword_241480 = (int)v19;
        break;
      case 10LL:
        *(__m128i *)&xmmword_2414E0 = _mm_loadu_si128(v19);
        *(__m128i *)&xmmword_2414F0 = _mm_loadu_si128(v19 + 1);
        *(__m128i *)&xmmword_241500 = _mm_loadu_si128(v19 + 2);
        *(__m128i *)&xmmword_241510 = _mm_loadu_si128(v19 + 3);
        qword_241520 = v19[4].m128i_i64[0];
        break;
      case 11LL:
        v16 = v19;
        *v19 = _mm_load_si128((const __m128i *)&xmmword_2414E0);
        v16[1] = _mm_load_si128((const __m128i *)&xmmword_2414F0);
        v16[2] = _mm_load_si128((const __m128i *)&xmmword_241500);
        v16[3] = _mm_load_si128((const __m128i *)&xmmword_241510);
        v16[4].m128i_i64[0] = qword_241520;
        break;
      case 13LL:
        dword_241494 = (int)v19;
        dword_241498 = v20;
        break;
      case 14LL:
        return v7;
      case 16LL:
        qword_2415F8 = (__int64)v19;
        qword_241600 = v20;
        break;
      case 17LL:
        byte_241486 = (char)v19;
        break;
      case 18LL:
        xmmword_241528 = (__int128)_mm_loadu_si128(v19);
        xmmword_241538 = (__int128)_mm_loadu_si128(v19 + 1);
        *(__m128i *)&xmmword_241548 = _mm_loadu_si128(v19 + 2);
        *(__m128i *)&xmmword_241558 = _mm_loadu_si128(v19 + 3);
        *(__m128i *)&xmmword_241568 = _mm_loadu_si128(v19 + 4);
        *(__m128i *)&xmmword_241578 = _mm_loadu_si128(v19 + 5);
        qword_241588 = (__int64 (__fastcall *)(_QWORD))v19[6].m128i_i64[0];
        break;
      case 19LL:
        if ( !(_QWORD)xmmword_241538 )
          sub_FE510(18, (unsigned int)&unk_239EC0, a3, a4, a5, a6, 8);
        if ( v17 > 0x2F )
          v9 = (__m128i **)&a7;
        else
          v9 = (__m128i **)&v18[v17];
        v10 = *v9;
        *v10 = _mm_loadu_si128((const __m128i *)&xmmword_241528);
        v10[1] = _mm_loadu_si128((const __m128i *)&xmmword_241538);
        v10[2] = _mm_loadu_si128((const __m128i *)&xmmword_241548);
        v10[3] = _mm_loadu_si128((const __m128i *)&xmmword_241558);
        v10[4] = _mm_loadu_si128((const __m128i *)&xmmword_241568);
        v10[5] = _mm_loadu_si128((const __m128i *)&xmmword_241578);
        v10[6].m128i_i64[0] = (__int64)qword_241588;
        break;
      case 20LL:
        byte_241487 = (char)v19;
        break;
      case 22LL:
        v13 = v19;
        v14 = v20;
        if ( v20 >= 0x7FFF0001 )
          v14 = 2147418112;
        v15 = 0;
        if ( (__int64)v19 >= 0 )
        {
          if ( v14 <= (__int64)v19 )
            v13 = (__m128i *)v14;
          v15 = (__int64)v13;
        }
        qword_2415B0 = v14;
        qword_2415A8 = v15;
        break;
      case 24LL:
        v19->m128i_i32[0] = 264;
        break;
      case 25LL:
        dword_2415D0 = (int)v19;
        break;
      case 26LL:
        dword_24149C = (int)v19;
        break;
      case 27LL:
        byte_241488 = (char)v19;
        break;
      case 29LL:
        qword_241608 = (__int64)v19;
        break;
      default:
        v7 = 1;
        break;
    }
  }
  return v7;
}
