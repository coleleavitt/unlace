unsigned __int64 __fastcall sub_3A6A00(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v3; // rax
  int v4; // r12d
  char v5; // cl
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v10; // [rsp+8h] [rbp-1B0h]
  _BYTE v11[320]; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+188h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) == 64 && *(_QWORD *)a1 != -1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( (get_flags_ex() & 0x600) == 0x400 )
    {
      if ( !(unsigned __int8)xrefblk_t_first_from() )
        goto LABEL_10;
      while ( v10 < v1 )
      {
        v10 = v1 - 1;
        if ( !(unsigned __int8)xrefblk_t_next_from() )
          goto LABEL_10;
      }
      if ( v1 < v10 )
      {
LABEL_10:
        v3 = (unsigned __int64 *)v11;
        do
        {
          *(_WORD *)v3 = 0;
          v3 += 5;
          *((_WORD *)v3 - 19) = 0;
          *((_WORD *)v3 - 18) = 0;
          *((_DWORD *)v3 - 2) = 0;
          *((_WORD *)v3 - 17) = 0;
          *((_OWORD *)v3 - 2) = 0;
          *(v3 - 2) = 0;
        }
        while ( &v12 != v3 );
        if ( (int)decode_insn() > 0 )
        {
          get_flags_ex();
          v4 = sub_CBD70() - 1;
          if ( v4 >= 0 && !(unsigned __int8)is_defarg() )
          {
            v5 = v11[40 * v4 + 1];
            if ( v9 == 1 )
            {
              if ( v5 == 5 )
              {
                v8 = *(_QWORD *)&v11[40 * v4 + 8];
                if ( v8 >= v1 && v8 < v1 + 256 )
                  goto LABEL_27;
              }
            }
            else
            {
              if ( v5 == 5 )
              {
                v6 = *(_QWORD *)&v11[40 * v4 + 8];
              }
              else
              {
                if ( v5 != 4 )
                  return v12 - __readfsqword(0x28u);
                v6 = *(_QWORD *)&v11[40 * v4 + 16];
              }
              v7 = -v6;
              if ( v9 != 2 )
              {
                v7 = v6;
                v6 = -v6;
              }
              if ( v6 < 0 )
              {
                if ( v1 < v7 )
                  return v12 - __readfsqword(0x28u);
                goto LABEL_27;
              }
              if ( !__CFADD__(v1, v6) )
              {
LABEL_27:
                get_default_reftype();
                op_offset();
              }
            }
          }
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

