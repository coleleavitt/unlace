bool __fastcall sub_112A40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  char v8; // al
  int *v9; // rax
  __int64 v10; // r13
  char v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __m128i v14; // xmm0
  __m128i *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  char v23; // [rsp+17h] [rbp-61h] BYREF
  __int64 v24; // [rsp+18h] [rbp-60h] BYREF
  __m128i v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v3 = *(unsigned int **)(a3 + 48);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    while ( *v3 != 55 )
    {
      v7 = v3[1];
      if ( (v7 & 0x80u) == 0 )
      {
        if ( *v3 - 29 > 0xC || (v7 & 0x10) != 0 )
          return 0;
        if ( a1[3] )
        {
          if ( !v4 || !v5 )
          {
            v17 = a1[2];
            v5 = *(_QWORD *)v17 + 32LL;
            v4 = *(_QWORD *)v17 + 48LL;
            if ( *(_BYTE *)(v17 + 16) )
            {
              v5 = *(_QWORD *)v17 + 48LL;
              v4 = *(_QWORD *)v17 + 32LL;
            }
          }
          if ( (unsigned __int8)sub_1255A0(v3 + 8, v5, 0) && (unsigned __int8)sub_1255A0(v3 + 12, v4, 0) )
          {
            v8 = 0;
          }
          else
          {
            if ( !(unsigned __int8)sub_1255A0(v3 + 12, v5, 0) )
              return 0;
            v8 = sub_1255A0(v3 + 8, v4, 0);
            if ( !v8 )
              return 0;
          }
          v23 = v8;
        }
        else if ( !(unsigned __int8)sub_112550(a1, &v23, a2, (__int64)v3) )
        {
          return 0;
        }
        if ( !(unsigned __int8)sub_11C660(*a1, *v3, 2 * v3[9]) )
          return 0;
        v9 = (int *)sub_1126F0((__int64)a1, &v24, (__int64)(v3 + 16));
        v10 = (__int64)v9;
        if ( !v9 )
          return 0;
        v11 = v23;
        if ( !(unsigned __int8)sub_112770(a1, v3, v23, v9, v24) )
          return 0;
        v21 = a1[3];
        v20 = a1[2];
        v25.m128i_i64[0] = (__int64)v3;
        v25.m128i_i64[1] = v10;
        v12 = a1[4];
        LOBYTE(v26) = v11;
        v13 = v21 + 1;
        if ( (unsigned __int64)&v25 < v20 || (unsigned __int64)&v25 >= v20 + 24 * v12 )
        {
          if ( v12 < v13 )
          {
            v18 = qvector_reserve();
            a1[2] = v18;
            v20 = v18;
            v21 = a1[3];
          }
          v14 = _mm_load_si128(&v25);
          v15 = (__m128i *)(v20 + 24 * v21);
          v15[1].m128i_i64[0] = v26;
          *v15 = v14;
        }
        else
        {
          if ( v12 < v13 )
          {
            v19 = qvector_reserve();
            a1[2] = v19;
            v20 = v19;
            v21 = a1[3];
          }
          v6 = v20 + 24 * v21;
          *(_QWORD *)v6 = v3;
          *(_QWORD *)(v6 + 8) = v10;
          *(_BYTE *)(v6 + 16) = v11;
        }
        ++a1[3];
      }
      v3 = *((unsigned int **)v3 + 1);
      if ( !v3 )
        return a1[3] != 0;
    }
  }
  return a1[3] != 0;
}

