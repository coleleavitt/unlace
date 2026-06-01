void __fastcall sub_13520(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, char a5)
{
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 named_type_tid; // rax
  const char *v12; // [rsp+0h] [rbp-50h]
  __int64 v13; // [rsp+8h] [rbp-48h]
  __int64 v14; // [rsp+10h] [rbp-40h]

  if ( (unsigned int)a3 > 0x11 )
    return;
  v7 = a3;
  v9 = a3 + 18LL;
  v10 = *(_QWORD *)(a1 + 8 * v9 + 8);
  if ( v10 )
    goto LABEL_3;
  v13 = v7;
  v14 = v9;
  v12 = off_2E620[2 * v7];
  named_type_tid = get_named_type_tid();
  v10 = named_type_tid;
  if ( named_type_tid == -1 || a3 == 10 )
  {
    v10 = sub_12E90(a1, v12, a3);
    *(_QWORD *)(a1 + 8 * v13 + 152) = v10;
LABEL_3:
    if ( v10 == -1 )
      return;
    goto LABEL_4;
  }
  *(_QWORD *)(a1 + 8 * v14 + 8) = named_type_tid;
LABEL_4:
  if ( get_strid() == v10 )
  {
    if ( get_item_end() - a2 >= a4 )
      return;
  }
  else if ( !(unsigned __int8)sub_E580(a1, a2) )
  {
    return;
  }
  if ( (a5 & 1) != 0 )
    sub_111C0(a1, a2, a4);
  create_data();
}

