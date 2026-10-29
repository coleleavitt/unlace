unsigned __int64 __fastcall sub_19E10(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int _32bit; // eax
  int v6; // eax
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  sub_D6A0(&v13);
  set_name();
  v2 = *a1;
  v3 = a1[35] + a2;
  v11 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v2 + 144))(a1, &v11, v3) )
  {
    if ( v11 )
    {
      _32bit = get_32bit();
      if ( _32bit != -1 )
      {
        if ( _32bit >= 0 )
        {
LABEL_8:
          create_data();
          goto LABEL_9;
        }
        v6 = sub_D110(a1[1]);
        if ( !v6 )
        {
          create_data();
          v10 = *a1;
          v12 = 0;
          v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v10 + 144))(a1, &v12, a1[45] + v11);
          goto LABEL_16;
        }
        if ( v6 == 1 )
        {
          create_data();
          v7 = *a1;
          v12 = 0;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v7 + 136))(a1, &v12, a1[49] + v11) )
            goto LABEL_9;
          v8 = v12;
          v12 &= ~1uLL;
          if ( (v8 & 1) == 0 )
            goto LABEL_8;
          create_data();
          v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 144))(a1, &v12, a1[50] + v12);
LABEL_16:
          if ( v9 )
            goto LABEL_8;
LABEL_9:
          sub_D6A0(&v13);
          set_name();
          if ( !v13 )
            return v15 - __readfsqword(0x28u);
          goto LABEL_4;
        }
      }
    }
  }
  if ( v13 )
  {
LABEL_4:
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}
