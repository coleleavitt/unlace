__int64 __fastcall sub_124A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v10; // rdi
  __int128 v12; // rdi
  _QWORD v14[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a1 != a3 )
  {
    if ( *(_DWORD *)(a3 + 352) != 1 || *(_DWORD *)(a1 + 72) != **(_DWORD **)(a3 + 344) )
    {
      if ( !under_debugger )
        sub_3835A0(52388);
      BUG();
    }
    *((_QWORD *)&v10 + 1) = v14;
    *(_QWORD *)&v10 = a3;
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = 0;
    sub_1238E0(v10, a5, 1u, 0xFFFF0000);
    if ( a6 )
    {
      *((_QWORD *)&v12 + 1) = v14;
      *(_QWORD *)&v12 = a3;
      sub_1238E0(v12, a6, 1u, 0xFFFF0000);
    }
    if ( sub_A94E0(a3, v14, *(_QWORD *)(a3 + 48), a4, 1u) || sub_A94E0(a1, v14, a2, 0, 1u) )
      a4 = 0;
    else
      a4 = a2;
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
  }
  return a4;
}

