__int64 __fastcall sub_156390(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  unsigned int v7; // r12d
  __int64 v9[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v10[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v12[11]; // [rsp+40h] [rbp-58h] BYREF

  v12[3] = __readfsqword(0x28u);
  if ( a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    sub_120C40((__int64)v9, a1, a2, 0x801u);
    if ( (unsigned __int8)sub_60D40(v9, (_QWORD *)(v2 + 104)) || (v7 = sub_3142F0(v10, v2 + 120), (_BYTE)v7) )
    {
      sub_120C40((__int64)v11, a1, a2, 1u);
      sub_60C00(v9, v11, v3, v4, v5, v6);
      sub_313AE0(v10, v12);
      if ( v12[0] )
      {
        v12[1] = 0;
        qfree();
      }
      qfree();
      v7 = sub_60D40(v9, (_QWORD *)(v2 + 104));
      if ( !(_BYTE)v7 )
        v7 = sub_3142F0(v10, v2 + 120);
    }
    if ( v10[0] )
    {
      v10[1] = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    return 0;
  }
  return v7;
}

