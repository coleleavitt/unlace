__int64 __fastcall sub_2A3D0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  bool v7; // zf
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+10h] [rbp-140h] BYREF
  __int128 v24; // [rsp+18h] [rbp-138h]
  __m128i v25[9]; // [rsp+30h] [rbp-120h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-90h]
  __int64 v27; // [rsp+C8h] [rbp-88h]
  __int128 v28; // [rsp+D0h] [rbp-80h]
  __int64 v29; // [rsp+E0h] [rbp-70h]
  __int128 v30; // [rsp+E8h] [rbp-68h]
  __int64 v31; // [rsp+10Ch] [rbp-44h] BYREF
  char v32; // [rsp+114h] [rbp-3Ch]
  unsigned __int64 v33; // [rsp+118h] [rbp-38h]

  v3 = 5;
  v33 = __readfsqword(0x28u);
  v29 = 0;
  v6 = a1[9].m128i_i64[0];
  v7 = a1[2].m128i_i64[0] == -1;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v23 = 0;
  v30 = 0;
  v24 = 0;
  if ( v7 )
    v3 = 0xFFFFFFFFLL;
  v8 = sub_6B740(v6, a2, *(_QWORD *)a1[9].m128i_i64[1], &v23, a3, v25, v3);
  v9 = v23;
  v10 = v8;
  if ( (_BYTE)v8 )
  {
    v11 = a1->m128i_i32[0];
    v7 = v32 == 0;
    a1->m128i_i32[0] |= 0x10u;
    if ( !v7 )
      a1->m128i_i32[0] = v11 | 0x30;
    v12 = v24;
    a1[7] = _mm_load_si128(v25);
    v13 = v9 + 8 * v12;
    a1[8].m128i_i64[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)&v31), 225).m128i_u64[0];
    if ( v13 != v9 )
    {
      do
      {
        v9 += 8;
        v14 = *(_QWORD *)(v9 - 8);
        v15 = (_QWORD *)a1[3].m128i_i64[0];
        v16 = a1[3].m128i_i64[1];
        v17 = &v15[v16];
        if ( v15 != v17 )
        {
          v18 = (_QWORD *)a1[3].m128i_i64[0];
          while ( v14 != *v18 )
          {
            if ( v17 == ++v18 )
              goto LABEL_21;
          }
          if ( v17 != v18 )
            continue;
        }
LABEL_21:
        if ( a1[4].m128i_i64[0] < (unsigned __int64)(v16 + 1) )
        {
          v20 = qvector_reserve();
          v21 = a1[3].m128i_i64[1];
          a1[3].m128i_i64[0] = v20;
          v17 = (_QWORD *)(v20 + 8 * v21);
        }
        *v17 = v14;
        ++a1[3].m128i_i64[1];
      }
      while ( v9 != v13 );
      v9 = v23;
    }
  }
  if ( v9 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return v10;
}
