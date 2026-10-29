__int64 __fastcall sub_5DEA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 *v8; // rax
  unsigned int v9; // r14d
  const char *v11; // rsi
  unsigned int v12; // ebx
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // [rsp+8h] [rbp-100h]
  __int64 v17[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int128 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+48h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B8h]
  _QWORD *v22; // [rsp+60h] [rbp-A8h]
  __int128 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+98h] [rbp-70h]
  char v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  char v30; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 1u )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(__int64 **)a2;
  v6 = **(_QWORD **)a2;
  v7 = 3 * v3;
  if ( v3 != 1 )
  {
    v8 = v4 + 3;
    if ( v7 != 3 )
    {
      while ( *v8 == v6 )
      {
        v8 += 3;
        if ( &v4[v7] == v8 )
        {
          v9 = 0;
          if ( !(v7 * 8) )
            return v9;
          goto LABEL_24;
        }
      }
      return 0;
    }
  }
  v9 = 0;
  do
  {
LABEL_24:
    v11 = (const char *)v4;
    v17[1] = v6;
    v17[0] = a1;
    v18 = 0;
    v20 = 0;
    v22 = nullptr;
    v24 = 0;
    v26 = 0;
    v28 = 1;
    v29 = 0;
    v30 = 1;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v12 = sub_5D640(v17, (__int64)v4, 10);
    if ( (_BYTE)v12 )
    {
      if ( a3 )
      {
        v11 = nullptr;
        sub_5D950((__int64)v17, 0);
        v15 = j__use_mapping(v6);
        v13 = v22;
        v14 = &v22[v23];
        if ( v14 != v22 )
        {
          do
          {
            v11 = (const char *)v15;
            add_dref(*v13++, v15, 1);
          }
          while ( v14 != v13 );
        }
      }
      else
      {
        v11 = (const char *)sub_5DB20((__int64)v17);
        sub_5D950((__int64)v17, (__int64)v11);
      }
      v9 = v12;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, v11);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24, v11);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22, v11);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, v11);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v11);
    }
    v4 += 3;
  }
  while ( v4 != (__int64 *)(*(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8)) );
  return v9;
}

