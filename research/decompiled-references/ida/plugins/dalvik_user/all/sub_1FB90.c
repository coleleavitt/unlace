unsigned __int64 __fastcall sub_1FB90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  if ( (_QWORD)xmmword_7FBB8 )
  {
    if ( *(_BYTE *)qword_7FBB0 )
      goto LABEL_3;
  }
  else if ( byte_7FAF1 )
  {
LABEL_3:
    sub_13B20(&v7);
    goto LABEL_4;
  }
  v7 = qvector_reserve();
  v8.m128i_i64[0] = 6;
  *(_BYTE *)(v7 + 5) = 0;
  v6 = v7;
  *(_DWORD *)v7 = 1953722216;
  *(_BYTE *)(v6 + 4) = 58;
LABEL_4:
  sub_1FA10(&v7);
  v2 = v7;
  if ( a1 )
  {
    v2 = *(_QWORD *)a1;
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v7;
    v4 = _mm_loadu_si128(&v8);
    v7 = v2;
    v8.m128i_i64[1] = v3;
    *(__m128i *)(a1 + 8) = v4;
  }
  if ( v2 )
  {
    v8.m128i_i64[0] = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

