unsigned __int64 __fastcall sub_6D010(__int64 *a1, __int64 *a2, char a3)
{
  int v4; // ebp
  int v5; // eax
  unsigned __int64 v6; // r13
  int v7; // r12d
  unsigned __int64 i; // r15
  __int64 v9; // r12
  unsigned int j; // ebp
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v15; // [rsp+10h] [rbp-D0h]
  signed int v16; // [rsp+28h] [rbp-B8h]
  char v17; // [rsp+2Fh] [rbp-B1h]
  __int64 v18[2]; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v20[2]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v21; // [rsp+68h] [rbp-78h] BYREF
  __int128 v22; // [rsp+70h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-60h]
  __int128 v24; // [rsp+88h] [rbp-58h]
  unsigned __int64 v25; // [rsp+A0h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v22 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  if ( a3 )
  {
    v4 = sub_69860(a1, &v21);
    v16 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    sub_6B970((__int64)a1, v16, v18);
  }
  else
  {
    v4 = sub_69080((__int64)a1, &v21);
    v16 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 56))(a1);
  sub_6CE40(a2, v5);
  v20[0] = 0;
  v20[1] = 0;
  sub_5FE10(v20, v16);
  sub_60550((__int64 *)(*a2 + 16LL * v16), v20);
  qfree();
  sub_68F30(v19, (__int64)a1);
  if ( v4 > 0 )
  {
    v6 = 0;
    v15 = v4;
    do
    {
      if ( v6 >= (unsigned __int64)v22 )
        v7 = -1;
      else
        v7 = *(_DWORD *)(v21 + 4 * v6);
      if ( v16 != v7 && (!a3 || sub_605B0(v18, v7)) )
        sub_60550((__int64 *)(*a2 + 16LL * v7), v19);
      ++v6;
    }
    while ( v4 != v6 );
    do
    {
      v17 = 0;
      for ( i = 0; i != v15; ++i )
      {
        while ( 1 )
        {
          v9 = i >= (unsigned __int64)v22 ? -1LL : *(int *)(v21 + 4 * i);
          if ( v16 != (_DWORD)v9 && (!a3 || sub_605B0(v18, v9)) )
            break;
          if ( v15 == ++i )
            goto LABEL_29;
        }
        sub_5FC80(v20, (__int64)v19);
        for ( j = 0; ; ++j )
        {
          v12 = *a1;
          if ( a3 )
            break;
          if ( (int)j >= (unsigned __int64)(*(int (__fastcall **)(__int64 *, _QWORD))(v12 + 104))(a1, (unsigned int)v9) )
            goto LABEL_26;
          v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, (unsigned int)v9, j);
LABEL_22:
          sub_60380(v20, (__int64 *)(*a2 + 16LL * v11));
        }
        if ( (int)j < (unsigned __int64)(*(int (__fastcall **)(__int64 *, _QWORD))(v12 + 96))(a1, (unsigned int)v9) )
        {
          v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, (unsigned int)v9, j);
          goto LABEL_22;
        }
LABEL_26:
        sub_5FE10(v20, v9);
        v13 = 16 * v9;
        if ( sub_60470((__int64)v20, v13 + *a2) )
        {
          sub_60550((__int64 *)(v13 + *a2), v20);
          v17 = 1;
        }
        qfree();
      }
LABEL_29:
      ;
    }
    while ( v17 );
  }
  qfree();
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
  qfree();
  return v25 - __readfsqword(0x28u);
}

