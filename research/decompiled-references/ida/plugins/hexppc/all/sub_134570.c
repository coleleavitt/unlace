unsigned __int64 __fastcall sub_134570(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 || (unsigned __int64)(a2 + a3) > 0xFFFF )
  {
    if ( !under_debugger )
      sub_37EEE0(50420);
LABEL_9:
    BUG();
  }
  v10 = a3;
  v9 = a2;
  if ( (unsigned __int8)sub_313CF0(a1 + 1160, &v9, 0) )
  {
    if ( !under_debugger )
      sub_37EEE0(51266);
    goto LABEL_9;
  }
  v9 = a2;
  v10 = a3;
  sub_312A30(a1 + 1160, &v9, v4, v5, v6, v7);
  return v11 - __readfsqword(0x28u);
}

