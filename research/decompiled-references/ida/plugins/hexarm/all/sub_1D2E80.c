__int64 __fastcall sub_1D2E80(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rax
  int v7; // r15d
  __int64 v8; // r15
  char v11; // [rsp+Fh] [rbp-1B9h]
  char v12; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp+188h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 16);
  if ( (get_flags_ex() & 0x600) != 0x400 )
  {
    v11 = netnode_charval();
    del_items();
    v6 = (unsigned __int64 *)&v12;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( &v13 != v6 );
    v7 = *(unsigned __int16 *)(a2 + 26);
    if ( v7 == (unsigned int)create_insn() )
    {
      v8 = *(unsigned __int16 *)(a2 + 26);
      if ( v8 == get_item_end() - v5 )
      {
        if ( v11 )
          netnode_supset();
        v5 += *(unsigned __int16 *)(a2 + 26);
        if ( v5 < a3 )
        {
          while ( (unsigned int)create_insn() )
          {
            if ( v5 >= a3 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          if ( (unsigned int)decode_insn() )
            return v5;
        }
      }
    }
  }
  *a4 = v5;
  return -1;
}

