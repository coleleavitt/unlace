__int64 __fastcall sub_6250(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int (__fastcall *v3)(__int64, _QWORD, void *(__fastcall *)(void *, size_t, __int64 *), __int64 *); // rax
  __m128i v4; // xmm0
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v3 = *(unsigned int (__fastcall **)(__int64, _QWORD, void *(__fastcall *)(void *, size_t, __int64 *), __int64 *))(a2 + 8);
  v10 = __readfsqword(0x28u);
  if ( v3 )
  {
    v8 = 0;
    v9 = 0;
    if ( v3(a3, 0, sub_61A0, &v8) )
    {
      v4 = _mm_loadu_si128(&v9);
      *(_QWORD *)a1 = v8;
      *(__m128i *)(a1 + 8) = v4;
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = 1;
      *v6 = 0;
      if ( v8 )
      {
        v9.m128i_i64[0] = 0;
        qfree(v8);
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 1;
    *v7 = 0;
  }
  return a1;
}

