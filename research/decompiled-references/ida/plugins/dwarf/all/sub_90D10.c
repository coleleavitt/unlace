unsigned __int64 __fastcall sub_90D10(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __m128i v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // [rsp+0h] [rbp-68h] BYREF
  __m128i v13; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD *)a2;
  v16 = __readfsqword(0x28u);
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_C9150, (__m128i)(unsigned __int64)&v14);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v12 = v6;
    qfree(v4);
    *(_QWORD *)a2 = 0;
    v6 = _mm_load_si128(&v12);
    *(_QWORD *)(a2 + 16) = 0;
  }
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      *(_QWORD *)(v7 + 16) = 0;
      v12 = v6;
      qfree(v8);
      v6 = _mm_load_si128(&v12);
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 24) = 0;
    }
    if ( *(_BYTE *)(v7 + 48) )
    {
      v11 = *(_QWORD *)(v7 + 32);
      v12 = v6;
      close_linput(v11);
      v6 = _mm_load_si128(&v12);
      *(_QWORD *)(v7 + 32) = 0;
    }
  }
  v15 = 0;
  v14 = 0;
  v13 = v6;
  if ( (unsigned __int8)sub_8E7C0((__int64)a1, (__int64 (***)())&v13) )
  {
    sub_90AA0((__int64)a1, (__int64)&v14, (__int64 *)a2);
    v10 = sub_90610(a1, (__int64)&v14, a3);
    if ( v10 )
    {
      *(_QWORD *)(a2 + 24) = v10;
      *(_BYTE *)(a2 + 32) = 1;
    }
  }
  return v16 - __readfsqword(0x28u);
}

