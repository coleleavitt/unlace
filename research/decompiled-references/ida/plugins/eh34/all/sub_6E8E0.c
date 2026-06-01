__int64 __fastcall sub_6E8E0(__int64 a1, __int64 a2)
{
  __int64 max_strlit_length; // rax
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_byte(a2 + 16) == 46 )
  {
    v5 = nullptr;
    v6 = 0;
    max_strlit_length = get_max_strlit_length(a2 + 17, 0, 0);
    if ( get_strlit_contents(&v5, a2 + 17, max_strlit_length, 0, 0, 0) <= 0 )
    {
      *(_BYTE *)(a1 + 24) = 0;
    }
    else
    {
      v4 = s1;
      if ( (_QWORD)v6 )
        v4 = v5;
      sub_6E760(a1, v4);
    }
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

