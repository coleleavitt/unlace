unsigned __int64 __fastcall sub_33FA40(__int64 a1)
{
  const char **v1; // r14
  int v2; // eax
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+0h] [rbp-4B8h] BYREF
  __int128 v8; // [rsp+8h] [rbp-4B0h]
  __int128 v9; // [rsp+18h] [rbp-4A0h]
  __int128 v10; // [rsp+28h] [rbp-490h]
  __int64 v11; // [rsp+38h] [rbp-480h]
  __int64 v12; // [rsp+40h] [rbp-478h]
  char v13; // [rsp+50h] [rbp-468h] BYREF
  char v14; // [rsp+80h] [rbp-438h] BYREF
  unsigned __int64 v15; // [rsp+488h] [rbp-30h]

  v1 = (const char **)off_4E0560;
  v15 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v7 = 72;
  v11 = 0;
  v12 = 0;
  qsnprintf();
  qstrlwr();
  *(_QWORD *)&v8 = &v13;
  v2 = 6;
  v3 = 0;
  while ( strncmp((const char *)(a1 + 16), *v1, v2) )
  {
    ++v3;
    v1 += 2;
    if ( v3 == 34 )
    {
      if ( !under_debugger )
        sub_3835A0(550);
      BUG();
    }
    v2 = strlen(*v1);
  }
  *((_QWORD *)&v8 + 1) = off_4E0560[2 * v3 + 1];
  *(_QWORD *)&v9 = "Hex-Rays SA";
  *((_QWORD *)&v9 + 1) = a930260327;
  *(_QWORD *)&v10 = "https://www.hex-rays.com";
  sub_33F8A0();
  *((_QWORD *)&v10 + 1) = &v14;
  v11 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(102, 0, &v7, &callui, v4, v5);
  return v15 - __readfsqword(0x28u);
}

