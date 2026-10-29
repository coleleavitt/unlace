__int64 __fastcall sub_1CF10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  const char *v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  const char *v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v3 = sub_1C690(a1);
  v9 = 0;
  (*(void (__fastcall **)(__int64 *, const char **))(*a2 + 24))(a2, &v8);
  v4 = src;
  if ( (_QWORD)v9 )
    v4 = v8;
  v5 = netnode_hashval_long(v3, v4, 72);
  if ( !v5 )
  {
    v7 = -1;
    netnode_check(&v7, 0, 0, 1);
    v5 = v7;
    LODWORD(v4) = (_DWORD)a2;
    sub_1CE00(a1, a2, v7);
  }
  sub_1CCB0(a1, (int)v4);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v5;
}
