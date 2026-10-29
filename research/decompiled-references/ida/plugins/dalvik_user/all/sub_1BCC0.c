unsigned __int64 __fastcall sub_1BCC0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD *v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  sub_1B4F0(a1, (__int64 *)&v13);
  v4 = v13;
  if ( byte_7FB48 )
  {
    if ( 8LL * (_QWORD)v14 )
    {
      do
      {
        v5 = *v4;
        if ( !(unsigned __int8)callui(1142, *v4, 0, v1, v2, v3, v11, v12, v13, v14) )
        {
          callui(1026, v5, 1, 8, v2, v3, v11, v12, v13, v14);
          v11 = v5;
          v12 = 0;
          ((void (__fastcall *)(__int64, __int64 *, const char *, __int64, __int64, __int64))callui)(
            1171,
            &v11,
            "Preset",
            v6,
            v7,
            v8);
        }
        v9 = (__int64)v13;
        ++v4;
      }
      while ( v4 != &v13[(_QWORD)v14] );
    }
    else
    {
      v9 = (__int64)v13;
    }
    byte_7FB48 = 0;
    if ( v9 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
  }
  else if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

