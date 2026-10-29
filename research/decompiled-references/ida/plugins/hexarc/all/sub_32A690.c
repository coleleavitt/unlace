__int64 __fastcall sub_32A690(__int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // eax
  int v5; // edx
  __int64 v7; // rax
  __int64 v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 1504) + 168LL))(
           *(_QWORD *)(a3 + 1504),
           *(unsigned int *)(a1 + 24));
    if ( v4 != -1 )
    {
      v5 = *(_DWORD *)(a1 + 32);
      v8[0] = 0;
      v8[1] = 0;
      sub_5D900(v8, v4, v5);
      v9 = nullptr;
      v10 = 0;
      sub_5DD00(a2, v8);
      sub_30F930(a2 + 2, &v9);
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
      qfree();
      return 1;
    }
  }
  else
  {
    v7 = sub_1C8EB0(a3, *(_QWORD *)(a1 + 24));
    if ( v7 >= 0 )
    {
      sub_11C460(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a3 + 1440) + v7),
        *(int *)(a1 + 32));
      return 1;
    }
  }
  return 0;
}

