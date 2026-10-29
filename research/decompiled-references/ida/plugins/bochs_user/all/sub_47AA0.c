__int64 __fastcall sub_47AA0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned int v5; // ebp
  __int64 v6; // rax
  struct _Unwind_Exception *v7; // rbx
  __int128 v8; // [rsp+48h] [rbp-560h]
  __int128 v9; // [rsp+58h] [rbp-550h]
  _QWORD v10[157]; // [rsp+70h] [rbp-538h] BYREF
  int v11; // [rsp+558h] [rbp-50h]
  unsigned __int64 v12; // [rsp+568h] [rbp-40h]

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 5536);
  v12 = __readfsqword(0x28u);
  if ( *(_QWORD *)((char *)a2 + 140) != v3 )
    return result;
  if ( (unsigned int)sub_25D60(*(_QWORD *)(a1 + 4832), 0) || (unsigned int)sub_27640(*(_QWORD *)(a1 + 4832), a2) )
  {
    sub_45250(a1);
    return 1;
  }
  v4 = (__int64)(a2 + 1);
  memset(v10, 0, sizeof(v10));
  v11 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) != 2 )
  {
    if ( (unsigned __int8)sub_45310(a1, (__int64)v10, 824, v4) )
    {
      v5 = HIDWORD(v10[99]);
      goto LABEL_9;
    }
LABEL_15:
    sub_479E0(a1);
    return 1;
  }
  if ( !(unsigned __int8)sub_45310(a1, (__int64)v10, 1260, v4) )
    goto LABEL_15;
  v5 = v10[154];
LABEL_9:
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 4824) + 2616LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 4824) + 2616LL),
         v5);
  if ( !v6 || (*(_BYTE *)(v6 + 4) & 1) != 0 )
  {
    v8 = 0;
    v9 = 0;
    set_debug_event_code();
    v7 = (struct _Unwind_Exception *)sub_42050();
    free_debug_event();
    _Unwind_Resume(v7);
  }
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 4824) + 2609LL);
}

