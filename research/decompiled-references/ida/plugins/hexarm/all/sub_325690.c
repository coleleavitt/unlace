unsigned __int64 __fastcall sub_325690(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  int flags; // eax
  __int64 v6; // rax
  int i; // r15d
  __int64 v8; // rax
  int j; // eax
  int v11; // r13d
  __int64 (__fastcall **v12)(); // [rsp+10h] [rbp-F8h] BYREF
  int v13; // [rsp+18h] [rbp-F0h]
  __int64 v14; // [rsp+20h] [rbp-E8h]
  __int128 v15; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall **v19)(); // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+68h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-98h]
  __int128 v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int64 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a3 || (unsigned __int8)sub_31B930(*(_QWORD *)(a1 + 216)) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v4 + 4) >= 0 )
    {
      if ( sub_1CE420(v4) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) != -1 )
        {
          flags = get_flags_ex();
          if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
          {
            if ( !under_debugger )
              sub_3835A0(50726);
            goto LABEL_33;
          }
        }
      }
      v13 = 2;
      v14 = 0;
      v16 = 0;
      v12 = (__int64 (__fastcall **)())&off_4DDA08;
      v18 = a1;
      v15 = 0;
      v17 = 0;
      sub_255E40((__int64 *)&v12, a1 + 16, 0);
      v6 = *(_QWORD *)(a1 + 216);
      v20 = 0;
      v21 = 0;
      v25 = v6;
      v23 = 0;
      v19 = off_4DDA48;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v22 = 0;
      v24 = 0;
      sub_255E40((__int64 *)&v19, a1 + 16, 0);
      for ( i = sub_64360(&v28, 0); i != (_DWORD)v29; i = sub_64360(&v28, i + 1) )
      {
        if ( !sub_64330(&v26, i) )
        {
          if ( !under_debugger )
            sub_3835A0(50728);
          goto LABEL_33;
        }
      }
      if ( !a2 )
      {
        for ( j = sub_64360(&v26, 0); ; j = sub_64360(&v26, v11 + 1) )
        {
          v11 = j;
          if ( j == (_DWORD)v27 )
            goto LABEL_14;
          if ( !sub_64330(&v28, j) )
            break;
        }
        sub_254F80(v25, *(_QWORD *)(v25 + 1352) + 16LL, (__int64)"UNUSED LABEL %d", v11);
        if ( !under_debugger )
          sub_3835A0(50729);
LABEL_33:
        BUG();
      }
LABEL_14:
      v8 = *(_QWORD *)(a1 + 216);
      v19 = off_4DDA48;
      *(_DWORD *)(v8 + 448) = 0;
      qfree();
      qfree();
      v19 = off_4D63B8;
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
      v12 = off_4D63B8;
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}

