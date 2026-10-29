unsigned __int64 __fastcall sub_58E80(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int flags; // eax
  __int64 func; // r12
  char *v11; // rax
  __int64 insn; // rax
  char *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-208h]
  __int64 v15; // [rsp+8h] [rbp-200h]
  __int64 v16; // [rsp+10h] [rbp-1F8h]
  __int64 v17; // [rsp+18h] [rbp-1F0h]
  __int64 v18; // [rsp+20h] [rbp-1E8h]
  char v19; // [rsp+30h] [rbp-1D8h]
  char v20; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v21[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v15 = a1;
  v21[0] = __readfsqword(0x28u);
  v2 = getinf() & 0xF;
  if ( v2 != 1 && (v2 || (unsigned int)getinf() != 11) )
  {
    v3 = 0;
    *(_BYTE *)(a1 + 5488) = 0;
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
      || ((unsigned __int8)segtype() == 1
       || (flags = get_flags_ex(), (flags & 0x600) == 0x400) && (flags & 0xF0000000) == 0x20000000)
      && (v3 = xrefblk_t_first_to()) != 0 )
    {
      if ( v3 )
      {
        do
        {
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
          {
            v13 = &v20;
            do
            {
              *(_WORD *)v13 = 0;
              v13 += 40;
              *((_WORD *)v13 - 19) = 0;
              *((_WORD *)v13 - 18) = 0;
              *((_DWORD *)v13 - 2) = 0;
              *((_WORD *)v13 - 17) = 0;
              *((_OWORD *)v13 - 2) = 0;
              *((_QWORD *)v13 - 2) = 0;
            }
            while ( v21 != (_QWORD *)v13 );
            decode_insn();
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_to() );
      }
      else if ( (unsigned __int8)xrefblk_t_first_to() )
      {
        do
        {
          if ( v19 )
          {
            func = get_func();
            a2 = 4;
            if ( (get_flags_ex() & 0x1000) == 0 )
            {
              v11 = &v20;
              do
              {
                *(_WORD *)v11 = 0;
                v11 += 40;
                *((_WORD *)v11 - 19) = 0;
                *((_WORD *)v11 - 18) = 0;
                *((_DWORD *)v11 - 2) = 0;
                *((_WORD *)v11 - 17) = 0;
                *((_OWORD *)v11 - 2) = 0;
                *((_QWORD *)v11 - 2) = 0;
              }
              while ( v21 != (_QWORD *)v11 );
              a2 = v18;
              insn = decode_prev_insn();
              if ( insn != -1 )
              {
                a2 = insn;
                sub_6C050(func, insn, 0.0);
              }
            }
          }
        }
        while ( !(unsigned __int8)callui(27, a2, v4, v5, v6, v7, v14, v15, v16, v17)
             && (unsigned __int8)xrefblk_t_next_to() );
      }
    }
  }
  return v21[0] - __readfsqword(0x28u);
}

