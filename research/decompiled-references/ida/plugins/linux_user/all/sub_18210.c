void __fastcall sub_18210(__int64 a1, __int64 *a2, char *a3, unsigned int a4)
{
  const char **v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __m128i si128; // xmm0
  __m128i *v14; // r12
  __m128i v15; // xmm0
  __int64 v16; // rax

  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( !*(_DWORD *)(a1 + 224) )
  {
    if ( *a3 )
    {
      v7 = (const char **)sub_25CD0(a3);
      if ( v7 && (unsigned __int8)sub_17760(a1, a2, v7) )
      {
        *(_QWORD *)(a1 + 88) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)(a1 + 80), 0);
        v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 64))(a4);
        *(_DWORD *)(a1 + 224) = 1;
        *(_QWORD *)(a1 + 16) = v8;
      }
      else
      {
        *(_DWORD *)(a1 + 224) = -1;
      }
    }
    else
    {
      v9 = a2[1];
      if ( v9 )
      {
        v11 = v9 + 33;
        v10 = v9 + 34;
        --v9;
      }
      else
      {
        v10 = 35;
        v11 = 34;
      }
      v12 = *a2;
      if ( a2[2] < v10 )
      {
        v16 = qvector_reserve();
        *a2 = v16;
        v12 = v16;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3AB60);
      a2[1] = v10;
      *(_BYTE *)(v12 + v11) = 0;
      v14 = (__m128i *)(*a2 + v9);
      *v14 = si128;
      v15 = _mm_load_si128((const __m128i *)&xmmword_3AB70);
      v14[2].m128i_i16[0] = 11876;
      v14[1] = v15;
      *(_DWORD *)(a1 + 224) = -1;
    }
  }
}

