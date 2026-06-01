__int64 __fastcall sub_30FF0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rdx
  __int64 v3; // rbp
  __int64 (*v4)(void); // rax
  __int64 v5; // rax

  v1 = *a1;
  v2 = *(__int64 (**)(void))(*a1 + 56LL);
  if ( (char *)v2 == (char *)sub_306E0 )
  {
    v3 = a1[6];
  }
  else
  {
    v3 = v2();
    v1 = *a1;
  }
  v4 = *(__int64 (**)(void))(v1 + 64);
  if ( (char *)v4 == (char *)sub_306F0 )
    v5 = a1[7];
  else
    v5 = v4();
  if ( v3 != -1 && v5 != -1 )
    rangeset_t_add();
  return 1;
}

