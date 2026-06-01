__int64 __fastcall sub_18A20(__int64 a1)
{
  __int64 *v1; // r12
  bool v2; // zf
  unsigned int v3; // ebx
  const char *v4; // rdx
  char v6; // [rsp+Fh] [rbp-41h] BYREF
  const char *v7; // [rsp+10h] [rbp-40h] BYREF
  __int128 v8; // [rsp+18h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v1 = (__int64 *)src;
  v2 = *(_QWORD *)(a1 + 152) == 0;
  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  if ( !v2 )
    v1 = *(__int64 **)(a1 + 144);
  setup_new_execution(&v6, 1);
  v3 = sub_17D00(a1, v1, nullptr, (__int64 *)&v7, (__int64 *)"IDAPython_ExecScript", 0, 0);
  setup_new_execution(&v6, 0);
  if ( !(_BYTE)v3 )
  {
    v4 = src;
    if ( (_QWORD)v8 )
      v4 = v7;
    sub_7D60((__int64)"IDAPython: error executing '%s':\n%s", (const char *)v1, v4);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v3;
}

