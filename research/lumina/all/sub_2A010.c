unsigned __int64 __fastcall sub_2A010(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 *v4; // rbx
  __int64 *v6; // r13
  unsigned __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rdi
  size_t v11; // rbx
  void *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  void *v16; // rdi
  char *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rbx
  char *v20; // rax
  void *v21; // rdi
  __int64 v23; // rax
  void *v24; // [rsp+0h] [rbp-78h] BYREF
  __int128 v25; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 8);
  v4 = *(__int64 **)a3;
  v28 = __readfsqword(0x28u);
  v24 = nullptr;
  v25 = 0;
  v6 = &v4[2 * v3];
  if ( v6 != v4 )
  {
    v7 = 0;
    v8 = nullptr;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 < v9 + 1 )
      {
        v24 = (void *)sub_1987B0(&v24, v8, v9 + 1, 24);
        v9 = v25;
        v8 = (char *)v24;
      }
      v10 = &v8[24 * v9];
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      *(_QWORD *)&v25 = v25 + 1;
      sub_299F0((char **)v10);
      sub_291C0(a1, *v4);
      sub_291C0(a1, v4[1]);
      v4 += 2;
      if ( v4 == v6 )
        break;
      v7 = *((_QWORD *)&v25 + 1);
      v9 = v25;
      v8 = (char *)v24;
    }
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  sub_289B0((__int64 *)&ptr, &v24);
  v11 = n[0];
  v12 = nullptr;
  if ( n[0] )
  {
    v12 = (void *)sub_198760(n[0]);
    memcpy(v12, ptr, v11);
  }
  v13 = a1[16];
  v14 = a1[15];
  if ( a1[17] < (unsigned __int64)(v13 + 1) )
  {
    v23 = sub_1987B0(a1 + 15, v14, v13 + 1, 24);
    a1[15] = v23;
    v13 = a1[16];
    v14 = v23;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = v12;
  v16 = ptr;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  ++a1[16];
  if ( v16 )
  {
    n[0] = 0;
    j__free(v16);
  }
  v17 = (char *)v24;
  if ( v24 )
  {
    v18 = v25;
    if ( (_QWORD)v25 )
    {
      v19 = 0;
      do
      {
        v20 = &v17[24 * v19];
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          j__free(v21);
          v17 = (char *)v24;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v25 = 0;
    j__free(v17);
  }
  return v28 - __readfsqword(0x28u);
}
