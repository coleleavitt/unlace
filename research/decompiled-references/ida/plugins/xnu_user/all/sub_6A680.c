void __fastcall sub_6A680(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i v14; // xmm0

  if ( *(_QWORD *)(a2 + 8) > 1u && !*(_QWORD *)(a2 + 24) && !*(_BYTE *)(a2 + 32) )
  {
    v2 = sub_6A3B0(a1, a2);
    v3 = v2[1];
    v4 = v2[2];
    if ( v4 < v3 + 1 )
    {
      v7 = qvector_reserve();
      v8 = v2[1];
      v9 = v2[2];
      v2[2] = v4;
      v5 = v7;
      v10 = *v2;
      v11 = v8 - 1;
      if ( v11 >= 0 )
      {
        v12 = v7;
        do
        {
          v13 = *(_QWORD *)v10;
          v14 = _mm_loadu_si128((const __m128i *)(v10 + 8));
          *(_QWORD *)v10 = 0;
          *(_QWORD *)(v10 + 16) = 0;
          *(_QWORD *)v12 = v13;
          *(__m128i *)(v12 + 8) = v14;
          *(_BYTE *)(v12 + 24) = *(_BYTE *)(v10 + 24);
          if ( *(_QWORD *)v10 )
          {
            *(_QWORD *)(v10 + 8) = 0;
            qfree();
          }
          v10 += 32;
          v12 += 32;
        }
        while ( v11-- != 0 );
      }
      qfree();
      *v2 = v5;
      v3 = v2[1];
      v2[2] = v9;
    }
    else
    {
      v5 = *v2;
    }
    v6 = v5 + 32 * v3;
    *(_BYTE *)(v6 + 24) = 0;
    *(_QWORD *)v6 = 0;
    *(_OWORD *)(v6 + 8) = 0;
    ++v2[1];
    *(_BYTE *)(v6 + 24) = 1;
  }
}

