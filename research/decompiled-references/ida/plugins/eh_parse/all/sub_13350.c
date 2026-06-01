bool __fastcall sub_13350(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v6; // rbp
  bool result; // al
  __int64 named_type_tid; // rax
  __int64 v9; // rax
  const char *v10; // [rsp+0h] [rbp-40h]

  if ( (unsigned int)a3 > 0x11 )
    return 0;
  v3 = a3;
  v4 = a3 + 18LL;
  v6 = *(_QWORD *)(a1 + 8 * v4 + 8);
  if ( v6 )
  {
LABEL_3:
    result = 0;
    if ( v6 == -1 )
      return result;
    return get_strid(a2) != v6;
  }
  v10 = off_2E620[2 * a3];
  named_type_tid = get_named_type_tid(v10);
  v6 = named_type_tid;
  if ( named_type_tid == -1 || a3 == 10 )
  {
    v9 = sub_12E90(a1, v10, a3);
    *(_QWORD *)(a1 + 8 * v3 + 152) = v9;
    v6 = v9;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 8 * v4 + 8) = named_type_tid;
  return get_strid(a2) != v6;
}

