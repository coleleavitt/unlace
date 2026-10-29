__int64 __fastcall sub_48760(__int64 a1, _QWORD *a2, char **a3)
{
  int v5; // eax
  char *v6; // rcx
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  void *v11; // rbx
  void *v12; // rdi
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  void *v15; // rdi
  __m128i v16; // [rsp+0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v18; // [rsp+18h] [rbp-E0h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v20; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+60h] [rbp-98h] BYREF
  char v22; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( a2[1] != 128 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3145);
    BUG();
  }
  v5 = sub_5C710(v19, 160, *a2, 128, &unk_1B7A20, &unk_1B7AC0);
  if ( v5 < 0 )
  {
LABEL_7:
    sub_299F0(a3);
    return 0;
  }
  v6 = &v22;
  if ( (unsigned __int64)v5 > 0x40 )
  {
    while ( !*v6 )
    {
      if ( &v19[v5] == ++v6 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  v18 = 0;
  ptr = nullptr;
  ptr = (void *)sub_1987B0(&ptr, 0, 32, 1);
  memset((char *)ptr + v18.m128i_i64[0], 0, 32 - v18.m128i_i64[0]);
  v8 = (__m128i *)ptr;
  v9 = _mm_load_si128(&v20);
  v18.m128i_i64[0] = 32;
  *(__m128i *)ptr = v9;
  v10 = _mm_load_si128(&v21);
  v11 = ptr;
  ptr = nullptr;
  v8[1] = v10;
  v12 = *(void **)a1;
  v13 = _mm_loadu_si128(&v18);
  v18 = 0;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v16 = v13;
    j__free(v12);
    v14 = _mm_load_si128(&v16);
    v15 = ptr;
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v14;
    if ( v15 )
    {
      v18.m128i_i64[0] = 0;
      j__free(v15);
    }
  }
  else
  {
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v13;
  }
  return 1;
}
