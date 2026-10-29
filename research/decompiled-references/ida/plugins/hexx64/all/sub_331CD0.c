__int64 __fastcall sub_331CD0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  int v5; // eax
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 1504) + 168LL))(
           *(_QWORD *)(a3 + 1504),
           *(unsigned int *)(a1 + 24));
    if ( v5 != -1 )
    {
      v6 = *(_DWORD *)(a1 + 32);
      v11[0] = 0;
      v11[1] = 0;
      sub_63E80(v11, v5, v6, a4);
      v12 = 0;
      v13 = 0;
      sub_64280(a2, v11, 0.0);
      sub_316CB0(a2 + 2, (const void **)&v12, v7, v8);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
      qfree(v11[0]);
      return 1;
    }
  }
  else
  {
    v10 = sub_1CFDD0(a3, *(_QWORD *)(a1 + 24));
    if ( v10 >= 0 )
    {
      sub_122B20(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a3 + 1440) + v10),
        *(int *)(a1 + 32));
      return 1;
    }
  }
  return 0;
}

