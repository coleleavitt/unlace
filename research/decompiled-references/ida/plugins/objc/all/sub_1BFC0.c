__int64 __fastcall sub_1BFC0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-80h] BYREF
  __int64 v7; // [rsp+10h] [rbp-78h] BYREF
  __int128 v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-50h]
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  for ( i = *a2; i < a2[1]; i += v3 )
  {
    op_offset();
    v4 = *(_QWORD *)a1;
    v6 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, unsigned __int64))(v4 + 136))(a1, &v6, i) )
    {
      v7 = 0;
      v8 = 0;
      if ( sub_16950((__int64 *)a1, (__int64)&v7, v6) )
      {
        v9 = 0;
        v10 = 0;
        sub_D6A0(&v9);
        set_name();
        if ( v9 )
        {
          *(_QWORD *)&v10 = 0;
          qfree();
        }
        if ( !v7 )
          goto LABEL_7;
      }
      else if ( !v7 )
      {
        goto LABEL_7;
      }
      *(_QWORD *)&v8 = 0;
      qfree();
    }
LABEL_7:
    v3 = *(unsigned int *)(a1 + 744);
  }
  return 1;
}
