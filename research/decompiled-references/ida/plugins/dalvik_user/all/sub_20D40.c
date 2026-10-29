unsigned __int64 __fastcall sub_20D40(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  char v6; // al
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rax
  char v12; // al
  __int64 v13; // [rsp+0h] [rbp-888h] BYREF
  __int64 v14; // [rsp+8h] [rbp-880h] BYREF
  __int64 v15; // [rsp+10h] [rbp-878h] BYREF
  __int128 v16; // [rsp+18h] [rbp-870h]
  const char *v17; // [rsp+30h] [rbp-858h] BYREF
  __int128 v18; // [rsp+38h] [rbp-850h]
  _BYTE v19[1024]; // [rsp+50h] [rbp-838h] BYREF
  char v20[1032]; // [rsp+450h] [rbp-438h] BYREF
  unsigned __int64 v21; // [rsp+858h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( n )
  {
    if ( !*haystack )
      return v21 - __readfsqword(0x28u);
  }
  else if ( !byte_7FAF1 )
  {
    return v21 - __readfsqword(0x28u);
  }
  qsnprintf();
  v15 = 0;
  v16 = 0;
  v2 = sub_135E0(v19, 1024);
  sub_58110(v2, (unsigned int)"adb shell %s\n", (unsigned int)v19, v3, v4, v5);
  qsnprintf();
  v13 = 0;
  v14 = 0;
  v17 = nullptr;
  v18 = 0;
  if ( !(unsigned __int8)sub_1D840((unsigned __int8 *)&v13, a1) )
  {
    if ( !byte_7FAF8 )
      goto LABEL_11;
    if ( !(_BYTE)v13 )
    {
LABEL_12:
      if ( (unsigned __int64)v18 > 1 )
        sub_11270((__int64)"ADB %s", v17);
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  if ( byte_7FAF8 )
  {
    v12 = sub_20460((__int64)&v13, &v15, (__int64 *)&v17, v20);
    v7 = byte_7FAF8;
    if ( !v12 )
      goto LABEL_8;
  }
  else
  {
    v6 = sub_1E130(&v15, (__int64)&v17, (__int64)"%s", v20);
    v7 = byte_7FAF8;
    if ( !v6 )
    {
LABEL_8:
      if ( !v7 )
      {
LABEL_11:
        LOWORD(v13) = 0;
        goto LABEL_12;
      }
      if ( !(_BYTE)v13 )
        goto LABEL_12;
LABEL_10:
      sub_5D660(&v14, 0xFFFFFFFFLL);
      goto LABEL_11;
    }
  }
  if ( !v7 )
    goto LABEL_31;
  if ( (_BYTE)v13 )
  {
    sub_5D660(&v14, 0xFFFFFFFFLL);
LABEL_31:
    LOWORD(v13) = 0;
  }
LABEL_14:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  v8 = v15;
  if ( v15 )
  {
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 24 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v15;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v21 - __readfsqword(0x28u);
}

