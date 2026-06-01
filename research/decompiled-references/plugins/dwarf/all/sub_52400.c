__int64 __fastcall sub_52400(_QWORD *a1, __int64 a2, char a3)
{
  __m128i v4; // rax
  unsigned __int32 v5; // r14d
  __int64 (__fastcall *v7)(__int64, const __m128i *, __int64); // rax
  __int64 *v8; // rdi
  size_t *v9; // rsi
  __int64 v10; // rdi
  const char *v11; // rax
  const char *v12; // r13
  size_t v13; // rax
  size_t v14; // r14
  const char *v15; // r15
  __int64 (__fastcall *v16)(__int64, const char *, const __m128i *, __int64); // rax
  __int64 *v17; // rdi
  size_t *v18; // rsi
  __int64 v19; // rdi
  void *v20; // rdi
  size_t v21; // r15
  __m128i v23; // [rsp+10h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+20h] [rbp-90h] BYREF
  __m128i v25; // [rsp+30h] [rbp-80h] BYREF
  void *dest; // [rsp+40h] [rbp-70h] BYREF
  __int128 v27; // [rsp+48h] [rbp-68h]
  __m128i v28; // [rsp+60h] [rbp-50h] BYREF
  __int64 v29; // [rsp+70h] [rbp-40h]
  unsigned __int64 v30; // [rsp+78h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v23 = (__m128i)0x8000000000000000LL;
  v24 = 0;
  if ( (unsigned __int8)sub_945B0(a2, &v24, 73) )
  {
LABEL_6:
    v4.m128i_i64[0] = sub_951C0(a2, &v24);
    goto LABEL_7;
  }
  if ( (*(_QWORD *)(a2 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a2 + 224) == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
    goto LABEL_6;
  }
  v4.m128i_i64[0] = sub_5C3E0(a1[1], 0, a2 + 224);
LABEL_7:
  v23 = v4;
  v4.m128i_i32[2] = v4.m128i_i32[0];
  v4.m128i_i8[8] = v4.m128i_i64[0] != -1 && (v4.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0;
  v5 = v4.m128i_u32[2];
  if ( v4.m128i_i8[8] )
  {
    if ( a3 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(*a1 + 32LL);
      if ( v7 == sub_50480 )
      {
        v8 = (__int64 *)a1[2];
        v29 = 0;
        v28 = 0;
        v5 = sub_4F650(v8, a2, &v23, (__int64)&v28);
        if ( (_BYTE)v5 )
        {
          v9 = (size_t *)a1[2];
          v10 = a1[3];
          *(_QWORD *)&v27 = 0;
          dest = (void *)0x8000000000000000LL;
          sub_2FD40(v10, (__int64)(v9 + 3), *v9, nullptr, "rtype", (const __m128i *)&dest, &v28, 0, 0, 0);
        }
      }
      else
      {
        v5 = v7((__int64)a1, &v23, a2);
      }
    }
    else
    {
      dest = nullptr;
      v27 = 0;
      v11 = (const char *)sub_986B0(a2);
      v12 = v11;
      if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
      {
        v20 = dest;
        v21 = v13 + 1;
        if ( *((_QWORD *)&v27 + 1) < v13 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v21, 1);
          v20 = dest;
        }
        *(_QWORD *)&v27 = v21;
        memmove(v20, v12, v14);
        *((_BYTE *)dest + v14) = 0;
      }
      else
      {
        *(_QWORD *)&v27 = 0;
      }
      v15 = (const char *)dest;
      v16 = *(__int64 (__fastcall **)(__int64, const char *, const __m128i *, __int64))(*a1 + 40LL);
      if ( v16 == sub_503D0 )
      {
        v17 = (__int64 *)a1[2];
        v29 = 0;
        v28 = 0;
        v5 = sub_4F650(v17, a2, &v23, (__int64)&v28);
        if ( (_BYTE)v5 )
        {
          v18 = (size_t *)a1[2];
          v19 = a1[3];
          v25 = (__m128i)0x8000000000000000LL;
          sub_2FD40(v19, (__int64)(v18 + 3), *v18, nullptr, v15, &v25, &v28, 0, 0, 0);
        }
      }
      else
      {
        v5 = v16((__int64)a1, (const char *)dest, &v23, a2);
      }
      if ( dest )
      {
        *(_QWORD *)&v27 = 0;
        qfree(dest);
      }
    }
  }
  sub_84A10(&v24);
  return v5;
}
