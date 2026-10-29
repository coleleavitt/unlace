__int64 __fastcall sub_1F460(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _UNKNOWN **v15; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h]
  _BYTE *v17; // [rsp+10h] [rbp-B8h]
  __int64 v18; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+28h] [rbp-A0h]
  __int64 v20; // [rsp+40h] [rbp-88h] BYREF
  __int128 v21; // [rsp+48h] [rbp-80h]
  _BYTE v22[8]; // [rsp+60h] [rbp-68h] BYREF
  int v23; // [rsp+68h] [rbp-60h] BYREF
  void *v24; // [rsp+70h] [rbp-58h]
  int *v25; // [rsp+78h] [rbp-50h]
  int *v26; // [rsp+80h] [rbp-48h]
  __int64 v27; // [rsp+88h] [rbp-40h]
  unsigned __int64 v28; // [rsp+98h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 2034) == 0;
  v28 = __readfsqword(0x28u);
  v23 = 0;
  v25 = &v23;
  v26 = &v23;
  v24 = nullptr;
  v27 = 0;
  v15 = &off_8B8B8;
  v16 = a1;
  v17 = v22;
  if ( !v1 )
  {
    if ( *(_DWORD *)(a1 + 1816) <= 0xEu )
    {
      if ( (unsigned __int8)sub_1F0E0(a1, *(_DWORD *)(a1 + 1820), *(_QWORD *)(a1 + 1824), (__int64)&v15) )
        goto LABEL_4;
LABEL_15:
      sub_65BB0(a1, (unsigned int)"WARNING: update_all_images(): parse_dyld_info() failed\n", v2, v3, v4, v5);
      v6 = 0;
      goto LABEL_7;
    }
    v19 = 0;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    sub_15620(&v20);
    if ( (unsigned __int8)sub_1E310(a1, &v18, (int)&v20, v8, v9, v10) )
    {
      if ( (unsigned __int8)sub_1B100(&v18, &v15, 0.0) )
      {
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree();
        }
        goto LABEL_4;
      }
      sub_65BB0(
        a1,
        (unsigned int)"WARNING: update_all_images(): parsing of \"jGetLoadedDynamicLibrariesInfos:\" failed\n",
        v2,
        v3,
        v4,
        v5);
    }
    else
    {
      sub_65BB0(
        a1,
        (unsigned int)"WARNING: update_all_images(): \"jGetLoadedDynamicLibrariesInfos:\" request failed\n",
        v11,
        v12,
        v13,
        v14);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      v6 = 0;
      qfree();
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  if ( !(unsigned __int8)sub_1E490(a1, *(_DWORD *)(a1 + 1820), *(_QWORD *)(a1 + 1824), (__int64)&v15) )
    goto LABEL_15;
LABEL_4:
  if ( v27 )
  {
    sub_4ECE0(a1, v22, v2, v3, v4, v5, v15, v16, v17);
    v6 = 1;
    goto LABEL_7;
  }
LABEL_5:
  v6 = 0;
LABEL_7:
  sub_1AB70(v24);
  return v6;
}

