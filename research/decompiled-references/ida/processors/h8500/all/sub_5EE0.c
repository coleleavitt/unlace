unsigned __int64 __fastcall sub_5EE0(__int64 a1, __int64 a2, __int64 a3)
{
  const char **v5; // r15
  _OWORD v6[4]; // [rsp+48h] [rbp-108h] BYREF
  _BYTE v7[136]; // [rsp+88h] [rbp-C8h] BYREF
  unsigned __int64 v8; // [rsp+110h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v6[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_A9A0), (__m128i)(unsigned __int64)".rdata");
  v6[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_A9A8), (__m128i)(unsigned __int64)".lit8");
  v6[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_A9B0), (__m128i)(unsigned __int64)".sdata");
  v6[3] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_A9B8), (__m128i)(unsigned __int64)".bss");
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    v5 = (const char **)v6;
    while ( strcmp(byte_8BD0, *v5) )
    {
      if ( v7 == (_BYTE *)++v5 )
      {
        validate_name();
        sub_55A0(a2, 0xFFFF, (__int64)&dword_8A3C, ".data", *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), byte_8BD0);
        if ( !*(_QWORD *)(a3 + 32) )
          return v8 - __readfsqword(0x28u);
        goto LABEL_9;
      }
    }
    sub_55A0(a2, 0xFFFF, (__int64)&dword_8A2C, byte_8BD0);
    if ( !*(_QWORD *)(a3 + 32) )
      return v8 - __readfsqword(0x28u);
LABEL_9:
    btoa64();
    sub_55A0(a2, 0xFFFF, (__int64)&dword_8A4C, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v7);
  }
  return v8 - __readfsqword(0x28u);
}

