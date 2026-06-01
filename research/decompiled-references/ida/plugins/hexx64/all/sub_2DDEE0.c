unsigned __int64 __fastcall sub_2DDEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __m128i v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rdi
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h]
  __m128i v24; // [rsp+28h] [rbp-60h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_OWORD *)(a1 + 24) = 0;
  v22 = v2;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a2 + 16) == 0;
  v23 = v3;
  v25 = *(_QWORD *)(a1 + 40);
  v26 = *(_DWORD *)(a1 + 48);
  v21 = off_4E2C60;
  v27 = *(_QWORD *)(a1 + 56);
  if ( v4 )
LABEL_12:
    std::__throw_bad_function_call();
  v5 = a1 - 64;
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v21, v5) < 0 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 80);
    v8 = *(_QWORD *)(v5 + 16);
    v9 = _mm_loadu_si128((const __m128i *)(v5 + 24));
    *(_OWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 72) = v6;
    *(_QWORD *)(v5 + 16) = 0;
    if ( v7 )
    {
      *(_QWORD *)(v5 + 88) = 0;
      v20 = v9;
      qfree(v7);
      v9 = _mm_load_si128(&v20);
    }
    v10 = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(v5 + 80) = v8;
    v5 -= 64;
    *(__m128i *)(v5 + 152) = v9;
    *(_QWORD *)(v5 + 168) = v10;
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 112);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 120);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v11 = *(_QWORD *)(v5 + 80);
  v12 = v5 + 64;
  v13 = v23;
  v14 = _mm_loadu_si128(&v24);
  v24 = 0;
  v23 = 0;
  *(_QWORD *)(v12 + 8) = v22;
  if ( v11 )
  {
    *(_QWORD *)(v12 + 24) = 0;
    v20 = v14;
    qfree(v11);
    v15 = v25;
    v16 = _mm_load_si128(&v20);
    *(_QWORD *)(v12 + 16) = v13;
    v17 = v23;
    *(_QWORD *)(v12 + 40) = v15;
    LODWORD(v15) = v26;
    *(__m128i *)(v12 + 24) = v16;
    *(_DWORD *)(v12 + 48) = v15;
    *(_QWORD *)(v12 + 56) = v27;
    v21 = off_4E13C0;
    if ( v17 )
    {
      v24.m128i_i64[0] = 0;
      qfree(v17);
    }
  }
  else
  {
    v19 = v25;
    *(_QWORD *)(v12 + 16) = v13;
    *(__m128i *)(v12 + 24) = v14;
    *(_QWORD *)(v12 + 40) = v19;
    *(_DWORD *)(v12 + 48) = v26;
    *(_QWORD *)(v12 + 56) = v27;
  }
  return v28 - __readfsqword(0x28u);
}

