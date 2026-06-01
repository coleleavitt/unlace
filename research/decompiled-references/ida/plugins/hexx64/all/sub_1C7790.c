__int64 __fastcall sub_1C7790(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned int v4; // r12d
  int v6; // r15d
  _QWORD *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD v11[4]; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  LOBYTE(v4) = a2 == 0 && (int)a3 <= 0;
  if ( (_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC97Bu, a4);
    BUG();
  }
  v6 = *(_DWORD *)a1;
  v7 = (_QWORD *)sub_339CA0();
  sub_1C6F80(v11, v7, a1, a3, 0, a4);
  if ( v11[0] && sub_CFF70() == 1 )
  {
    v9 = sub_339CA0();
    sub_1C59F0((__int64)&v12, v9, (__int64)v11, a3, 0, a4);
    copy_argloc();
    cleanup_argloc();
    if ( v6 != 2 && *(_DWORD *)a1 == 2 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 1 )
    {
      v12 = 0;
      copy_argloc();
      v10 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v13;
      v13 = v10;
      LODWORD(v10) = *(_DWORD *)a1;
      *(_DWORD *)a1 = v12;
      v12 = v10;
      cleanup_argloc();
    }
    v4 = 1;
  }
  cleanup_argloc();
  return v4;
}

