char __fastcall sub_1A810(__int64 *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  char v6; // bl
  __int64 v8; // [rsp+10h] [rbp-58h] BYREF
  __int128 v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v5 = *a1;
      v8 = 0;
      v10 = 0;
      v9 = 0;
      v11 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(v5 + 512))(a1, &v8) )
      {
        v6 = sub_15B30(a1, (__int64)&v10, a3);
        if ( v6 )
        {
          sub_D6A0(a2);
          if ( v10 )
          {
            *(_QWORD *)&v11 = 0;
            qfree();
          }
          if ( v8 )
          {
            *(_QWORD *)&v9 = 0;
            qfree();
          }
          return v6;
        }
      }
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
    else if ( !a4 )
    {
      return (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 408))(a1, a2);
    }
    return 0;
  }
  return sub_16950(a1, (__int64)a2, a3);
}
