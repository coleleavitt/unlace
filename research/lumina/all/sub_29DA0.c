unsigned __int64 __fastcall sub_29DA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v5; // rcx
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  char *v9; // rdi
  size_t v10; // rbx
  void *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rdi
  char *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  __int64 v22; // rax
  void *v23; // [rsp+10h] [rbp-78h] BYREF
  __int128 v24; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 8);
  v27 = __readfsqword(0x28u);
  v24 = 0;
  v23 = nullptr;
  if ( v3 )
  {
    v5 = 0;
    v6 = nullptr;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v5 < v7 + 1 )
      {
        v23 = (void *)sub_1987B0(&v23, v6, v7 + 1, 24);
        v6 = (char *)v23;
        v7 = v24;
      }
      v9 = &v6[24 * v7];
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      *(_QWORD *)&v24 = v24 + 1;
      sub_299F0((char **)v9);
      if ( v3 == ++v8 )
        break;
      v5 = *((_QWORD *)&v24 + 1);
      v7 = v24;
      v6 = (char *)v23;
    }
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  sub_289B0((__int64 *)&ptr, &v23);
  v10 = n[0];
  v11 = nullptr;
  if ( n[0] )
  {
    v11 = (void *)sub_198760(n[0]);
    memcpy(v11, ptr, v10);
  }
  v12 = a1[16];
  v13 = a1[15];
  if ( a1[17] < (unsigned __int64)(v12 + 1) )
  {
    v22 = sub_1987B0(a1 + 15, v13, v12 + 1, 24);
    a1[15] = v22;
    v12 = a1[16];
    v13 = v22;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = v11;
  v15 = ptr;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  ++a1[16];
  if ( v15 )
  {
    n[0] = 0;
    j__free(v15);
  }
  v16 = (char *)v23;
  if ( v23 )
  {
    v17 = v24;
    if ( (_QWORD)v24 )
    {
      v18 = 0;
      do
      {
        v19 = &v16[24 * v18];
        v20 = *(void **)v19;
        if ( *(_QWORD *)v19 )
        {
          *((_QWORD *)v19 + 1) = 0;
          j__free(v20);
          v16 = (char *)v23;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v24 = 0;
    j__free(v16);
  }
  return v27 - __readfsqword(0x28u);
}
