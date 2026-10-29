unsigned __int64 __fastcall sub_378E0(_QWORD *a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  __int64 v5; // rdi
  char v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // r12
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)a2;
  v15 = __readfsqword(0x28u);
  v6 = (char)a3;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_979F8, (__m128i)(unsigned __int64)&v13);
  if ( v5 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v11 = v7;
    qfree();
    *(_QWORD *)a2 = 0;
    v7 = _mm_load_si128(&v11);
    *(_QWORD *)(a2 + 16) = 0;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = 0;
      v11 = v7;
      qfree();
      v7 = _mm_load_si128(&v11);
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    if ( *(_BYTE *)(v8 + 48) )
    {
      v11 = v7;
      close_linput();
      v7 = _mm_load_si128(&v11);
      *(_QWORD *)(v8 + 32) = 0;
    }
  }
  v14 = 0;
  v13 = 0;
  v12 = v7;
  if ( (unsigned __int8)sub_32130((__int64)a1, &v12, a3, a4) )
  {
    sub_37670((__int64)a1, (__int64)&v13, (__int64 *)a2);
    v10 = sub_364D0(a1, (__int64)&v13, v6);
    if ( v10 )
    {
      *(_QWORD *)(a2 + 24) = v10;
      *(_BYTE *)(a2 + 32) = 1;
    }
  }
  return v15 - __readfsqword(0x28u);
}

