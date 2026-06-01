__int64 __fastcall sub_4230(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  __int64 that; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 max_strlit_length; // rax
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+10h] [rbp-38h]

  v6 = *a2;
  HIDWORD(v16) = *(_DWORD *)(a1 + 208) >> 3;
  if ( *a2 >= a2[1] )
    return 1;
  v7 = a2;
  v8 = 0;
  while ( !(unsigned __int8)callui(27, a2, a3, a4, a5, a6, v15, v16, v17) )
  {
    if ( v8 )
      goto LABEL_4;
    max_strlit_length = get_max_strlit_length(v6, 0, 7);
    if ( HIDWORD(v16) < max_strlit_length )
    {
      v8 = max_strlit_length;
LABEL_4:
      that = next_that(v6, v8 + v6, sub_29A0, 0);
      a2 = (unsigned __int64 *)v6;
      v10 = that - v6;
      if ( that == -1 )
        v10 = v8;
      v11 = sub_3DD0(a1, v6, v10);
      a3 = v8 - v11;
      v6 += v11;
      v12 = v11 < v8;
      v8 = 0;
      if ( v12 )
        v8 = a3;
      if ( v6 >= v7[1] )
        return 1;
    }
    else
    {
      a2 = (unsigned __int64 *)v7[1];
      v6 = next_that(v6, a2, sub_29A0, 0);
      if ( v6 >= v7[1] )
        return 1;
    }
  }
  return 0;
}

