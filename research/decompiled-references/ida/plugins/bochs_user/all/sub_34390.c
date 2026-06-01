__int64 __fastcall sub_34390(_QWORD *a1)
{
  unsigned int v2; // ebp
  _BYTE *v3; // rdi
  const char *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h]
  __int64 v10; // [rsp+10h] [rbp-68h]
  __int128 v11; // [rsp+18h] [rbp-60h]
  __int128 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = sub_46020(a1[338]);
  v3 = (_BYTE *)a1[338];
  if ( *v3 )
  {
    v5 = (const char *)sub_44660(v3);
    sub_EB00((__int64)"startup_script: %s", v5);
    if ( v2 != 1 )
      return 0;
  }
  else if ( v2 != 1 )
  {
    return 0;
  }
  v11 = 0;
  v9 = -1;
  v8 = 0xFFFFFFFFLL;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  set_debug_event_code();
  sub_446A0(a1[338], &v8);
  v6 = a1[150];
  v7 = (_QWORD *)a1[334];
  LOBYTE(v10) = 1;
  v9 = *(_QWORD *)(v6 + 8240);
  if ( v7 == (_QWORD *)(a1[336] - 72LL) )
  {
    sub_1B9A0((__int64)(a1 + 328));
  }
  else
  {
    *v7 = 0xFFFFFFFFLL;
    v7[1] = -1;
    v7[2] = 0;
    copy_debug_event();
    a1[334] += 72LL;
  }
  free_debug_event();
  return v2;
}

