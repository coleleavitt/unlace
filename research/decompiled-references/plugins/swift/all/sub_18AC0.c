unsigned __int64 __fastcall sub_18AC0(size_t *a1, size_t a2)
{
  size_t v2; // rbx
  size_t v5; // r14
  __int64 v6; // rdx
  size_t v7; // rax
  size_t v9; // r15
  __int64 v10; // r14
  __int64 *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  size_t v15; // rsi
  size_t v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rdi
  size_t v26; // [rsp+0h] [rbp-C8h]
  __int64 v27; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-B0h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  __int128 v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+50h] [rbp-78h] BYREF
  __int128 v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int128 v35; // [rsp+70h] [rbp-58h]
  int v36; // [rsp+80h] [rbp-48h]
  char v37; // [rsp+84h] [rbp-44h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v27 = 0;
    v29 = 0;
    v31 = 0xFFFFFFFFLL;
    v28 = 0;
    v30 = 0;
    if ( a2 < v2 )
    {
      v9 = a2;
      v10 = 56 * a2;
      do
      {
        v11 = (__int64 *)(v10 + *a1);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13);
        }
        ++v9;
        v10 += 56;
      }
      while ( v2 != v9 );
      a1[1] = a2;
    }
    else
    {
      v5 = a1[2];
      if ( (unsigned __int64)&v27 < *a1 || (unsigned __int64)&v27 >= *a1 + 56 * v5 )
      {
        if ( v5 < a2 )
        {
          v14 = qvector_reserve(a1, 0, a2, 56);
          v15 = a1[2];
          v16 = *a1;
          a1[2] = v5;
          v26 = v14;
          v17 = a1[1] - 1;
          if ( v17 >= 0 )
          {
            v18 = v14;
            do
            {
              v19 = *(_QWORD *)v16;
              v20 = _mm_loadu_si128((const __m128i *)(v16 + 8));
              *(_QWORD *)v16 = 0;
              *(_OWORD *)(v16 + 8) = 0;
              *(_QWORD *)v18 = v19;
              *(__m128i *)(v18 + 8) = v20;
              v21 = *(_QWORD *)(v16 + 24);
              v22 = _mm_loadu_si128((const __m128i *)(v16 + 32));
              *(_QWORD *)(v16 + 24) = 0;
              *(_QWORD *)(v18 + 24) = v21;
              *(__m128i *)(v18 + 32) = v22;
              LODWORD(v21) = *(_DWORD *)(v16 + 48);
              *(_QWORD *)(v16 + 40) = 0;
              *(_DWORD *)(v18 + 48) = v21;
              *(_BYTE *)(v18 + 52) = *(_BYTE *)(v16 + 52);
              v23 = *(_QWORD *)(v16 + 24);
              if ( v23 )
              {
                *(_QWORD *)(v16 + 32) = 0;
                qfree(v23);
              }
              v24 = *(_QWORD *)v16;
              if ( *(_QWORD *)v16 )
              {
                *(_QWORD *)(v16 + 8) = 0;
                qfree(v24);
              }
              v16 += 56LL;
              v18 += 56;
            }
            while ( v17-- != 0 );
            v16 = *a1;
          }
          qfree(v16);
          v2 = a1[1];
          *a1 = v26;
          a1[2] = v15;
        }
        if ( v2 < a2 )
        {
          v6 = 56 * v2;
          do
          {
            ++v2;
            v7 = v6 + *a1;
            v6 += 56;
            *(_QWORD *)v7 = 0;
            *(_QWORD *)(v7 + 24) = 0;
            *(_DWORD *)(v7 + 48) = -1;
            *(_BYTE *)(v7 + 52) = 0;
            *(_OWORD *)(v7 + 8) = 0;
            *(_OWORD *)(v7 + 32) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
      }
      else
      {
        v33 = 0;
        v35 = 0;
        v32 = 0;
        v34 = 0;
        v36 = -1;
        v37 = 0;
        sub_18890(a1, a2, (__int64)&v32);
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}
