__int64 __fastcall sub_20E80(__int64 a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // ebp
  __int64 v5; // r13
  int v6; // r12d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // r8d
  int v12; // r9d
  int v14; // r9d
  int v15; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+4h] [rbp-54h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !(unsigned __int8)sub_1DB80(a1, &v15, &v16, &v17) )
    return v19 - __readfsqword(0x28u);
  v4 = v15;
  v5 = v17;
  v6 = v16;
  if ( (unsigned int)(v15 + 1) > 4 )
  {
    sub_65BB0(a1, (unsigned int)"WARNING: handle_dyld_notify: mode: %d\n", v15, v1, v2, v3);
    sub_65BB0(a1, (unsigned int)"handle_dyld_notify(%d, %d, 0x%a)\n", v4, v6, v5, v14);
  }
  else
  {
    sub_65BB0(a1, (unsigned int)"handle_dyld_notify(%s, %d, 0x%a)\n", (unsigned int)off_8BA20[v15 + 1], v16, v17, v3);
    if ( v4 == 3 && v6 == 1 )
    {
      v18[0] = off_8B8E0;
      v18[1] = a1;
      sub_29D40(a1 + 1704, 1, v5, v18);
      return v19 - __readfsqword(0x28u);
    }
  }
  if ( !(unsigned __int8)sub_29930(a1 + 1704) )
    return sub_65BB0(a1, (unsigned int)"WARNING: handle_dyld_notify: dyld.update_infos() failed!!\n", v7, v8, v9, v10);
  sub_34320(a1 + 1704);
  if ( !*(_BYTE *)(a1 + 2035) )
  {
    *(_BYTE *)(a1 + 2035) = sub_1F460(a1);
    return v19 - __readfsqword(0x28u);
  }
  if ( v4 == 2 )
    return sub_1F460(a1);
  else
    return sub_20A20(a1, v4, v6, v5, v11, v12);
}

