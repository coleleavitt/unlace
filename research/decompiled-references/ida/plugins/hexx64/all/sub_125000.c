__int64 __fastcall sub_125000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 *v11[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a1 != a3 )
  {
    if ( *(_DWORD *)(a3 + 352) != 1 || *(_DWORD *)(a1 + 72) != **(_DWORD **)(a3 + 344) )
    {
      if ( !under_debugger )
        sub_383060(0xCCA4u, a7);
      BUG();
    }
    v11[0] = nullptr;
    v11[1] = nullptr;
    v12 = 0;
    v13 = 0;
    sub_123EA0(a3, (__int64 *)v11, a5, 1, 0xFFFF0000, 0.0);
    if ( a6 )
      sub_123EA0(a3, (__int64 *)v11, a6, 1, 0xFFFF0000, 0.0);
    if ( sub_A9AA0(a3, v11, *(_QWORD *)(a3 + 48), a4, 1u) || sub_A9AA0(a1, v11, a2, 0, 1u) )
      a4 = 0;
    else
      a4 = a2;
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree((__int64)v11[0]);
  }
  return a4;
}

