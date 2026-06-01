unsigned __int64 __fastcall sub_3770(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  unsigned int dword; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v17; // rdi
  _OWORD v18[5]; // [rsp+0h] [rbp-88h]
  unsigned __int64 v19; // [rsp+58h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v18[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_7D38),
             (__m128i)(unsigned __int64)"special PNO signature value");
  v18[1] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_7D40),
             (__m128i)(unsigned __int64)"offset to start of read-only initialized data");
  v18[2] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_7D48),
             (__m128i)(unsigned __int64)"offset to end of uninitialized data");
  v18[3] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_7D50),
             (__m128i)(unsigned __int64)"offset to end of data-to-code relocation list");
  v18[4] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)&off_7D58),
             (__m128i)(unsigned __int64)"offset to end of data-to-data relocation list");
  if ( (unsigned __int64)(a2 - a1) > 0x67 )
  {
    v2 = a1 + 32;
    v4 = 32;
    v5 = a1 + 32;
    do
    {
      while ( 1 )
      {
        create_data(v5, 0x20000000, 4, -1);
        if ( v4 != 36 )
          break;
        v4 = 40;
        set_op_type(v5, 0x33333303300000LL, 0);
        v17 = v5;
        v5 += 4;
        set_cmt(v17, *((_QWORD *)&v18[0] + 1), 0);
      }
      op_offset(v5, 0, 2, -1, a1, 0);
      v6 = v5;
      v7 = v4 >> 2;
      v4 += 4;
      v5 += 4;
      set_cmt(v6, *((_QWORD *)&v18[-4] + v7), 0);
    }
    while ( v4 != 72 );
    auto_mark_range(a1, a1 + 1, 20);
    auto_mark_range(a1, a1 + 1, 30);
    auto_mark_range(a1 + 72, a1 + 73, 20);
    auto_mark_range(a1 + 72, a1 + 73, 30);
    sub_36B0(v2, a1);
    v8 = a1 + (unsigned int)get_dword(a1 + 56);
    v9 = a1 + (unsigned int)get_dword(a1 + 60);
    while ( v8 < v9 )
    {
      create_data(v8, 0x20000000, 4, -1);
      op_offset(v8, 0, 2, -1, a1, 0);
      v10 = v8;
      v8 += 4LL;
      dword = get_dword(v10);
      sub_36B0(a1 + dword, a1);
    }
    v12 = a1 + (unsigned int)get_dword(a1 + 64);
    v13 = a1 + (unsigned int)get_dword(a1 + 68);
    while ( v12 < v13 )
    {
      create_data(v12, 0x20000000, 4, -1);
      op_offset(v12, 0, 2, -1, a1, 0);
      v14 = v12;
      v12 += 4LL;
      v15 = a1 + (unsigned int)get_dword(v14);
      create_data(v15, 0x20000000, 4, -1);
      op_offset(v15, 0, 2, -1, a1, 0);
    }
  }
  return v19 - __readfsqword(0x28u);
}
