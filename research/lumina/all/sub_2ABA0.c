unsigned __int64 __fastcall sub_2ABA0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  size_t v6; // rax
  void *v7; // r12
  size_t v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a2[1] )
  {
    ptr = nullptr;
    *(_OWORD *)n = 0;
    sub_299F0((char **)&ptr);
    v4 = *a2;
    v5 = *a2 + 8 * a2[1];
    if ( v5 != *a2 )
    {
      do
      {
        sub_2AAE0((__int64 *)&ptr);
        v4 += 8;
      }
      while ( v5 != v4 );
    }
    v6 = n[0] - 2;
    if ( !n[0] )
      v6 = -1;
    v7 = nullptr;
    *((_BYTE *)ptr + v6) = 41;
    v8 = n[0];
    if ( n[0] )
    {
      v7 = (void *)sub_198760(n[0]);
      memcpy(v7, ptr, v8);
    }
    v9 = a1[16];
    v10 = a1[15];
    if ( a1[17] < (unsigned __int64)(v9 + 1) )
    {
      v13 = sub_1987B0(a1 + 15, v10, v9 + 1, 24);
      a1[15] = v13;
      v9 = a1[16];
      v10 = v13;
    }
    v11 = v10 + 24 * v9;
    *(_QWORD *)v11 = v7;
    v12 = ptr;
    *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    ++a1[16];
    if ( v12 )
    {
      n[0] = 0;
      j__free(v12);
    }
  }
  return v16 - __readfsqword(0x28u);
}
