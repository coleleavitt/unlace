__int64 __fastcall sub_11B00(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 *next_seg; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp

  v3 = a2[1];
  v4 = *a2;
  if ( *a2 < v3 )
  {
    do
    {
      if ( a3 != (unsigned __int8)get_byte() )
        break;
      ++v4;
    }
    while ( v4 < v3 );
    v3 = a2[1];
  }
  if ( v3 != v4 && v4 < *(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 48) )
    return 0;
  disable_flags();
  if ( *a2 < a2[1] )
  {
    next_seg = (unsigned __int64 *)getseg();
    if ( !next_seg )
      goto LABEL_16;
LABEL_10:
    v7 = a2[1];
    while ( 1 )
    {
      v8 = next_seg[1];
      if ( v7 < v8 )
        break;
      set_segm_end();
      if ( v8 >= a2[1] )
        return 1;
      next_seg = (unsigned __int64 *)getseg();
      if ( next_seg )
        goto LABEL_10;
LABEL_16:
      next_seg = (unsigned __int64 *)get_next_seg();
      if ( next_seg )
      {
        v7 = a2[1];
        if ( *next_seg < v7 )
          continue;
      }
      return 1;
    }
    set_segm_end();
    *(__m128i *)a2 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a2 + 1)), (__m128i)v8);
    return 0;
  }
  return 1;
}

