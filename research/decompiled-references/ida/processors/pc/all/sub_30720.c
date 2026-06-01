unsigned __int64 sub_30720()
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0xC000) != 0x4000 )
  {
    v5 = 0;
    v6 = 0;
    if ( (get_flags_ex() & 0xC000) == 0x8000 )
    {
      sub_30660(&v5);
    }
    else if ( get_ea_name() > 0 )
    {
      v1 = v6;
      if ( (_QWORD)v6 )
      {
        v2 = v6 + 3;
        v3 = v6 + 4;
        v1 = v6 - 1;
      }
      else
      {
        v3 = 5;
        v2 = 4;
      }
      v4 = v5;
      if ( *((_QWORD *)&v6 + 1) < v3 )
      {
        v5 = qvector_reserve();
        v4 = v5;
      }
      *(_QWORD *)&v6 = v3;
      *(_BYTE *)(v4 + v2) = 0;
      *(_DWORD *)(v5 + v1) = 1212502879;
    }
    if ( !(unsigned __int8)set_name() )
      set_name();
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  return v7 - __readfsqword(0x28u);
}
