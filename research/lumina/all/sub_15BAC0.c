void __fastcall sub_15BAC0(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  signed int v5; // r12d
  __int64 v6; // r8
  unsigned __int8 *v7; // r9
  __int64 *v8; // rax
  const char *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 *v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9

  v3 = a2[5];
  v4 = a1->m128i_i64[0];
  if ( v3 )
  {
    v5 = sub_CFB20(a1->m128i_i64[0], v3);
    v8 = (__int64 *)sub_C2AB0(v6, v7, nullptr)[2];
    if ( v8 )
    {
      v9 = "sqlite_temp_master";
      v10 = 2 * (unsigned int)(v5 != 1) + 14;
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL * v5);
      if ( v5 != 1 )
        v9 = "sqlite_master";
LABEL_5:
      if ( (unsigned int)sub_E4020((__int64)a1, v10, *a2, *v8, v11)
        || (unsigned int)sub_E4020((__int64)a1, 9, (__int64)v9, 0, v11) )
      {
        return;
      }
    }
  }
  else
  {
    v8 = (__int64 *)sub_C2AB0(a2[6] + 8, (unsigned __int8 *)a2[1], nullptr)[2];
    v5 = -32768;
    if ( v8 )
    {
      v5 = -32768;
      v9 = "sqlite_master";
      v10 = 16;
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 32) - 0x100000LL);
      goto LABEL_5;
    }
  }
  v12 = (__int64 *)a1[1].m128i_i64[0];
  if ( v12 || (v12 = sub_E2050(a1->m128i_i64)) != nullptr )
  {
    sub_15B750(
      a1,
      "DELETE FROM %Q.sqlite_master WHERE name=%Q AND type='trigger'",
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL * v5),
      *a2);
    sub_E2460(a1->m128i_i64[0], a1[1].m128i_i64[0], v5);
    v13 = *a2;
    v14 = sub_E1710((__int64)v12, 154, v5, 0, 0);
    sub_DCC50((__int64)v12, v14, v13, 0, v15, v16);
  }
}
