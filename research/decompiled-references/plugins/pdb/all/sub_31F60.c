__int64 __fastcall sub_31F60(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  const __m128i *v9; // r12
  __int64 v10; // rbx
  unsigned __int64 tinfo_size; // r15
  unsigned __int64 v12; // r10
  __m128i v13; // xmm0
  unsigned __int8 v14; // bl
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int8 v17; // [rsp+0h] [rbp-58h]
  char v18; // [rsp+0h] [rbp-58h]
  unsigned __int8 v19; // [rsp+Fh] [rbp-49h]
  __int16 v20; // [rsp+14h] [rbp-44h] BYREF
  char v21; // [rsp+16h] [rbp-42h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = a2[1];
  v19 = 0;
  if ( v2 > 1 )
  {
    v3 = *a2;
    v4 = *a2 + 144 * v2;
    v5 = *a2;
    if ( v4 != *a2 )
    {
      do
      {
        if ( (*(_BYTE *)(v5 + 64) & 0xF) != 0xE )
          return 0;
        v5 += 144;
      }
      while ( v4 != v5 );
      v19 = 0;
    }
    while ( 1 )
    {
      v17 = 0;
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = (const __m128i *)(v3 + v7);
        v7 += 144;
        v10 = v7 + v3;
        ++v8;
        tinfo_size = get_tinfo_size(0, v9[4].m128i_i64[0], 0);
        v12 = get_tinfo_size(0, *(_QWORD *)(v10 + 64), 0);
        if ( v9[8].m128i_i32[3] < *(_DWORD *)(v10 + 140) )
        {
          v13 = _mm_loadu_si128(v9);
          v14 = (tinfo_size < v12) & (*(_QWORD *)v10 >= _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0]);
          if ( v14 )
          {
            v16 = v9[4].m128i_i64[0];
            v18 = v12;
            v20 = 0;
            v21 = 0;
            get_tinfo_details(v16, 14, &v20);
            LOBYTE(v20) = v18;
            create_tinfo(&v9[4], 14, 14, &v20);
            v17 = v14;
            v19 = v14;
          }
        }
        v15 = a2[1];
        if ( v8 >= v15 - 1 )
          break;
        v3 = *a2;
      }
      if ( !v17 || v15 == 1 )
        break;
      v3 = *a2;
    }
  }
  return v19;
}
