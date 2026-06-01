char __fastcall sub_98CE0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  char *v10; // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[28];
  v11[1] = __readfsqword(0x28u);
  if ( v2 == -1 || (v2 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
  }
  v3 = *a1;
  v4 = a1;
  v5 = *(_QWORD *)(*a1 + 16LL);
  if ( *(_QWORD *)(v5 + 344) )
  {
    if ( !rangeset_t_find_range(v5 + 336) )
      return 0;
    v3 = *v4;
  }
  v6 = *a2;
  v7 = *(_QWORD *)(v3 + 24);
  v11[0] = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(v4[32] + 32LL))(v7, v6 + 24, v11);
  if ( v8 )
  {
    if ( v8 != 1 )
      return 0;
    v10 = sub_81C40((__int64)v4);
    sub_943B0((_BYTE *)(*(_QWORD *)(*v4 + 16LL) + 329LL), (__int64)"Error loading child for DIE %s\n", v10);
    return 0;
  }
  else
  {
    *(_QWORD *)(*a2 + 16) = *(_QWORD *)(*v4 + 16LL);
    return sub_98B70(a2);
  }
}

