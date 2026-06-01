__int64 __fastcall sub_28AA0(__int64 a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rsi
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h]
  __m128i v10; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v10.m128i_i64[0] = (__int64)off_62EA8;
  v10.m128i_i64[1] = 0;
  v11 = 0;
  v12 = 0;
  sub_27280(a1, &v10, a3, a4);
  result = v12;
  if ( v12 )
  {
    v8 = *(_QWORD *)(a1 + 448);
    if ( v8 != -1
      || !*(_BYTE *)(a1 + 440) && (v9 = v12, sub_28840(a1), v8 = *(_QWORD *)(a1 + 448), result = v9, v8 != -1) )
    {
      result += v8;
    }
    return result;
  }
  v5 = *(_DWORD *)(a1 + 168);
  if ( v5 == 255 )
    goto LABEL_27;
  if ( v5 <= 255 )
  {
    if ( v5 == 12 )
    {
      v6 = 68;
      goto LABEL_11;
    }
    if ( v5 != 18 )
    {
      v6 = 48;
      if ( v5 != 7 )
        return -1;
      goto LABEL_11;
    }
    goto LABEL_27;
  }
  if ( v5 == 16777228 )
    goto LABEL_21;
  if ( v5 > 16777228 )
  {
    if ( v5 != 16777234 )
    {
      if ( v5 != 33554444 )
        return -1;
LABEL_21:
      v7 = (_DWORD *)(v10.m128i_i64[1] + 264);
      if ( *(_BYTE *)(a1 + 161) )
        goto LABEL_12;
LABEL_22:
      if ( (unsigned __int64)v7 >= v11 )
        return -1;
      result = -1;
      if ( v11 - (unsigned __int64)v7 > 3 )
      {
        LODWORD(result) = *v7;
        if ( *(_BYTE *)(a1 + 160) )
          LODWORD(result) = _byteswap_ulong(result);
        return (unsigned int)result;
      }
      return result;
    }
LABEL_27:
    v6 = 8;
    goto LABEL_11;
  }
  v6 = 136;
  if ( v5 != 16777223 )
    return -1;
LABEL_11:
  v7 = (_DWORD *)(v6 + v10.m128i_i64[1]);
  if ( !*(_BYTE *)(a1 + 161) )
    goto LABEL_22;
LABEL_12:
  if ( (unsigned __int64)v7 >= v11 )
    return -1;
  result = -1;
  if ( v11 - (unsigned __int64)v7 > 7 )
  {
    result = *(_QWORD *)v7;
    if ( *(_BYTE *)(a1 + 160) )
      return swap64();
  }
  return result;
}

