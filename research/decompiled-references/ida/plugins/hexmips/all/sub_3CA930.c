__int64 __fastcall sub_3CA930(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v5; // rax
  int v7; // r15d
  int v8; // r14d
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // r11d
  __int64 v16; // rdi
  char v17; // si
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r11d
  int v21; // [rsp+0h] [rbp-7Ch]
  __int64 v22; // [rsp+4h] [rbp-78h]
  __int64 v23; // [rsp+4h] [rbp-78h]
  __int64 v24; // [rsp+Ch] [rbp-70h]
  __int64 v25; // [rsp+Ch] [rbp-70h]
  __int64 v26; // [rsp+14h] [rbp-68h]
  int v27; // [rsp+1Ch] [rbp-60h]
  int v28; // [rsp+20h] [rbp-5Ch]
  __m128i v29; // [rsp+24h] [rbp-58h]

  v5 = (unsigned __int8 *)*a2;
  v29 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
  if ( *a2 >= a3 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *v5;
    v29.m128i_i64[0] = (__int64)(v5 + 1);
    if ( (unsigned __int8)v7 > 9u )
      return 0;
  }
  v21 = unpack_dd();
  v8 = unpack_dd();
  v27 = unpack_dd();
  v9 = v29.m128i_i64[0];
  v10 = unpack_dq();
  if ( v29.m128i_i64[0] < (unsigned __int64)v29.m128i_i64[1] )
  {
    v16 = v29.m128i_i64[0] + 1;
    v17 = *(_BYTE *)v29.m128i_i64[0]++;
    if ( v17 == 1 )
    {
      v24 = v10;
      v22 = unpack_dq();
      v18 = unpack_dq();
      v19 = v24;
      if ( v29.m128i_i64[0] < (unsigned __int64)v29.m128i_i64[1] )
      {
        v20 = *(unsigned __int8 *)v29.m128i_i64[0]++;
        if ( (unsigned __int8)v20 > 0x48u )
          return 0;
      }
      else
      {
        v20 = 0;
      }
      v28 = v20;
      v26 = v18;
      v25 = v22;
      v23 = v19;
      v13 = unpack_dq();
      v9 = v29.m128i_i64[0];
      v10 = v23;
      v12 = v25;
      v11 = v26;
      v14 = v28;
    }
    else
    {
      if ( v17 )
        return 0;
      v9 = v16;
      v11 = -1;
      v12 = -1;
      v13 = -1;
      v14 = 73;
    }
  }
  else
  {
    v11 = -1;
    v12 = -1;
    v13 = -1;
    v14 = 73;
  }
  if ( a3 >= v9 )
  {
    *(_QWORD *)(a1 + 48) = v13;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 24) = v27;
    *(_DWORD *)(a1 + 12) = v7;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = v8;
    *(_DWORD *)(a1 + 28) = v21;
    *(_DWORD *)(a1 + 32) = v14;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(a1 + 56) = v12;
    *(_QWORD *)(a1 + 64) = v11;
    *a2 = v9;
    return 1;
  }
  return 0;
}

