__int64 __fastcall sub_5380(int a1)
{
  __int64 v1; // rbx
  size_t v2; // rbp
  __int64 name_ea; // rax
  __int64 v4; // rbx
  void *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  void *v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !a1 || a1 >= (unsigned __int64)xmmword_14508 )
    sub_52E0("get_omf_extdef");
  v1 = qword_14500 + 59LL * a1;
  v8 = nullptr;
  v9 = 0;
  v2 = *(_QWORD *)(v1 + 8);
  if ( v2 )
  {
    v6 = (void *)qalloc_or_throw(*(_QWORD *)(v1 + 8));
    *((_QWORD *)&v9 + 1) = v2;
    v8 = v6;
    memcpy(v6, *(const void **)v1, v2);
    *(_QWORD *)&v9 = v2;
  }
  if ( (unsigned __int8)validate_name(&v8, 6, 1) )
  {
    netnode_check(&v7, v8, 0, 0);
    if ( v7 == -1 )
      name_ea = get_name_ea(-1, v8);
    else
      name_ea = node2ea();
    v4 = name_ea;
  }
  else
  {
    v4 = -1;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v4;
}

