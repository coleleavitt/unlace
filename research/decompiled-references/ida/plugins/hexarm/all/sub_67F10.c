unsigned __int64 __fastcall sub_67F10(__int64 a1, int a2, int a3)
{
  int *v3; // rax
  int *v5; // rdx
  bool v6; // r13
  _DWORD v8[4]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+10h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v3 = *(int **)a1;
  v10 = __readfsqword(0x28u);
  v5 = &v3[4 * *(_QWORD *)(a1 + 8)];
  if ( v3 == v5 )
  {
LABEL_5:
    v6 = 0;
  }
  else
  {
    while ( a2 < *v3 || a2 >= v3[1] )
    {
      v3 += 4;
      if ( v5 == v3 )
        goto LABEL_5;
    }
    v6 = v3 != nullptr;
  }
  v8[0] = a2;
  memset(&v8[1], 0, 12);
  v9 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4D6300), (__m128i)(unsigned __int64)sub_64C00);
  sub_67D90((int **)a1, (__int64)v8);
  if ( v9.m128i_i64[0] )
    ((void (__fastcall *)(_DWORD *, _DWORD *, __int64))v9.m128i_i64[0])(v8, v8, 3);
  v8[0] = a3;
  LOBYTE(v8[1]) = v6;
  *(_QWORD *)((char *)&v8[1] + 1) = 0;
  v8[3] = 0;
  v9 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4D6308), (__m128i)(unsigned __int64)sub_64C10);
  sub_67D90((int **)a1, (__int64)v8);
  if ( v9.m128i_i64[0] )
    ((void (__fastcall *)(_DWORD *, _DWORD *, __int64))v9.m128i_i64[0])(v8, v8, 3);
  return v10 - __readfsqword(0x28u);
}

