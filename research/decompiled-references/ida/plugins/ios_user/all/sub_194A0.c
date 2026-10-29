__int64 __fastcall sub_194A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v6; // al
  _QWORD v7[6]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v8; // [rsp+30h] [rbp-68h]
  __int128 v9; // [rsp+38h] [rbp-60h]
  __int128 v10; // [rsp+48h] [rbp-50h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  unsigned __int64 v12; // [rsp+68h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1880) && rangeset_t_find_range() )
  {
    v9 = 0;
    v11 = a2;
    v7[1] = 16;
    memset(&v7[2], 0, 32);
    v8 = 0;
    v7[0] = off_8B908;
    v10 = 0;
    v6 = sub_3A190(a1 + 1704, a3, v7, 0);
    v7[0] = off_8B7D0;
    v3 = v6 == 0 ? -1 : 1;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

