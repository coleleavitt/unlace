unsigned __int64 __fastcall sub_30EB0(_QWORD *a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  __int64 v5; // rdi
  char v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)a2;
  v21 = __readfsqword(0x28u);
  v6 = (char)a3;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_8BE38, (__m128i)(unsigned __int64)&v19);
  if ( v5 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v17 = v7;
    qfree();
    *(_QWORD *)a2 = 0;
    v7 = _mm_load_si128(&v17);
    *(_QWORD *)(a2 + 16) = 0;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = 0;
      v17 = v7;
      qfree();
      v7 = _mm_load_si128(&v17);
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    if ( *(_BYTE *)(v8 + 48) )
    {
      v17 = v7;
      close_linput();
      v7 = _mm_load_si128(&v17);
      *(_QWORD *)(v8 + 32) = 0;
    }
  }
  v20 = 0;
  v19 = 0;
  v18 = v7;
  if ( (unsigned __int8)sub_2BFD0((__int64)a1, &v18, a3, a4) )
  {
    sub_30C40((__int64)a1, (__int64)&v19, (__int64 *)a2, v9, v10, v11);
    v16 = sub_2E830(a1, (__int64)&v19, v6, v13, v14, v15);
    if ( v16 )
    {
      *(_QWORD *)(a2 + 24) = v16;
      *(_BYTE *)(a2 + 32) = 1;
    }
  }
  return v21 - __readfsqword(0x28u);
}

