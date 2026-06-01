__int64 __fastcall sub_53C30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 named_type_tid; // rax

  v2 = *(_QWORD *)(a1 + 5616);
  if ( v2 )
  {
    if ( v2 != -1 )
      goto LABEL_3;
  }
  else
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5616) = named_type_tid;
    if ( named_type_tid != -1 )
      goto LABEL_3;
  }
  *(_QWORD *)(a1 + 5616) = sub_53B40(
                             (__int64)"void *PropType;void *GetProc;void *SetProc;void *StoredProc;int Index;int Default;"
                                      "short NameIndex;char  Name[] __strlit(PASCAL);",
                             "TPropInfo");
LABEL_3:
  v3 = *a2;
  v4 = *a2 + 4;
  v5 = (unsigned __int8)get_byte() + 27LL;
  if ( *(_QWORD *)(a1 + 5616) != -1 )
    create_data();
  *a2 += v5;
  v6 = v3 + 16;
  do
  {
    v7 = sub_52250(v4, 0, 0);
    result = v7 - 1;
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      result = sub_52B00(v7, 1);
    v4 += 4;
  }
  while ( v4 != v6 );
  return result;
}

