void __fastcall sub_15F590(__m128i *a1, _DWORD *a2)
{
  int *v2; // r15
  __int64 v3; // rbp
  __m128i *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r12
  unsigned __int8 *v15; // r13
  __int64 *v16; // r14
  __int64 v17; // rax
  _QWORD *i; // rcx
  __int64 v19; // r8
  unsigned __int8 *v20; // r11
  unsigned __int8 *v21; // rsi
  int v22; // eax
  int v23; // eax
  __int64 *v24; // rax
  int v25; // [rsp+4h] [rbp-54h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+10h] [rbp-48h]

  v2 = (int *)a1[21].m128i_i64[0];
  if ( !v2 )
    return;
  v3 = a1->m128i_i64[0];
  sub_E42C0((__int64)a1);
  a1[23].m128i_i64[0] = 0;
  if ( v2[16] <= 0 )
    return;
  if ( !*(_BYTE *)(v3 + 197) )
  {
    v4 = (__m128i *)a1[10].m128i_i64[0];
    if ( !v4 )
      v4 = a1;
    v4[2].m128i_i8[1] = 1;
    if ( a2 )
      a1[16].m128i_i32[2] = a2[2] + *a2 - a1[16].m128i_i32[0];
    LODWORD(v5) = -32768;
    v6 = sub_E8280(v3, "CREATE VIRTUAL TABLE %T", &a1[16]);
    v7 = *((_QWORD *)v2 + 12);
    v8 = (_QWORD *)v6;
    v9 = -1048576;
    if ( v7 )
    {
      v5 = (int)sub_CFB20(v3, v7);
      v9 = 32 * v5;
    }
    sub_15B750(
      a1,
      "UPDATE %Q.sqlite_master SET type='table', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d",
      *(_QWORD *)(*(_QWORD *)(v3 + 32) + v9),
      *(_QWORD *)v2,
      *(_QWORD *)v2,
      v8,
      a1[7].m128i_u32[2]);
    v10 = a1[1].m128i_i64[0];
    v11 = v10;
    if ( !v10 )
    {
      v24 = sub_E2050(a1->m128i_i64);
      v11 = a1[1].m128i_i64[0];
      v10 = (__int64)v24;
    }
    sub_E2460(a1->m128i_i64[0], v11, v5);
    sub_E1710(v10, 166, 0, 0, 0);
    v12 = sub_E8280(v3, "name=%Q AND sql=%Q", *(_QWORD *)v2, v8);
    sub_E18F0(v10, v5, v12, 0);
    if ( v8 )
      sub_C9250(v3, v8);
    v13 = a1[3].m128i_i32[2] + 1;
    a1[3].m128i_i32[2] = v13;
    sub_E17B0(v10, v13, *(_QWORD *)v2);
    sub_E1710(v10, 171, v5, v13, 0);
    return;
  }
  v14 = *((_QWORD *)v2 + 12);
  v15 = *(unsigned __int8 **)v2;
  v16 = (__int64 *)sub_C2AB0(v3 + 536, **((unsigned __int8 ***)v2 + 9), nullptr)[2];
  if ( v16 )
  {
    v17 = *v16;
    if ( *v16 )
    {
      if ( *(int *)v17 > 2 && *(_QWORD *)(v17 + 184) )
      {
        v25 = 0;
        if ( *(_QWORD *)v2 )
          v25 = strlen(*(const char **)v2) & 0x3FFFFFFF;
        for ( i = *(_QWORD **)(*((_QWORD *)v2 + 12) + 16LL); i; i = (_QWORD *)*i )
        {
          v19 = i[2];
          if ( !*(_BYTE *)(v19 + 63) && (*(_BYTE *)(v19 + 49) & 0x10) == 0 )
          {
            v20 = *(unsigned __int8 **)v19;
            v21 = *(unsigned __int8 **)v2;
            if ( *(_QWORD *)v19 )
            {
              v26 = i[2];
              if ( v21 )
              {
                v28 = i;
                v22 = sub_CA590(v20, v21, v25);
                i = v28;
                v19 = v26;
                if ( !v22 )
                {
LABEL_29:
                  v29 = v19;
                  if ( v20[v25] == 95 )
                  {
                    v27 = i;
                    v23 = (*(__int64 (__fastcall **)(unsigned __int8 *))(*v16 + 184))(&v20[v25 + 1]);
                    i = v27;
                    if ( v23 )
                      *(_DWORD *)(v29 + 48) |= 0x1000u;
                  }
                }
              }
            }
            else if ( !v21 )
            {
              goto LABEL_29;
            }
          }
        }
      }
    }
  }
  if ( sub_D1F90(v14 + 8, v15, (__int64)v2) )
  {
    if ( !*(_BYTE *)(v3 + 103) && !*(_BYTE *)(v3 + 104) )
      sub_DBE60(v3);
  }
  else
  {
    a1[21].m128i_i64[0] = 0;
  }
}
