unsigned __int64 __fastcall sub_A1F0(__int64 a1, __int64 a2)
{
  const char **v3; // rbx
  __m128i v4; // xmm0
  _OWORD v5[2]; // [rsp+40h] [rbp-E8h] BYREF
  char v6; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v7; // [rsp+E8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    {
      v3 = (const char **)v5;
      v5[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_12550), (__m128i)(unsigned __int64)".data");
      v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_12558), (__m128i)(unsigned __int64)".comm");
      v5[1] = v4;
      while ( strcmp((const char *)&dword_F604, *v3) )
      {
        if ( ++v3 == (const char **)&v6 )
        {
          validate_name();
          sub_8FB0(
            a2,
            0xFFFF,
            (__int64)&dword_F0AC,
            &dword_F604,
            *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
            &dword_F604,
            *(double *)v4.m128i_i64,
            COERCE_DOUBLE(".data"));
          return v7 - __readfsqword(0x28u);
        }
      }
      sub_8FB0(a2, 0xFFFF, (__int64)byte_F0A5, &dword_F604, *(double *)v4.m128i_i64, COERCE_DOUBLE(".data"));
    }
    else
    {
      validate_name();
      sub_8FB0(a2, 0xFFFF, (__int64)byte_F0DD, &dword_F604, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), &dword_F604);
    }
  }
  return v7 - __readfsqword(0x28u);
}

