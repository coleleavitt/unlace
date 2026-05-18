__int64 __fastcall sub_11E790(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi

  if ( !a1 )
    return 0;
  v1 = a1[4];
  v3 = a1[3];
  v4 = *(_QWORD *)(v1 + 24);
  if ( v4 )
    xmmword_241500(v4);
  sub_C9250(v1, a1);
  v9 = *(_QWORD *)(v1 + 24);
  if ( v9 )
    xmmword_241510(v9, a1, v5);
  return sub_11E660(v3, (__int64)a1, v5, v6, v7, v8);
}
