unsigned __int64 __fastcall sub_1E8320(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  void *v7; // rax
  const void *v8; // rsi
  void *v9; // [rsp+0h] [rbp-68h] BYREF
  __int128 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v2 = a2[27];
  v13 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  if ( v2 )
  {
    v7 = (void *)qalloc_or_throw();
    v8 = (const void *)a2[26];
    *((_QWORD *)&v10 + 1) = v2;
    v9 = v7;
    memcpy(v7, v8, 16 * v2);
    *(_QWORD *)&v10 = v2;
  }
  v4 = a2[71];
  v5 = a2[72];
  v11 = 0;
  v12 = 0;
  if ( v4 + v5 - 1 >= v4 )
  {
    v11 = qvector_reserve();
    *(__m128i *)(v11 + 16 * v12) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
    *(_QWORD *)&v12 = v12 + 1;
  }
  sub_312FC0(&v9, &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  sub_312FC0(a1 + 16, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v13 - __readfsqword(0x28u);
}

