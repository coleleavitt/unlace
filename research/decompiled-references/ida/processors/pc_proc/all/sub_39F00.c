__int64 __fastcall sub_39F00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  char *v6; // rax
  __int64 v7; // rsi
  __int64 name_ea; // rax
  char v9; // [rsp+58h] [rbp-180h] BYREF
  char v10; // [rsp+198h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+1A8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 5432) )
    return v11 - __readfsqword(0x28u);
  *(_BYTE *)(a1 + 5432) = 1;
  if ( (unsigned __int8)getinf_flag() )
    return v11 - __readfsqword(0x28u);
  v2 = getinf() & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    if ( (_BYTE)v2 == 8 )
    {
      if ( (unsigned __int8)sub_53B30(a1, 4) )
      {
        name_ea = get_name_ea();
        if ( name_ea != -1 )
          sub_59330(a1, name_ea);
      }
      v3 = getinf();
      if ( (unsigned __int8)sub_53A90(v3) )
      {
        getinf();
        if ( (get_flags_ex() & 0xC000) != 0x4000 )
        {
          getinf();
          v4 = getseg();
          if ( v4 )
          {
            v5 = *(_QWORD *)(v4 + 8);
            if ( (unsigned __int64)(v5 - getinf()) > 0x10 )
            {
              getinf();
              get_byte();
              if ( (unsigned __int8)get_byte() == 0xE8 )
              {
                v6 = &v9;
                do
                {
                  *(_WORD *)v6 = 0;
                  v6 += 40;
                  *((_WORD *)v6 - 19) = 0;
                  *((_WORD *)v6 - 18) = 0;
                  *((_DWORD *)v6 - 2) = 0;
                  *((_WORD *)v6 - 17) = 0;
                  *((_OWORD *)v6 - 2) = 0;
                  *((_QWORD *)v6 - 2) = 0;
                }
                while ( v6 != &v10 );
                decode_insn();
              }
            }
          }
        }
      }
    }
    return v11 - __readfsqword(0x28u);
  }
  v7 = get_name_ea();
  if ( v7 == -1 )
    return v11 - __readfsqword(0x28u);
  return sub_59330(a1, v7);
}

