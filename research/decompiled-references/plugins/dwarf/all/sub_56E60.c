unsigned __int64 __fastcall sub_56E60(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *i; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17; // [rsp+8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v5 = (_QWORD *)*a1;
  v6 = a1[1];
  v7 = &v5[v6];
  for ( i = v5; v7 != i; ++i )
  {
    if ( a2 == *i )
      break;
  }
  v9 = i - v5;
  if ( v9 < v6 )
  {
    while ( 1 )
    {
      v10 = v5[v9];
      if ( *(_QWORD *)(v10 + 320) <= 1u || !strstr(*(const char **)(v10 + 312), "$<") || *(_QWORD *)(v10 + 352) > 1u )
        goto LABEL_7;
      v16 = 0;
      v18 = 0;
      v17 = 0;
      v19 = 0;
      sub_56CA0((__int64)a1, (__int64)&v16, v10, a3, 1, (__int64)&v18);
      v11 = *(_QWORD *)(v10 + 312);
      v12 = _mm_loadu_si128((const __m128i *)(v10 + 320));
      v13 = _mm_loadu_si128(&v17);
      *(_QWORD *)(v10 + 312) = v16;
      v14 = v18;
      v16 = v11;
      *(__m128i *)(v10 + 320) = v13;
      v17 = v12;
      if ( v14 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v14);
        v11 = v16;
      }
      if ( v11 )
      {
        v17.m128i_i64[0] = 0;
        ++v9;
        qfree(v11);
        if ( v9 >= a1[1] )
          return v20 - __readfsqword(0x28u);
      }
      else
      {
LABEL_7:
        if ( ++v9 >= a1[1] )
          return v20 - __readfsqword(0x28u);
      }
      v5 = (_QWORD *)*a1;
    }
  }
  return v20 - __readfsqword(0x28u);
}
