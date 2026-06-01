unsigned __int64 __fastcall sub_1CE00(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  const char *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  const char *v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = sub_1C690(a1);
  v5 = *a2;
  v13 = 0;
  v12 = nullptr;
  (*(void (__fastcall **)(__int64 *, const char **))(v5 + 24))(a2, &v12);
  v6 = src;
  if ( (_QWORD)v13 )
    v6 = v12;
  v11 = a3;
  netnode_hashset(v4, v6, &v11, 8, 72);
  if ( (debug & 0x400000) != 0 )
  {
    v6 = src;
    if ( (_QWORD)v13 )
      LODWORD(v6) = (_DWORD)v12;
    sub_88B80((unsigned int)"Associated mappings for: %s => %a\n", (_DWORD)v6, a3, v7, v8, v9);
  }
  sub_1CCB0(a1, (int)v6);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v14 - __readfsqword(0x28u);
}

