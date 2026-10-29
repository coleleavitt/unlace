__int64 __fastcall sub_247E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // r12
  const char *v6; // rsi
  const char *v7; // rsi
  __int64 v9; // rax
  const char *v10; // [rsp+0h] [rbp-6E8h] BYREF
  __int128 v11; // [rsp+8h] [rbp-6E0h]
  _BYTE v12[864]; // [rsp+20h] [rbp-6C8h] BYREF
  __int64 v13; // [rsp+380h] [rbp-368h]
  unsigned __int64 v14; // [rsp+6C8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v3 = sub_14930();
  v4 = *(_QWORD *)(a1 + 16) == 0;
  v10 = nullptr;
  v5 = v3;
  v11 = 0;
  v6 = s;
  if ( !v4 )
    v6 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_605E0(v3, v6, &v10) )
  {
    v9 = sub_148E0();
    sub_23730((__int64)v12, v9);
    v13 = v5;
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = 1;
    sub_49E50(v12);
  }
  else
  {
    v7 = s;
    if ( (_QWORD)v11 )
      v7 = v10;
    sub_13170((__int64)"%s\n", v7);
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = 0;
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 0;
}

