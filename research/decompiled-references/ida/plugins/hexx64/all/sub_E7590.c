__int64 __fastcall sub_E7590(unsigned int *a1, _DWORD *a2, const char *a3, __int64 *a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  double v8; // xmm0_8
  unsigned int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // r15d
  int v15; // edx

  if ( a4 )
  {
    v6 = *a4 + 48 * a4[1];
    if ( *a4 != v6 )
    {
      v7 = *a4;
      while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "format") )
      {
        v7 += 48;
        if ( v6 == v7 )
          goto LABEL_10;
      }
      *(_QWORD *)&v8 = _mm_unpacklo_epi64(
                         (__m128i)*(unsigned __int64 *)(v7 + 24),
                         (__m128i)(unsigned __int64)(*(_QWORD *)(v7 + 24) + *(_QWORD *)(v7 + 32))).m128i_u64[0];
      v9 = unpack_dd();
      v10 = v9;
      if ( v9 != 2 )
      {
        if ( v9 > 3 )
        {
          if ( !under_debugger )
            sub_383060(0xCBE9u, v8);
          BUG();
        }
        *a2 = unpack_dd() - 1;
        if ( (unsigned int)unpack_dd() )
        {
          *a1 = v10;
          return 768;
        }
      }
    }
  }
LABEL_10:
  if ( !a3 || !*a3 )
    return 0;
  v11 = "printf";
  if ( stristr() )
  {
    v13 = 0;
  }
  else
  {
    v11 = "scanf";
    if ( stristr() )
    {
      v13 = 1;
    }
    else
    {
      v11 = "strfmon";
      if ( !stristr() )
        return 0;
      v13 = 2;
    }
  }
  v14 = *((_DWORD *)&off_4DCE00 + 4 * v13 + 2);
  *a1 = v14;
  *a2 = a5 - 1;
  if ( !strcmp(a3, v11) && a5 == 1 )
    return 512;
  if ( v14 != 3 && (*a3 == 102 || *a3 == 115) && a5 == 2 )
    return strcmp(a3 + 1, v11) == 0 ? 512 : 256;
  v15 = strcmp(a3, "snprintf");
  if ( a5 != 3 )
    return 256;
  result = 512;
  if ( v15 )
    return 256;
  return result;
}

