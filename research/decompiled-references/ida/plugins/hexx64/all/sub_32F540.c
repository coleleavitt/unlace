__int64 __fastcall sub_32F540(__int64 a1, __int64 a2, __int64 *a3, int a4, double a5)
{
  char v5; // al
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v5 = *(_BYTE *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  if ( v5 == 1 )
  {
    v8 = *(_DWORD *)a1;
    v11[0] = 0;
    v11[1] = 0;
    sub_63E80(v11, v8, a4, a5);
    v12 = 0;
    v13 = 0;
    sub_64280(a3, v11, 0.0);
    sub_316CB0(a3 + 2, (const void **)&v12, v9, v10);
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree(v11[0]);
    return v14 - __readfsqword(0x28u);
  }
  else
  {
    if ( v5 != 5 )
      sub_328990(a5);
    return sub_122B20(a3, *(_QWORD *)a1 + a2, a4);
  }
}

