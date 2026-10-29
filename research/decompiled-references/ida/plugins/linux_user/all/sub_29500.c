unsigned __int64 __fastcall sub_29500(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 i; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rbx
  char v25; // [rsp+Fh] [rbp-59h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  unsigned __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v28 = __readfsqword(0x28u);
  v27 = 0;
  v25 = *(_BYTE *)(v3 + 616);
  for ( i = 0; i < a2[1]; i = v27 )
  {
    v8 = a1[2];
    v9 = a1[3];
    if ( v9 >= v8 + 1 )
    {
      v6 = a1[1];
    }
    else
    {
      v10 = qvector_reserve();
      v11 = (__int64 *)a1[1];
      v6 = v10;
      v12 = a1[3];
      a1[3] = v9;
      v26 = v12;
      v13 = a1[2] - 1;
      if ( v13 >= 0 )
      {
        v14 = v6;
        do
        {
          v15 = *v11;
          v16 = _mm_loadu_si128((const __m128i *)(v11 + 1));
          *v11 = 0;
          *(_OWORD *)(v11 + 1) = 0;
          *(_QWORD *)v14 = v15;
          *(__m128i *)(v14 + 8) = v16;
          v17 = v11[3];
          v18 = _mm_loadu_si128((const __m128i *)v11 + 2);
          v11[3] = 0;
          *(_QWORD *)(v14 + 24) = v17;
          *(__m128i *)(v14 + 32) = v18;
          LODWORD(v17) = *((_DWORD *)v11 + 12);
          v11[5] = 0;
          *(_DWORD *)(v14 + 48) = v17;
          if ( v11[3] )
          {
            v11[4] = 0;
            qfree();
          }
          if ( *v11 )
          {
            v11[1] = 0;
            qfree();
          }
          v11 += 7;
          v14 += 56;
        }
        while ( v13-- != 0 );
      }
      qfree();
      a1[1] = v6;
      a1[3] = v26;
      v8 = a1[2];
    }
    v7 = v6 + 56 * v8;
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_OWORD *)(v7 + 32) = 0;
    ++a1[2];
    if ( !(unsigned __int8)sub_29230(v7, &v27, a2, v25) )
    {
      v20 = a1[2];
      if ( v20 )
      {
        v22 = v20 - 1;
        a1[2] = v22;
        v23 = a1[1] + 56 * v22;
        v24 = (_QWORD *)v23;
        if ( *(_QWORD *)(v23 + 24) )
        {
          *(_QWORD *)(v23 + 32) = 0;
          qfree();
        }
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
      }
      return v28 - __readfsqword(0x28u);
    }
  }
  return v28 - __readfsqword(0x28u);
}

