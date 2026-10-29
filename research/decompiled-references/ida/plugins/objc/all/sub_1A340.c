unsigned __int64 __fastcall sub_1A340(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = *a1;
  v8 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(v2 + 280))(a1, &v4, a2, 2) )
  {
    v6 = 0;
    v7 = 0;
    sub_D6A0(&v6);
    set_name();
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}
