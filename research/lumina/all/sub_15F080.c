unsigned __int64 __fastcall sub_15F080(__m128i *a1, signed int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  char *v7; // r13
  __int64 v8; // rbp
  _QWORD *v9; // r12
  _BYTE *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-80h]
  unsigned int v20; // [rsp+28h] [rbp-60h]
  unsigned int v21; // [rsp+2Ch] [rbp-5Ch]
  int v22; // [rsp+34h] [rbp-54h]
  unsigned int v23; // [rsp+38h] [rbp-50h]
  char v24; // [rsp+44h] [rbp-44h]
  unsigned __int8 v25; // [rsp+45h] [rbp-43h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v6 = (__int64 *)a1[1].m128i_i64[0];
  v26 = __readfsqword(0x28u);
  v17 = a1->m128i_i64[0];
  if ( !v6 )
  {
    v6 = sub_E2050(a1->m128i_i64);
    if ( !v6 )
      return __readfsqword(0x28u) ^ v26;
  }
  v7 = "sqlite_stat1";
  v20 = a3;
  v8 = 1;
  v9 = (_QWORD *)(32LL * a2 + *(_QWORD *)(v17 + 32));
  while ( 1 )
  {
    v10 = (_BYTE *)*v9;
    *(&v24 + v8) = 0;
    v11 = sub_CA640(v17, (unsigned __int8 *)v7, v10);
    if ( v11 )
      break;
    if ( (_DWORD)v8 != 1 )
      goto LABEL_8;
    sub_15B750(a1, "CREATE TABLE %Q.%s(%s)", *v9, v7, "tbl,idx,stat");
    v16 = a1[7].m128i_u32[3];
    v25 = 16;
    v23 = v16;
LABEL_9:
    v13 = v8++;
    v7 = off_23A620[2 * v13];
  }
  v12 = *(_DWORD *)(v11 + 40);
  *(&v22 + v8) = v12;
  if ( a2 != 1 )
  {
    v21 = v12;
    sub_E30E0((__int64)a1, a2, v12, 1u, (__int64)v7);
    v12 = v21;
  }
  if ( a4 )
    sub_15B750(a1, "DELETE FROM %Q.%s WHERE %s=%Q", *v9, v7, a5);
  else
    sub_E1710((__int64)v6, 145, v12, a2, 0);
LABEL_8:
  if ( v8 != 3 )
    goto LABEL_9;
  sub_E1770(v6, 113, v20, v23, a2, 3);
  v14 = *((int *)v6 + 36);
  if ( (int)v14 > 0 )
    *(_WORD *)(v6[17] + 24 * v14 - 22) = v25;
  return __readfsqword(0x28u) ^ v26;
}
