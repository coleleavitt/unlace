__int64 __fastcall sub_380070(__int64 a1, char a2)
{
  int v3; // ebx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // ebx
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+20h] [rbp-50h]
  __m128i v22; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-38h]

  v3 = 0;
  v23 = __readfsqword(0x28u);
  v20 = 0;
  copy_tinfo_t();
  while ( 1 )
  {
    v5 = v20;
    if ( (get_tinfo_property() & 0xF) != 0xA )
      break;
    tinfo_property = get_tinfo_property();
    if ( !(unsigned int)lexcompare_tinfo() )
    {
      clear_tinfo_t();
      v5 = v20;
      break;
    }
    v4 = v20;
    ++v3;
    v20 = tinfo_property;
    tinfo_property = v4;
    clear_tinfo_t();
  }
  if ( (v5 & 0x3F) == 0x3D && (a2 || (unsigned __int8)sub_326E90(&v20)) )
  {
    tinfo_property = 0;
    v22 = 0;
    print_tinfo();
    if ( v3 )
    {
      v12 = 2;
      v18 = v22.m128i_i64[0];
      if ( v22.m128i_i64[0] )
      {
        v12 = v22.m128i_i64[0] + 1;
        v18 = v22.m128i_i64[0] - 1;
      }
      v13 = tinfo_property;
      if ( v22.m128i_i64[1] < v12 )
      {
        tinfo_property = qvector_reserve();
        v13 = tinfo_property;
      }
      v22.m128i_i64[0] = v12;
      *(_BYTE *)(v13 + v18) = 32;
      *(_BYTE *)(tinfo_property + v18 + 1) = 0;
      v14 = v3 - 1;
      if ( v14 >= 0 )
      {
        do
        {
          v16 = 2;
          v19 = v22.m128i_i64[0];
          if ( v22.m128i_i64[0] )
          {
            v16 = v22.m128i_i64[0] + 1;
            v19 = v22.m128i_i64[0] - 1;
          }
          v17 = tinfo_property;
          if ( v22.m128i_i64[1] < v16 )
          {
            tinfo_property = qvector_reserve();
            v17 = tinfo_property;
          }
          v22.m128i_i64[0] = v16;
          *(_BYTE *)(v17 + v19) = 42;
          *(_BYTE *)(tinfo_property + v19 + 1) = 0;
        }
        while ( v14-- != 0 );
      }
    }
    v7 = *(_QWORD *)(a1 + 16);
    v8 = tinfo_property;
    v9 = _mm_loadu_si128(&v22);
    tinfo_property = *(_QWORD *)a1;
    v6 = tinfo_property;
    *(_QWORD *)a1 = v8;
    v22.m128i_i64[1] = v7;
    *(__m128i *)(a1 + 8) = v9;
    if ( v6 )
    {
      v22.m128i_i64[0] = 0;
      qfree();
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  clear_tinfo_t();
  return v10;
}

