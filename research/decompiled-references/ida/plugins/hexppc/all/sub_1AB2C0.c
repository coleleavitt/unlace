unsigned __int64 __fastcall sub_1AB2C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int i; // eax
  _QWORD v5[1031]; // [rsp+8h] [rbp-5080h] BYREF
  int v6; // [rsp+2044h] [rbp-3044h]
  unsigned __int64 v7; // [rsp+5058h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1496);
  if ( under_debugger || *(_BYTE *)(v1 + 1424) )
  {
    v2 = *(_QWORD *)(v1 + 1024);
    v5[0] = 0;
    *(_DWORD *)(v2 + 140) = 0;
    sub_316090(v2, v5);
    sub_315D40(v5);
    if ( (unsigned __int8)qgetenv() && *(_QWORD *)(v2 + 120) > 1u )
    {
      qmkdir();
      v5[1030] = 0;
      v6 = 0;
      qmakepath();
      for ( i = qfindfirst(); !i; i = qfindnext() )
      {
        qmakepath();
        qunlink();
      }
      qfindclose();
    }
  }
  return v7 - __readfsqword(0x28u);
}

