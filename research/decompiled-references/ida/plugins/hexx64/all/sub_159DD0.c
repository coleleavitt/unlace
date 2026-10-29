__int64 __fastcall sub_159DD0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // r12d
  __int64 v11[2]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 *v12[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14[11]; // [rsp+40h] [rbp-58h] BYREF

  v14[3] = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    sub_124680((__int64)v11, a1, a2, 2049, a3, a4);
    if ( (unsigned __int8)sub_64780(v11, (_QWORD *)(v4 + 104)) || (v9 = sub_318470(v12, v4 + 120), (_BYTE)v9) )
    {
      sub_124680((__int64)v13, a1, a2, 1, a3, a4);
      sub_64640(v11, v13, v5, v6, v7, v8);
      sub_317C60((__int64 *)v12, (__int64)v14);
      if ( v14[0] )
      {
        v14[1] = 0;
        qfree(v14[0]);
      }
      qfree(v13[0]);
      v9 = sub_64780(v11, (_QWORD *)(v4 + 104));
      if ( !(_BYTE)v9 )
        v9 = sub_318470(v12, v4 + 120);
    }
    if ( v12[0] )
    {
      v12[1] = nullptr;
      qfree((__int64)v12[0]);
    }
    qfree(v11[0]);
  }
  else
  {
    return 0;
  }
  return v9;
}

