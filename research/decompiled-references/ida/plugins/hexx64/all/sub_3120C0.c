__int64 __fastcall sub_3120C0(__int64 a1, __m128i *a2)
{
  __int64 v2; // rax
  int *v3; // r14
  __int64 v4; // r12
  unsigned int v5; // ebx
  int v6; // ebp
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  _BYTE *i; // rdi
  int v10; // esi
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  int *v25; // rbx
  __int64 v26; // rbp
  int *v27; // r12
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  int *v31; // [rsp+0h] [rbp-118h] BYREF
  __int128 v32; // [rsp+8h] [rbp-110h]
  __m128i v33; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-E8h]
  __int64 v35; // [rsp+50h] [rbp-C8h]
  __int64 v36; // [rsp+58h] [rbp-C0h]
  __int64 v37; // [rsp+68h] [rbp-B0h]
  __int64 v38; // [rsp+70h] [rbp-A8h]
  __int64 v39; // [rsp+80h] [rbp-98h]
  __int64 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+98h] [rbp-80h]
  __int64 v42; // [rsp+A0h] [rbp-78h]
  __int64 v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v2 = a2[11].m128i_i64[0];
  v45 = __readfsqword(0x28u);
  v31 = nullptr;
  v3 = *(int **)(v2 + 8);
  v32 = 0;
  v4 = v3[16];
  if ( v3[16] )
  {
    v31 = (int *)qvector_reserve((__int64)&v31, 0, v3[16], 4);
    memset(&v31[v32], 0, 4 * (v4 - v32));
    v25 = v31;
    *(_QWORD *)&v32 = v4;
    v26 = *((_QWORD *)v3 + 65);
    v27 = &v31[v4];
    do
    {
      *v25 = 0;
      *v25 = *(_DWORD *)(v26 + 76) == 5;
      if ( sub_330DE0(v26) == 1 )
      {
        v30 = *(_QWORD *)(v26 + 56);
        if ( *(_DWORD *)v30 == 55 && *(_BYTE *)(v30 + 32) == 7 )
          *v25 |= 2u;
      }
      v28 = sub_1399E0(v26, 0);
      if ( v28 )
      {
        v29 = *v25 | 8;
        if ( v28 < 0 )
          v29 = *v25 | 0x18;
        *v25 = v29;
      }
      ++v25;
      v26 = *(_QWORD *)(v26 + 8);
    }
    while ( v27 != v25 );
  }
  v5 = *v3;
  v6 = *(_DWORD *)(*((_QWORD *)v3 + 187) + 604LL);
  sub_70F60((__int64)&v33, a1);
  if ( (unsigned __int8)sub_78C20(&v33, a2, (__int64)&v31, ((v6 & 0x20) != 0) | (unsigned __int8)((v5 >> 22) & 2)) )
  {
    v7 = (_BYTE *)a2[17].m128i_i64[1];
    v8 = *((_QWORD *)v3 + 65);
    for ( i = &v7[4 * a2[18].m128i_i64[0]]; v7 != i; v8 = *(_QWORD *)(v8 + 8) )
    {
      v10 = *(_DWORD *)(v8 + 24);
      v11 = v10 & 0xFFFFFFFB;
      v12 = v10 | 4;
      if ( (*v7 & 4) != 0 )
        v11 = v12;
      v7 += 4;
      *(_DWORD *)(v8 + 24) = v11;
    }
    v13 = 0;
  }
  else
  {
    v13 = -34;
  }
  v33.m128i_i64[0] = (__int64)off_4EBC98;
  if ( v43 )
  {
    v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    v40 = 0;
    qfree(v39);
  }
  v14 = v37;
  if ( v37 )
  {
    v15 = v38;
    if ( v38 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18);
          v14 = v37;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v38 = 0;
    qfree(v14);
  }
  v19 = v35;
  if ( v35 )
  {
    v20 = v36;
    if ( v36 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23);
          v19 = v35;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    v36 = 0;
    qfree(v19);
  }
  v33.m128i_i64[0] = (__int64)&unk_4EC808;
  if ( v33.m128i_i64[1] )
  {
    v34 = 0;
    qfree(v33.m128i_i64[1]);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree((__int64)v31);
  }
  return v13;
}

