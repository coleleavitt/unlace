__int64 __fastcall sub_C9320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 result; // rax
  __m128i v10; // [rsp+0h] [rbp-88h] BYREF
  __m128i v11; // [rsp+10h] [rbp-78h] BYREF
  __m128i v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v15; // [rsp+58h] [rbp-30h]
  __int128 v16; // [rsp+68h] [rbp-20h]
  unsigned __int64 v17; // [rsp+78h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v11 = 0;
  v11.m128i_i16[2] = 1;
  v6 = *(_QWORD *)(a1 + 24);
  v15 = 0;
  v10 = 0;
  v16 = 0;
  v12 = 0;
  v11.m128i_i64[1] = v6;
  LOBYTE(v6) = *(_BYTE *)(v6 + 100);
  v14[0] = &v10;
  v14[2] = a1;
  v14[1] = a2;
  LOBYTE(v16) = v6;
  (*(void (__fastcall **)(_QWORD *, __int64, __m128i *, __int64, __int64, __int64))(a2 + 32))(v14, a2, &v10, a4, a5, a6);
  if ( *(int *)(a1 + 32) > 0 )
    sub_C9250(*(_QWORD *)(a1 + 24), *(_QWORD **)(a1 + 40));
  v7 = v13;
  *(__m128i *)a1 = _mm_load_si128(&v10);
  v8 = _mm_load_si128(&v11);
  *(_QWORD *)(a1 + 48) = v7;
  result = HIDWORD(v15);
  *(__m128i *)(a1 + 16) = v8;
  *(__m128i *)(a1 + 32) = _mm_load_si128(&v12);
  return result;
}
