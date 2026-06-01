unsigned __int64 __fastcall sub_7CC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v4 = *a3;
  v9 = 0;
  v10 = 0;
  if ( v4 )
  {
    v5 = a3[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = *a3;
        }
      }
    }
    a3[1] = 0;
    qfree();
    *a3 = 0;
    a3[2] = 0;
  }
  sub_7490(&v9);
  reg_read_strlist();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

