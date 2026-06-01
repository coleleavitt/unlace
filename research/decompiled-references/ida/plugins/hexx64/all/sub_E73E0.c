char *__fastcall sub_E73E0(unsigned __int64 a1, unsigned __int64 a2, char *a3)
{
  char v3; // al
  char *result; // rax
  __int64 v7; // rdi
  int v8; // edx
  _DWORD *v9; // rbp
  __m128 v10; // [rsp+0h] [rbp-58h] BYREF
  int *v11; // [rsp+10h] [rbp-48h]
  char *v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v3 = *a3;
  v16 = __readfsqword(0x28u);
  if ( v3 == 3 || v3 == 10 && **((_BYTE **)a3 + 1) == 6 )
    return a3;
  if ( (unsigned __int8)sub_11FD80(a3, nullptr, 1u) )
    return a3;
  v7 = *(_QWORD *)(a1 + 64);
  v10.m128_u64[0] = a1;
  v10.m128_u64[1] = a2;
  v11 = nullptr;
  v12 = a3;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  sub_12A160(v7, &v10, 1);
  if ( !v11 )
    return a3;
  result = v12;
  if ( *v12 == 4 )
    return a3;
  v8 = *v11;
  if ( *v11 != 4 )
  {
    if ( v8 == 67 )
    {
      if ( v11[17] != v11[9] )
        return a3;
    }
    else if ( (unsigned int)(v8 - 8) > 1 )
    {
      if ( v8 == 12 && *((_BYTE *)v11 + 32) == 4 )
      {
        v9 = *((_DWORD **)v11 + 5);
        if ( *v9 == 13 )
        {
          if ( (unsigned __int8)sub_12EA80(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                                  (const __m128i *)v10.m128_u64[0],
                                  v10.m128_i64[1],
                                  (__int64)(v9 + 12),
                                  v10.m128_i64[1],
                                  (__int64)(v11 + 12),
                                  0) )
            return (char *)(v9 + 8);
        }
      }
      return a3;
    }
  }
  if ( v15 != 1 && (v15 != 2 || *((_DWORD *)v12 + 1) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL)) )
    return a3;
  return result;
}

