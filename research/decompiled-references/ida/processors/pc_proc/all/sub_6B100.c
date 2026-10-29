__int64 __fastcall sub_6B100(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  char *v7; // r14
  unsigned __int64 *v8; // rax
  char v9; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v10; // [rsp+178h] [rbp-40h] BYREF

  v10 = __readfsqword(0x28u);
  *a1 = 0;
  if ( get_bytes() == a5 )
  {
    v6 = getseg();
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 42) & 1) != 0 )
      {
        v7 = (char *)&unk_16EB40;
        getseg();
        do
        {
          if ( v7[2] == (unsigned __int8)get_byte() )
          {
            v8 = (unsigned __int64 *)&v9;
            do
            {
              *(_WORD *)v8 = 0;
              v8 += 5;
              *((_WORD *)v8 - 19) = 0;
              *((_WORD *)v8 - 18) = 0;
              *((_DWORD *)v8 - 2) = 0;
              *((_WORD *)v8 - 17) = 0;
              *((_OWORD *)v8 - 2) = 0;
              *(v8 - 2) = 0;
            }
            while ( &v10 != v8 );
            decode_insn();
          }
          v7 += 4;
        }
        while ( v7 != (char *)&unk_16EB58 );
      }
    }
  }
  return 0;
}

