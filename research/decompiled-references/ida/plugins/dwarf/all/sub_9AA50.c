char __fastcall sub_9AA50(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  unsigned __int16 v4; // ax
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = sub_872B0((__int64)a1, a2);
  v10 = 0;
  if ( v4 != 32 )
  {
    if ( v4 > 0x20u )
    {
      if ( v4 != 7968 )
        return 0;
    }
    else if ( (unsigned __int16)(v4 - 16) > 5u )
    {
      return 0;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(a1[32] + 48LL))(*(_QWORD *)(*a1 + 24LL));
  v7 = sub_94EA0(*(_QWORD **)(*a1 + 16LL), *(_QWORD *)(*a1 + 24LL), a2, v6 != 0);
  v10 = v8;
  v9 = v7;
  if ( (v7 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v7 == -1 )
    return 0;
  return sub_98E20((__int64 *)&v9, a3);
}

