bool __fastcall sub_64110(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, __int64 *); // rax
  unsigned int v4; // edx
  int i; // eax
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 32) || strcmp(*(const char **)(a2 + 24), "this") )
    return 0;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL);
  if ( v3 != sub_5F110 )
    goto LABEL_12;
  v4 = *(_DWORD *)(a2 + 64);
  if ( v4 == -1 )
    goto LABEL_10;
  for ( i = sub_55B00(*(_QWORD **)(a2 + 8), &v6, v4); i; i = v3(a2, &v6) )
  {
LABEL_10:
    if ( under_debugger )
      BUG();
    v3 = (__int64 (__fastcall *)(__int64, __int64 *))interr(30562);
LABEL_12:
    ;
  }
  return !(*(unsigned int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 248LL))(v6, v7)
      && *(_WORD *)(v7[0] + 84LL) == 4105;
}

