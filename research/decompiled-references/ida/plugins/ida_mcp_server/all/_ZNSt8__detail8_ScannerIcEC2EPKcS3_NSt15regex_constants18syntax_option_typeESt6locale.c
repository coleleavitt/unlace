// Alternative name is '_ZNSt8__detail8_ScannerIcEC1EPKcS3_NSt15regex_constants18syntax_option_typeESt6locale'
__int64 __fastcall std::__detail::_Scanner<char>::_Scanner(__m128i *a1, __int64 a2, __int64 a3, __int16 a4, __int64 a5)
{
  __m128i v5; // xmm0
  const char *v6; // rax
  unsigned __int64 v7; // rax
  void *v8; // rax
  __int64 result; // rax

  a1->m128i_i64[0] = 0x160000005ELL;
  v5 = _mm_loadl_epi64((const __m128i *)&off_4438F8);
  a1->m128i_i64[1] = 0x1700000024LL;
  a1[1].m128i_i64[1] = 0x140000002ALL;
  a1[2].m128i_i64[0] = 0x150000002BLL;
  a1[2].m128i_i64[1] = 0x120000003FLL;
  a1[3].m128i_i64[0] = 0x130000007CLL;
  a1[3].m128i_i64[1] = 0x130000000ALL;
  a1[4].m128i_i64[0] = 0x1300000000LL;
  a1[4].m128i_i64[1] = 0xA6E0C6608620030LL;
  a1[5].m128i_i64[0] = 0xB7609740D72LL;
  a1[5].m128i_i64[1] = 0x7615C5C2F2F2222LL;
  a1[6].m128i_i64[0] = 0xD720A6E0C660862LL;
  v6 = ".[\\*^$";
  a1[1].m128i_i64[0] = 46;
  a1[6].m128i_i64[1] = 192285044;
  a1[7] = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)".[\\*^$");
  a1[8].m128i_i64[0] = (__int64)".[\\()*+?{|^$";
  a1[8].m128i_i64[1] = _mm_unpacklo_epi32((__m128i)0LL, _mm_cvtsi32_si128(a4)).m128i_u64[0];
  if ( (a4 & 0x10) != 0 )
  {
    a1[9].m128i_i64[1] = (__int64)&a1[4].m128i_i64[1];
    v6 = "^$\\.*+?()[]{}|";
  }
  else
  {
    a1[9].m128i_i64[1] = (__int64)&a1[5].m128i_i64[1];
    if ( (a4 & 0x20) == 0 )
    {
      v6 = ".[\\()*+?{|^$";
      if ( (a4 & 0x40) == 0 )
      {
        v6 = ".[\\*^$\n";
        if ( (a4 & 0x100) == 0 )
        {
          v6 = ".[\\()*+?{|^$\n";
          if ( (a4 & 0x200) == 0 )
          {
            v6 = nullptr;
            if ( (a4 & 0x80) != 0 )
              v6 = ".[\\()*+?{|^$";
          }
        }
      }
    }
  }
  a1[11].m128i_i64[0] = a2;
  a1[10].m128i_i64[0] = (__int64)v6;
  a1[10].m128i_i8[8] = 0;
  a1[11].m128i_i64[1] = a3;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v7 )
    std::__throw_bad_cast();
  a1[13].m128i_i64[0] = 0;
  a1[13].m128i_i8[8] = 0;
  a1[12] = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)&a1[13].m128i_u64[1]);
  if ( (a1[8].m128i_i8[12] & 0x10) != 0 )
    v8 = std::__detail::_Scanner<char>::_M_eat_escape_ecma;
  else
    v8 = std::__detail::_Scanner<char>::_M_eat_escape_posix;
  a1[14].m128i_i64[1] = (__int64)v8;
  result = a1[11].m128i_i64[1];
  a1[15].m128i_i64[0] = 0;
  if ( a1[11].m128i_i64[0] == result )
  {
    a1[9].m128i_i32[0] = 27;
  }
  else
  {
    result = a1[8].m128i_u32[2];
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 2 )
      {
        return std::__detail::_Scanner<char>::_M_scan_in_bracket();
      }
      else if ( (_DWORD)result == 1 )
      {
        return std::__detail::_Scanner<char>::_M_scan_in_brace();
      }
    }
    else
    {
      return std::__detail::_Scanner<char>::_M_scan_normal();
    }
  }
  return result;
}

