unsigned __int64 __fastcall sub_1A9D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD))(v5 + 280))(a1, &v7, a4, a5) )
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
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}
