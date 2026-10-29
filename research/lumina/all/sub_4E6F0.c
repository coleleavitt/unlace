__int64 __fastcall sub_4E6F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int *v3; // r10
  int *v4; // r13
  int *v5; // r15
  __int64 v6; // rax
  const char *v7; // rbx
  int v8; // edx
  __int16 v9; // ax
  __int64 v10; // rax
  __m128 v12; // xmm0
  void *v13; // rdi
  __m128i v14; // xmm1
  void *v15; // rax
  const char *v16; // [rsp+10h] [rbp-140h]
  void *v17; // [rsp+20h] [rbp-130h] BYREF
  __m128i v18; // [rsp+28h] [rbp-128h] BYREF
  void *ptr; // [rsp+40h] [rbp-110h] BYREF
  __int128 v20; // [rsp+48h] [rbp-108h]
  int v21; // [rsp+60h] [rbp-F0h] BYREF
  __int16 v22; // [rsp+64h] [rbp-ECh]
  __int64 v23; // [rsp+68h] [rbp-E8h]
  __int64 v24; // [rsp+70h] [rbp-E0h]
  int v25; // [rsp+80h] [rbp-D0h]
  __int16 v26; // [rsp+84h] [rbp-CCh]
  unsigned __int64 v27; // [rsp+118h] [rbp-38h]

  v2 = 3LL * *(_QWORD *)(a1 + 472);
  v27 = __readfsqword(0x28u);
  v3 = *(int **)(a1 + 464);
  v4 = (int *)((char *)v3 + 2 * v2);
  v5 = v3;
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v17 = nullptr;
    ptr = nullptr;
    v18 = 0;
    v20 = 0;
    sub_299F0((char **)&ptr);
    v7 = s1;
    if ( (_QWORD)v20 )
      v7 = (const char *)ptr;
    v8 = *v5;
    v9 = *((_WORD *)v5 + 2);
    v23 = 0;
    v25 = v8;
    v26 = v9;
    v21 = v8;
    v22 = v9;
    v24 = 0;
    v10 = sub_4CB80(a1, (__int64)&v21);
    if ( v10 )
      break;
    if ( (word_2439A4 & 0x200) != 0 )
      sub_4BAA0(
        (__int64 (__fastcall ***)(_QWORD))"get_license_file_contents() -> could not find borrowed license %s\n",
        v7);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      j__free(ptr);
    }
    if ( v17 )
    {
      v18.m128i_i64[0] = 0;
      v5 = (int *)((char *)v5 + 6);
      j__free(v17);
      if ( v4 == v5 )
        return 0;
    }
    else
    {
LABEL_12:
      v5 = (int *)((char *)v5 + 6);
      if ( v4 == v5 )
        return 0;
    }
  }
  v6 = *(int *)(v10 + 12);
  if ( (int)v6 >= 7 )
    v6 = 0;
  v16 = off_23E8C0[v6];
  sub_59BE0(0, 0, &v17, v16, v7);
  if ( !v18.m128i_i64[0] )
  {
    if ( (word_2439A4 & 0x200) != 0 )
      sub_4BAA0(
        (__int64 (__fastcall ***)(_QWORD))"get_license_file_contents() -> no encrypted body for borrowed license %s:%s\n",
        v16,
        v7);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      j__free(ptr);
    }
    if ( v17 )
    {
      v18.m128i_i64[0] = 0;
      j__free(v17);
    }
    goto LABEL_12;
  }
  if ( (word_2439A4 & 0x200) != 0 )
    sub_4BAA0(
      (__int64 (__fastcall ***)(_QWORD))"get_license_file_contents() -> got encrypted body for borrowed license %s:%s\n",
      v16,
      v7);
  v12 = _mm_loadh_ps((const double *)&v18.m128i_i64[1]);
  v13 = *(void **)a2;
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v17;
  v15 = ptr;
  *(__m128 *)(a2 + 8) = v12;
  v17 = v13;
  v18 = v14;
  if ( v15 )
  {
    *(_QWORD *)&v20 = 0;
    j__free(v15);
    v13 = v17;
  }
  if ( v13 )
  {
    v18.m128i_i64[0] = 0;
    j__free(v13);
  }
  return 1;
}
