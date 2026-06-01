__int64 __fastcall sub_1C190(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int128 v13; // [rsp+38h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-58h] BYREF
  __int128 v15; // [rsp+58h] [rbp-50h]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 < a2[1] )
  {
    v3 = *((_DWORD *)a1 + 186);
    while ( 1 )
    {
      v4 = v2 + v3;
      op_offset();
      op_offset();
      v5 = *a1;
      v8 = 0;
      v10 = 0;
      v11 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v5 + 136))(a1, &v8, v4)
        || get_strlit_contents() <= 0 )
      {
        goto LABEL_17;
      }
      sub_1B0D0();
      v6 = *a1;
      v9 = 0;
      v12 = 0;
      v13 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v6 + 136))(a1, &v9, v2)
        || !get_ea_name() )
      {
        break;
      }
      v14 = 0;
      v15 = 0;
      sub_D6A0(&v14);
      set_name();
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
      if ( !v10 )
        goto LABEL_13;
LABEL_12:
      *(_QWORD *)&v11 = 0;
      qfree();
LABEL_13:
      v3 = *((_DWORD *)a1 + 186);
      v2 += 2 * v3;
      if ( v2 >= a2[1] )
        return 1;
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
LABEL_17:
    if ( !v10 )
      goto LABEL_13;
    goto LABEL_12;
  }
  return 1;
}
