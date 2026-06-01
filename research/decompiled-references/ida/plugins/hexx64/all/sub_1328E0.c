_DWORD *__fastcall sub_1328E0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        _QWORD *a9,
        char a10)
{
  int v10; // r14d
  __int64 v12; // rdx
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  unsigned __int8 v15; // al
  char v16; // r10
  unsigned __int8 v17; // r9
  _DWORD *result; // rax
  char *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  _DWORD *v25; // [rsp+18h] [rbp-70h]
  _DWORD *v26; // [rsp+28h] [rbp-60h]
  unsigned __int8 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v29; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+48h] [rbp-40h]

  v10 = 0;
  v12 = a1[30].m128i_i64[0];
  v25 = a4;
  v13 = a10 & 4;
  v31 = a5 + 32;
  v29 = *(unsigned __int64 **)(v12 + 112);
  v14 = (_DWORD *)(a5 + 32);
  v26 = (_DWORD *)(a5 + 48);
  while ( 1 )
  {
    v15 = *(_BYTE *)v14;
    if ( (a10 & 2) != 0
      && v15 == 4
      && (a4 = *((_DWORD **)v14 + 1), v12 = (unsigned int)(*a4 - 8), (unsigned int)v12 <= 1) )
    {
      v14 = a4 + 8;
      v16 = 1;
    }
    else
    {
      v16 = a10 & 1 | (v15 == 2);
    }
    v17 = v16;
    if ( (a10 & 4) != 0
      && (v27 = v16,
          v19 = (char *)j__qalloc_or_throw(16, v13, v12, (__int64)a4),
          sub_123A40((__int64)v19, (unsigned __int8 *)v14, v20, v21),
          sub_1207E0(v19, v29, 5, *(_QWORD *)(a5 + 24), v14[1], a7),
          v17 = v27,
          v19) )
    {
      v13 = a2;
      v28 = sub_132840(a1, a2, a3, (__int64)v25, (__int64)v19, v27, a7, a8);
      sub_11CDA0((__int64)v19);
      j__qfree((__int64)v19);
      result = (_DWORD *)v28;
    }
    else
    {
      v13 = a2;
      result = (_DWORD *)sub_132840(a1, a2, a3, (__int64)v25, (__int64)v14, v17, a7, a8);
    }
    if ( result )
      break;
    if ( v10 == 1 )
      return result;
    v14 = v26;
    v10 = 1;
  }
  if ( a6 )
    *a6 = (__int64)result;
  if ( a9 )
  {
    v22 = a5 + 48;
    if ( v10 )
      v22 = v31;
    *a9 = v22;
  }
  return v14;
}

