__int64 __fastcall sub_775A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __m128i *v5; // rbx
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  unsigned __int64 v8; // rax
  __m128i *v9; // r12
  __int64 v10; // r14
  __int64 v11; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
    sub_73F90(a1);
  v2 = unpack_dd();
  v3 = v2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 >= (unsigned __int64)v2 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = *(__m128i **)a2;
    if ( v4 != v2 )
    {
      v16 = 0;
      if ( v2 >= v4 )
      {
        v6 = *(_QWORD *)(a2 + 16);
        if ( &v16 < v5 || &v16 >= &v5[v6] )
        {
          if ( v6 < v3 )
          {
            v14 = qvector_reserve();
            v4 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v14;
            v5 = (__m128i *)v14;
          }
          if ( v4 < v3 )
          {
            v7 = _mm_load_si128(&v16);
            do
            {
              v8 = v4++;
              v5[v8] = v7;
              v5 = *(__m128i **)a2;
            }
            while ( v3 != v4 );
          }
        }
        else
        {
          if ( v6 < v3 )
          {
            v15 = qvector_reserve();
            v4 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v15;
            v5 = (__m128i *)v15;
          }
          if ( v4 < v3 )
          {
            do
            {
              v13 = v4++;
              v5[v13] = 0;
              v5 = *(__m128i **)a2;
            }
            while ( v3 != v4 );
          }
        }
      }
      *(_QWORD *)(a2 + 8) = v3;
    }
    v9 = &v5[v3];
    if ( v9 == v5 )
      return 1;
    while ( 1 )
    {
      while ( *(_DWORD *)(a1 + 48) <= 3u )
      {
        if ( (unsigned __int8)is_cvt64() )
          v10 = (int)sub_767A0((_QWORD *)a1);
        else
          v10 = sub_767C0(a1);
        v5->m128i_i64[0] = v10;
        if ( !(unsigned __int8)is_cvt64() )
          goto LABEL_22;
LABEL_18:
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        {
          if ( !under_debugger )
            sub_37B760(50583);
          BUG();
        }
        ++v5;
        v5[-1].m128i_i64[1] = v10 + (int)unpack_dd();
        if ( v9 == v5 )
          return 1;
      }
      v11 = *(_QWORD *)(a1 + 32);
      v10 = sub_76980((_QWORD *)a1) + v11;
      v5->m128i_i64[0] = v10;
      if ( (unsigned __int8)is_cvt64() )
        goto LABEL_18;
LABEL_22:
      ++v5;
      v5[-1].m128i_i64[1] = v10 + sub_767C0(a1);
      if ( v9 == v5 )
        return 1;
    }
  }
  return 0;
}

