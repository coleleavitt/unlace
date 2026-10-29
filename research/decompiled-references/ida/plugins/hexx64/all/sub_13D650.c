__int64 __fastcall sub_13D650(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r9
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int128 *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  const void *v15; // rbp
  size_t v16; // rax
  size_t v17; // rbx
  __int128 *v18; // rax
  void *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rax
  __m128i v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-68h]
  int v24; // [rsp+68h] [rbp-60h]
  __int128 v25; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_33F180(v22.m128i_i32) && (unsigned int)(v22.m128i_i32[0] - 1) <= 4
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          100,
                          "LicenseManagerAutoSwitchDecompiler",
                          0,
                          0,
                          &callui,
                          v5)
    && (unsigned __int8)sub_33F180(v22.m128i_i32)
    && (unsigned int)(v22.m128i_i32[0] - 1) <= 4 )
  {
    if ( !(unsigned __int8)sub_329DA0((__int64)a1, 0) )
      return 4294967265LL;
    if ( !(unsigned __int8)sub_32A2A0((__int64)a1) )
      return 4294967280LL;
    v6 = (_QWORD *)*a3;
    v7 = a1[3];
    v23 = 0;
    v24 = -1;
    v22 = 0;
    v25 = 0;
    if ( v6 )
    {
      if ( !(unsigned __int8)func_tail_iterator_set() )
      {
LABEL_23:
        if ( v23 )
          lock_func_range();
        return 4294967266LL;
      }
      v8 = (__int128 *)v22.m128i_i64[0];
    }
    else
    {
      v8 = (__int128 *)a3[1];
      v18 = &v8[a3[2]];
      v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v18);
      if ( v8 == v18 )
        return 4294967266LL;
    }
    if ( v8 )
      goto LABEL_13;
    v9 = v23;
    v8 = (__int128 *)v23;
    if ( !v23 )
    {
      v8 = &v25;
      goto LABEL_13;
    }
LABEL_10:
    if ( v24 >= 0 && v24 < *(_DWORD *)(v9 + 128) )
      v8 = (__int128 *)(*(_QWORD *)(v9 + 136) + 16LL * v24);
LABEL_13:
    while ( *(_QWORD *)v8 < *((_QWORD *)v8 + 1)
         && !(unsigned __int8)rangeset_t_has_common()
         && (unsigned __int8)rangeset_t_add()
         && (get_flags_ex() & 0x600) != 0x200 )
    {
      v10 = 0x100000000LL;
      if ( *(_DWORD *)(v7 + 24) == 8 )
        v10 = -1;
      if ( *((_QWORD *)v8 + 1) != v10 && (get_flags_ex() & 0x600) == 0x200 )
        break;
      v11 = v22.m128i_i64[0];
      if ( !v22.m128i_i64[0] )
      {
        v9 = v23;
        if ( v23 && v24 + 1 < *(_DWORD *)(v23 + 128) )
        {
          ++v24;
          v8 = (__int128 *)v23;
          goto LABEL_10;
        }
        goto LABEL_23;
      }
      v8 = (__int128 *)(v22.m128i_i64[0] + 16);
      v22.m128i_i64[0] += 16;
      if ( v11 + 16 == v22.m128i_i64[1] )
        goto LABEL_23;
    }
    goto LABEL_23;
  }
  v13 = (_QWORD *)*a3;
  if ( !*a3 )
    v13 = (_QWORD *)a3[1];
  a1[51] = *v13;
  v14 = a1[14];
  v15 = *(const void **)(v14 + 24);
  if ( v15 && (v16 = strlen(*(const char **)(v14 + 24)), (v17 = v16) != 0) )
  {
    v19 = (void *)a1[53];
    v20 = v16 + 1;
    if ( a1[55] < v16 + 1 )
    {
      v21 = qvector_reserve((__int64)(a1 + 53), a1[53], v20, 1);
      a1[53] = v21;
      v19 = (void *)v21;
    }
    a1[54] = v20;
    memmove(v19, v15, v17);
    *(_BYTE *)(a1[53] + v17) = 0;
  }
  else
  {
    a1[54] = 0;
  }
  return 4294967273LL;
}

