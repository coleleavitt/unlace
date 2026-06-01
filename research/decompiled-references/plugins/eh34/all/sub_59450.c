void __fastcall sub_59450(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  void (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v5 = a1;
  v6 = a1[2];
  if ( v6 < a2 )
  {
    v10 = 0;
    v11 = qvector_reserve(a1, 0, a2, 128);
    v12 = a1[2];
    v13 = a1[1];
    a1[2] = v6;
    v26 = v11;
    v14 = *a1;
    v27 = v12;
    v15 = v13 - 1;
    if ( v15 >= 0 )
    {
      v16 = v11;
      do
      {
        *(_QWORD *)v16 = *(_QWORD *)v14;
        *(_QWORD *)(v16 + 8) = *(_QWORD *)(v14 + 8);
        *(_BYTE *)(v16 + 16) = *(_BYTE *)(v14 + 16);
        *(_QWORD *)(v16 + 20) = *(_QWORD *)(v14 + 20);
        *(_BYTE *)(v16 + 28) = *(_BYTE *)(v14 + 28);
        v17 = *(_DWORD *)(v14 + 32);
        *(_QWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v16 + 32) = v17;
        *(_QWORD *)(v16 + 48) = 0;
        hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, v10);
        hexdsp(203, v16 + 40, v14 + 40);
        *(_QWORD *)(v16 + 56) = 0;
        *(_QWORD *)(v16 + 64) = 0;
        v19 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(203, v16 + 56);
        v19(203, v16 + 56, v14 + 56);
        v20 = *(_QWORD *)(v14 + 72);
        v10 = *(_QWORD *)(v14 + 80);
        *(_QWORD *)(v16 + 120) = 0;
        *(_QWORD *)(v16 + 72) = v20;
        v21 = *(_QWORD *)(v14 + 88);
        *(_QWORD *)(v16 + 80) = v10;
        *(_QWORD *)(v16 + 88) = v21;
        v22 = _mm_loadu_si128((const __m128i *)(v14 + 104));
        *(_QWORD *)(v16 + 96) = *(_QWORD *)(v14 + 96);
        *(__m128i *)(v16 + 104) = v22;
        if ( *(_QWORD *)(v14 + 72) == v14 + 120 )
        {
          *(_QWORD *)(v16 + 72) = v16 + 120;
          *(_QWORD *)(v16 + 120) = *(_QWORD *)(v14 + 120);
        }
        if ( v21 )
        {
          v23 = *(_QWORD *)(v21 + 8) % v10;
          v10 = v16 + 88;
          *(_QWORD *)(*(_QWORD *)(v16 + 72) + 8 * v23) = v16 + 88;
        }
        v24 = *(_QWORD *)(v14 + 56);
        v16 += 128;
        v14 += 128;
        qfree(v24);
        a1 = *(__int64 **)(v14 - 88);
        qfree(a1);
      }
      while ( v15-- != 0 );
      v14 = *v5;
    }
    qfree(v14);
    *v5 = v26;
    v5[2] = v27;
  }
  v7 = v5[1];
  if ( v7 < a2 )
  {
    do
    {
      v8 = v7++;
      sub_58500(*v5 + (v8 << 7), a3);
    }
    while ( a2 != v7 );
  }
  v5[1] = a2;
}
