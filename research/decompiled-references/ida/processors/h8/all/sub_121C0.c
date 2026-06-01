unsigned __int64 __fastcall sub_121C0(__int64 a1, __int64 a2, __int64 a3)
{
  const char **v4; // rbx
  _OWORD v5[3]; // [rsp+40h] [rbp-78h] BYREF
  const char *v6; // [rsp+70h] [rbp-48h]
  unsigned __int64 v7; // [rsp+78h] [rbp-40h] BYREF

  v7 = __readfsqword(0x28u);
  v5[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1D080), (__m128i)(unsigned __int64)".rdata");
  v6 = ".sbss";
  v5[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1D088), (__m128i)(unsigned __int64)".lit8");
  v5[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1D090), (__m128i)(unsigned __int64)".sdata");
  if ( a3 && !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    v4 = (const char **)v5;
    while ( strcmp(s, *v4) )
    {
      if ( &v7 == (unsigned __int64 *)++v4 )
      {
        validate_name();
        sub_11630(a2, 0xFFFF, (__int64)byte_18595, ".data", *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), s);
        return v7 - __readfsqword(0x28u);
      }
    }
    sub_11630(a2, 0xFFFF, (__int64)byte_18589, s);
  }
  return v7 - __readfsqword(0x28u);
}

