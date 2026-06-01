__int64 __fastcall sub_1B9340(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v11; // r8
  char v12; // al
  char v13; // al
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // r13
  void *v19; // r12
  unsigned __int64 v20; // rax
  __m128i si128; // xmm0
  __int64 v22; // rdi
  size_t v23; // rbp
  unsigned __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ebp
  __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // ebp
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)a3 >= *(_DWORD *)(v4 + 64) )
    sub_1B81F0(a4);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (__int64 *)a2;
  v7 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    v8 = *(_QWORD *)v5;
    if ( *(_QWORD *)(v5 + 8) )
      v8 = *(_QWORD *)(v7 + 8);
LABEL_5:
    while ( v7 != v8 )
    {
      a2 = v8 + 24;
      if ( (_DWORD)a3 == *(_DWORD *)(v8 + 32) )
        goto LABEL_12;
      v5 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) != 0 )
      {
        while ( (_DWORD)a3 != *(_DWORD *)(v8 + 32) )
          ;
LABEL_12:
        a3 = (unsigned int)a3;
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * (unsigned int)a3) + 56LL);
        if ( v8 == -24 )
          goto LABEL_23;
        if ( v9 && *(_DWORD *)v9 == 53 )
        {
          if ( !under_debugger )
            sub_383060(0xCEBBu, a4);
          BUG();
        }
        return 0;
      }
      a2 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)a2 & 2) != 0 )
      {
        v5 &= 0xFFFFFFFFFFFFFFFCLL;
        a2 = *(_QWORD *)v5;
        if ( (*(_QWORD *)v5 & 2) == 0 )
        {
          while ( *(_QWORD *)(v5 + 16) == v8 )
          {
            v8 = v5;
            v11 = a2 & 0xFFFFFFFFFFFFFFFCLL;
            a2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (a2 & 2) != 0 )
            {
              v8 = v11;
              goto LABEL_5;
            }
            v5 = v11;
          }
        }
        v8 = v5;
      }
      else
      {
        do
        {
          v8 = a2;
          a2 = *(_QWORD *)(a2 + 8);
        }
        while ( (*(_BYTE *)a2 & 2) == 0 );
      }
    }
  }
  a3 = (unsigned int)a3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * (unsigned int)a3) + 56LL);
LABEL_23:
  if ( !v9 )
    return 1;
  switch ( *(_DWORD *)v9 )
  {
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      v12 = *(_BYTE *)(v9 + 64);
      if ( v12 == 7 )
      {
        v28 = v6[1];
        v29 = *(_DWORD *)(v9 + 72);
        v30 = *v6;
        if ( v6[2] < (unsigned __int64)(v28 + 1) )
        {
          v34 = qvector_reserve((__int64)v6, v30, v28 + 1, 4);
          *v6 = v34;
          v30 = v34;
          v28 = v6[1];
        }
        *(_DWORD *)(v30 + 4 * v28) = v29;
        ++v6[1];
      }
      else if ( v12 == 6 )
      {
        v24 = *(_QWORD *)(v9 + 72);
        if ( v24 != -1 )
        {
          v25 = sub_670B0(v4, v24);
          if ( v25 )
          {
            v26 = *((_DWORD *)v25 + 18);
            v27 = v6[1];
            if ( v6[2] < (unsigned __int64)(v27 + 1) )
            {
              *v6 = qvector_reserve((__int64)v6, *v6, v27 + 1, 4);
              v27 = v6[1];
            }
            *(_DWORD *)(*v6 + 4 * v27) = v26;
            ++v6[1];
          }
        }
      }
      return 1;
    case '5':
      v18 = *(_QWORD *)(v9 + 56);
      v19 = nullptr;
      v20 = *(_QWORD *)(v18 + 32);
      si128 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
      if ( v20 )
      {
        v23 = 4 * v20;
        v36[0] = si128;
        v19 = (void *)qalloc_or_throw(4 * v20, a2, a3, v5);
        memcpy(v19, *(const void **)(v18 + 24), v23);
        si128 = _mm_load_si128(v36);
      }
      v22 = *v6;
      if ( *v6 )
      {
        v6[1] = 0;
        v36[0] = si128;
        qfree(v22);
        si128 = _mm_load_si128(v36);
      }
      *v6 = (__int64)v19;
      *(__m128i *)(v6 + 1) = si128;
      return 0;
    case '6':
    case ':':
      return 0;
    case '7':
      v13 = *(_BYTE *)(v9 + 32);
      if ( v13 == 7 )
      {
        v31 = v6[1];
        v32 = *(_DWORD *)(v9 + 40);
        v33 = *v6;
        if ( v6[2] < (unsigned __int64)(v31 + 1) )
        {
          v35 = qvector_reserve((__int64)v6, v33, v31 + 1, 4);
          *v6 = v35;
          v33 = v35;
          v31 = v6[1];
        }
        *(_DWORD *)(v33 + 4 * v31) = v32;
        ++v6[1];
      }
      else if ( v13 == 6 )
      {
        v14 = *(_QWORD *)(v9 + 40);
        if ( v14 != -1 )
        {
          v15 = sub_670B0(v4, v14);
          if ( v15 )
          {
            v16 = *((_DWORD *)v15 + 18);
            v17 = v6[1];
            if ( v6[2] < (unsigned __int64)(v17 + 1) )
            {
              *v6 = qvector_reserve((__int64)v6, *v6, v17 + 1, 4);
              v17 = v6[1];
            }
            *(_DWORD *)(*v6 + 4 * v17) = v16;
            ++v6[1];
          }
        }
      }
      return 0;
    case '8':
    case '9':
      result = (unsigned int)sub_11C750((int *)v9, *(_QWORD *)(v4 + 1504), 0) ^ 1;
      break;
    default:
      return 1;
  }
  return result;
}

