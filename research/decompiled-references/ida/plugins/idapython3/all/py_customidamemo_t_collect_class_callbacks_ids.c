_OWORD *__fastcall py_customidamemo_t_collect_class_callbacks_ids(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r12
  _OWORD *v6; // rsi
  __m128i si128; // xmm0
  _OWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v18; // rax

  v2 = a2[1];
  v3 = a2[2];
  if ( v3 < v2 + 1 )
  {
    v9 = qvector_reserve();
    v10 = a2[1];
    v11 = a2[2];
    a2[2] = v3;
    v12 = *a2;
    v4 = v9;
    v13 = v10 - 1;
    if ( v13 >= 0 )
    {
      v14 = v9;
      do
      {
        v15 = *(_QWORD *)v12;
        v16 = _mm_loadu_si128((const __m128i *)(v12 + 8));
        *(_QWORD *)v12 = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)v14 = v15;
        *(__m128i *)(v14 + 8) = v16;
        *(_DWORD *)(v14 + 24) = *(_DWORD *)(v12 + 24);
        if ( *(_QWORD *)v12 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          qfree();
        }
        v12 += 32;
        v14 += 32;
      }
      while ( v13-- != 0 );
    }
    qfree();
    *a2 = v4;
    v2 = a2[1];
    a2[2] = v11;
  }
  else
  {
    v4 = *a2;
  }
  v5 = 32 * v2 + v4;
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  ++a2[1];
  v6 = *(_OWORD **)v5;
  if ( *(_QWORD *)(v5 + 16) <= 0x10u )
  {
    v18 = qvector_reserve();
    *(_QWORD *)v5 = v18;
    v6 = (_OWORD *)v18;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D920);
  *(_QWORD *)(v5 + 8) = 17;
  *v6 = si128;
  result = *(_OWORD **)v5;
  *(_BYTE *)(*(_QWORD *)v5 + 16LL) = 0;
  *(_DWORD *)(v5 + 24) = 1;
  return result;
}

