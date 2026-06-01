__int64 __fastcall sub_168CF0(_QWORD *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned int v4; // ebx
  _BYTE *v6; // r12
  int v7; // r8d
  int v8; // r9d
  __int64 v9[2]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v10; // [rsp+10h] [rbp-80h] BYREF
  __int128 v11; // [rsp+18h] [rbp-78h]
  __int64 v12[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v13[10]; // [rsp+40h] [rbp-50h] BYREF

  v13[3] = __readfsqword(0x28u);
  v10 = 0;
  v9[0] = 0;
  v9[1] = 0;
  v11 = 0;
  sub_123EA0((__int64)a1, v9, a2, 0, 0xFFFF0000, 0.0);
  if ( (unsigned __int8)sub_64880(v9) && !(_QWORD)v11
    || !(unsigned __int8)sub_64820(v9, a1 + 25)
    || !(unsigned __int8)sub_317F40(a1 + 27, (__int64)&v10) )
  {
    goto LABEL_3;
  }
  v6 = (_BYTE *)sub_129150((__int64)a1, v9, *(_QWORD *)(a1[7] + 16LL), 0, 0, 0, 0.0, a4, 0x101u);
  if ( !v6 )
  {
    if ( !under_debugger )
      sub_383060(0xCD13u, 0.0);
    BUG();
  }
  if ( !sub_120380(v6, 0) && (v6[6] & 2) == 0 && sub_32ED70(*(unsigned int *)v6) )
  {
    sub_127A20((__int64)v12, (__int64)a1, (__int64)v6, 0, v7, v8, 0.0, a4);
    if ( !(unsigned __int8)sub_64820(v9, v12) || (v4 = sub_317F40(v13, (__int64)&v10), !(_BYTE)v4) )
    {
      v4 = sub_64820(v12, v9);
      if ( (_BYTE)v4 )
        v4 = sub_317F40(&v10, (__int64)v13);
    }
    if ( v13[0] )
    {
      v13[1] = 0;
      qfree(v13[0]);
    }
    qfree(v12[0]);
  }
  else
  {
LABEL_3:
    v4 = 0;
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  qfree(v9[0]);
  return v4;
}

