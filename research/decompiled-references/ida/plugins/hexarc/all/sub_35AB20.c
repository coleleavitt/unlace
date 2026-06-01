__int64 __fastcall sub_35AB20(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  unsigned __int64 v11; // [rsp+8h] [rbp-60h]
  unsigned __int64 v12; // [rsp+10h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-40h]

  v3 = 0;
  if ( (*(_BYTE *)(*a1 + 1337LL) & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 40) + *(_QWORD *)(a3 + 32);
    v11 = _mm_loadh_ps((const double *)(a3 + 32)).m128_u64[1];
    do
    {
      v13 = unpack_dd();
      if ( v13 )
      {
        v6 = unpack_dd();
        v7 = v11;
        if ( !__CFADD__(v6, v11) && v12 >= v6 + v11 )
        {
          v11 += v6;
          if ( v7 )
            continue;
        }
      }
      v3 = 0;
      goto LABEL_10;
    }
    while ( v13 != 2 );
    v3 = unpack_dq();
LABEL_10:
    v8 = a1 + 1;
    v9 = sub_358D70((__int64)(a1 + 1), a2);
    if ( v9 < 0 )
      sub_356090(v8);
    v10 = a1[23] + 120LL * v9;
    *(_DWORD *)(v10 + 100) = 3;
    sub_652F0((__int64 *)(v10 + 8));
  }
  return v3;
}

