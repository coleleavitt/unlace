__int64 __fastcall sub_663D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i v6; // xmm0
  unsigned __int64 *v8; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __m128i v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v9 = 0;
  v8 = nullptr;
  sub_63700((__int64)&v10, a2, (void **)(a2[59] + 184LL), (__int64 *)&v8, a5);
  if ( v12 )
  {
    v5 = v10;
    v6 = _mm_loadu_si128(&v11);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v5;
    *(__m128i *)(a1 + 8) = v6;
  }
  else
  {
    sub_62F20((__int64)a2, &v8);
    *(_BYTE *)(a1 + 24) = 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return a1;
}

