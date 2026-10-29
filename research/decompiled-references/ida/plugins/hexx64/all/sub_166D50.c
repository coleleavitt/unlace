__int64 __fastcall sub_166D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r13
  char v7; // al
  char v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  int *v14; // rax
  int v15; // r12d
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 i; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 64);
  v23 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = 0;
  v7 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 4 )
  {
    v14 = *(int **)(a1 + 32);
    *(_BYTE *)(a1 + 40) = 1;
    if ( !(unsigned __int8)sub_154D70(a2, *v14, v6 != 0, a4) || (++*(_DWORD *)(a1 + 76), *(_BYTE *)a2 == 4) )
      *(_DWORD *)(a1 + 76) += sub_15BC70(
                                *(unsigned int **)(a2 + 8),
                                *(unsigned __int8 **)(a1 + 48),
                                *(_QWORD *)(a1 + 16),
                                *(_QWORD *)(a1 + 24),
                                *(int ***)(a1 + 32),
                                *(__m128 ***)(a1 + 56),
                                a5,
                                a6,
                                *(_DWORD *)(a1 + 72));
    return 0;
  }
  v8 = a4;
  if ( v7 == 14 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_123A40((__int64)v22, *(unsigned __int8 **)(a2 + 8), a3, a4);
      if ( (unsigned __int8)sub_14EFD0(
                              *(_OWORD *)(a1 + 16),
                              (__int64)v22,
                              *(_QWORD *)(a2 + 8),
                              *(_QWORD *)(a2 + 8) + 16LL,
                              v8,
                              a5) )
      {
        v13 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)v13 != 62
          || sub_31B590((__int64)v22, *(_QWORD *)(a1 + 48), *(_QWORD *)(v13 + 24), v10, v11, v12) )
        {
          sub_11CA10((char *)a2, v22);
          ++*(_DWORD *)(a1 + 76);
          sub_11CDA0((__int64)v22);
          return 0;
        }
      }
      sub_11CDA0((__int64)v22);
    }
    if ( (unsigned int)(**(_DWORD **)(a1 + 32) - 10) > 1 )
    {
      *(_QWORD *)(a1 + 64) = a2;
      result = sub_11E9B0(*(_QWORD *)(a2 + 8), a1, 0, v8, *(double *)a5.m128i_i64);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(a1 + 64) = a2;
        result = sub_11E9B0(*(_QWORD *)(a2 + 8) + 16LL, a1, 0, v8, *(double *)a5.m128i_i64);
      }
      *(_QWORD *)(a1 + 64) = v6;
      *(_BYTE *)(a1 + 40) = 1;
      return result;
    }
    return 0;
  }
  if ( v7 != 8 )
  {
    if ( v7 == 6 && !(_BYTE)a4 )
    {
      if ( (unsigned __int8)sub_155000(a2, *(_QWORD *)(a1 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a5) )
        ++*(_DWORD *)(a1 + 76);
    }
    return 0;
  }
  v15 = *(_DWORD *)(a1 + 72);
  if ( (v15 & 1) != 0 )
    return 0;
  v16 = *(_QWORD *)(a2 + 8);
  v17 = *(_DWORD *)(v16 + 284);
  if ( v17 > 5 )
  {
    if ( v17 - 34 <= 1 )
      goto LABEL_26;
    return 0;
  }
  if ( v17 <= 1 )
    return 0;
LABEL_26:
  if ( *(_QWORD *)(v16 + 32) != 3 )
    return 0;
  v18 = *(_QWORD *)(v16 + 24);
  if ( *(_BYTE *)(v18 + 160) != 4 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v20 = v18 + 80 * i;
    if ( i == 2 )
      break;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, double))(*(_QWORD *)a1 + 16LL))(
               a1,
               v20,
               v20 + 24,
               0,
               *(double *)a5.m128i_i64);
    *(_DWORD *)(a1 + 72) = v15;
    if ( (_DWORD)result )
      return result;
    *(_BYTE *)(a1 + 40) = 1;
    v18 = *(_QWORD *)(v16 + 24);
  }
  v21 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 72) |= 1u;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, double))(v21 + 16))(
             a1,
             v20,
             v20 + 24,
             0,
             *(double *)a5.m128i_i64);
  *(_DWORD *)(a1 + 72) = v15;
  if ( !(_DWORD)result )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  return result;
}

