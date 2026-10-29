__int64 __fastcall sub_1E1A0(__int64 a1, double a2)
{
  int v2; // ebp
  _QWORD *v3; // rax
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // [rsp+0h] [rbp-468h]
  int v10; // [rsp+Ch] [rbp-45Ch]
  const char *v11; // [rsp+10h] [rbp-458h] BYREF
  __int64 v12; // [rsp+18h] [rbp-450h] BYREF
  _BYTE v13[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v14; // [rsp+428h] [rbp-40h]

  v2 = 4;
  v14 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120);
  v3 = &unk_822D8;
  if ( v10 != 13 )
    v3 = &unk_822D0;
  v4 = 0;
  v9 = v3;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 1880) + (v4 << 12);
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v5,
           &v12,
           8,
           0) == 8
      && v12 == *v9 )
    {
      break;
    }
    v4 = 1 << v4;
    if ( !--v2 )
      return 0;
  }
  sub_1BF10(a1, (__int64)"%a: lowglo\n", a2);
  v7 = 48;
  *(_QWORD *)(a1 + 1896) = v5;
  v11 = nullptr;
  if ( v10 == 13 )
    v7 = 24;
  v8 = *(int *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 128);
  if ( v8 == (*(__int64 (__fastcall **)(__int64, __int64, const char **, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
               a1,
               v5 + v7,
               &v11,
               v8,
               0) )
  {
    memset(v13, 0, 0x400u);
    if ( (*(__int64 (__fastcall **)(__int64, const char *, _BYTE *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v11,
           v13,
           1023,
           0) == 1023 )
      sub_140F0((__int64)"%a: detected %s\n", a2, v11);
  }
  return 1;
}

