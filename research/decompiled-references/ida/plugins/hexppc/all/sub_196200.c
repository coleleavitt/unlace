__int64 __fastcall sub_196200(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int tinfo_size; // eax
  int v14; // ecx
  __int64 v15; // rbx
  const __m128i *i; // rsi
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a3 + 32;
  v19[1] = __readfsqword(0x28u);
  v6 = sub_11C340((char *)(a3 + 32), &v18, 0);
  if ( (_BYTE)v6 )
  {
    v10 = v18;
    goto LABEL_8;
  }
  v7 = v6;
  if ( *(_BYTE *)(a3 + 32) == 10 )
  {
    v9 = *(_QWORD *)(a3 + 40);
    if ( *(_BYTE *)v9 == 5 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
LABEL_8:
      *(_QWORD *)(a2 + 16) = v10;
      return 1;
    }
  }
  if ( *(_DWORD *)a3 == 4 )
  {
    if ( (unsigned __int8)sub_32AEE0(v3, v19) )
    {
      v11 = *(int *)(a3 + 36);
      v12 = v19[0];
      tinfo_size = get_tinfo_size();
      v14 = *(_DWORD *)(a1 + 72) - 1;
      if ( v14 >= 0 )
      {
        v15 = v12 + v11;
        for ( i = (const __m128i *)(*(_QWORD *)(a1 + 64) + 40LL * (unsigned int)v14);
              v12 < i->m128i_i64[0] || v15 > tinfo_size + i->m128i_i64[0];
              i = (const __m128i *)((char *)i - 40) )
        {
          if ( --v14 == -1 )
            return v7;
        }
        if ( i )
        {
          *(_QWORD *)(a2 + 16) = v19[0];
          *(__m128i *)(a2 + 24) = _mm_loadu_si128(i);
          *(__m128i *)(a2 + 40) = _mm_loadu_si128(i + 1);
          v17 = i[2].m128i_i64[0];
          *(_BYTE *)(a2 + 64) = 1;
          *(_QWORD *)(a2 + 56) = v17;
          return 1;
        }
      }
    }
  }
  return v7;
}

