unsigned __int64 __fastcall sub_DA90(__int64 a1, __int64 a2)
{
  const char **v3; // rbx
  _OWORD v4[2]; // [rsp+40h] [rbp-68h] BYREF
  char v5; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+68h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  v4[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_15FF0), (__m128i)(unsigned __int64)".data");
  v4[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_15FF8), (__m128i)(unsigned __int64)".comm");
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    v3 = (const char **)v4;
    while ( strcmp((const char *)&dword_1157C, *v3) )
    {
      if ( &v5 == (char *)++v3 )
      {
        validate_name();
        sub_B9A0(a2, 0xFFFF, (__int64)qword_10800, &dword_1157C, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), &dword_1157C);
        return v6 - __readfsqword(0x28u);
      }
    }
    sub_B9A0(a2, 0xFFFF, (__int64)byte_107F9, &dword_1157C);
  }
  return v6 - __readfsqword(0x28u);
}

