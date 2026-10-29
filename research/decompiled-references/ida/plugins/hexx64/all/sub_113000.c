bool __fastcall sub_113000(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // edx
  char v9; // al
  int *v10; // rax
  __int64 v11; // r13
  char v12; // r14
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r8
  __m128i v16; // xmm0
  __m128i *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  char v25; // [rsp+17h] [rbp-61h] BYREF
  __int64 v26; // [rsp+18h] [rbp-60h] BYREF
  __m128i v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 48);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    while ( *(_DWORD *)v4 != 55 )
    {
      v8 = *(_DWORD *)(v4 + 4);
      if ( (v8 & 0x80u) == 0 )
      {
        if ( (unsigned int)(*(_DWORD *)v4 - 29) > 0xC || (v8 & 0x10) != 0 )
          return 0;
        if ( a1[3] )
        {
          if ( !v5 || !v6 )
          {
            v19 = a1[2];
            v6 = *(_QWORD *)v19 + 32LL;
            v5 = *(_QWORD *)v19 + 48LL;
            if ( *(_BYTE *)(v19 + 16) )
            {
              v6 = *(_QWORD *)v19 + 48LL;
              v5 = *(_QWORD *)v19 + 32LL;
            }
          }
          if ( sub_125B60((unsigned __int8 *)(v4 + 32), v6, 0) && sub_125B60((unsigned __int8 *)(v4 + 48), v5, 0) )
          {
            v9 = 0;
          }
          else
          {
            if ( !sub_125B60((unsigned __int8 *)(v4 + 48), v6, 0) )
              return 0;
            v9 = sub_125B60((unsigned __int8 *)(v4 + 32), v5, 0);
            if ( !v9 )
              return 0;
          }
          v25 = v9;
        }
        else if ( !(unsigned __int8)sub_112B10(a1, &v25, a2, v4) )
        {
          return 0;
        }
        if ( !sub_11CC20(*a1, *(_DWORD *)v4, 2 * *(_DWORD *)(v4 + 36)) )
          return 0;
        v10 = (int *)sub_112CB0((__int64)a1, &v26, v4 + 64);
        v11 = (__int64)v10;
        if ( !v10 )
          return 0;
        v12 = v25;
        if ( !sub_112D30(a1, (unsigned int *)v4, v25, v10, v26) )
          return 0;
        v23 = a1[3];
        v22 = a1[2];
        v27.m128i_i64[0] = v4;
        v27.m128i_i64[1] = v11;
        v13 = a1[4];
        v14 = a1 + 2;
        LOBYTE(v28) = v12;
        v15 = v23 + 1;
        if ( (unsigned __int64)&v27 < v22 || (unsigned __int64)&v27 >= v22 + 24 * v13 )
        {
          if ( v13 < v15 )
          {
            v20 = qvector_reserve((__int64)v14, v22, v23 + 1, 24);
            a1[2] = v20;
            v22 = v20;
            v23 = a1[3];
          }
          v16 = _mm_load_si128(&v27);
          v17 = (__m128i *)(v22 + 24 * v23);
          v17[1].m128i_i64[0] = v28;
          *v17 = v16;
        }
        else
        {
          if ( v13 < v15 )
          {
            v21 = qvector_reserve((__int64)v14, v22, v23 + 1, 24);
            a1[2] = v21;
            v22 = v21;
            v23 = a1[3];
          }
          v7 = v22 + 24 * v23;
          *(_QWORD *)v7 = v4;
          *(_QWORD *)(v7 + 8) = v11;
          *(_BYTE *)(v7 + 16) = v12;
        }
        ++a1[3];
      }
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        return a1[3] != 0;
    }
  }
  return a1[3] != 0;
}

