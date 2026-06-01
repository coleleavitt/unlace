__int64 __fastcall sub_37F060(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-48h]

  v4 = simpleline_place_t__deserialize();
  if ( (_BYTE)v4 )
  {
    if ( *a2 < a3 )
    {
      v8 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3).m128i_u64[0];
      if ( (unsigned __int8)is_cvt64() )
      {
        v6 = (unsigned int)unpack_dd();
        if ( (unsigned int)v6 == 0xFFFFFFFFLL )
          v6 = -1;
      }
      else
      {
        v6 = unpack_dq();
      }
      *(_QWORD *)(a1 + 16) = v6;
      if ( (unsigned __int8)is_cvt64() )
      {
        v7 = (unsigned int)unpack_dd();
        if ( (unsigned int)v7 == 0xFFFFFFFFLL )
          v7 = -1;
      }
      else
      {
        v7 = unpack_dq();
      }
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16) + v7;
      *a2 = v8;
    }
    else
    {
      return 0;
    }
  }
  return v4;
}

