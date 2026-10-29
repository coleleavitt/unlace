__int64 __fastcall sub_4D80(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // ax
  __int128 *v4; // rax
  __int128 *v6; // rax
  __int128 v7; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v8[4]; // [rsp+168h] [rbp-20h] BYREF

  v8[0] = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_WORD *)(a2 + 24);
    if ( v3 == 5 )
    {
      if ( *(_WORD *)(a2 + 86) != 1 )
        return 0;
      v6 = &v7;
      do
      {
        *(_WORD *)v6 = 0;
        v6 = (__int128 *)((char *)v6 + 40);
        *((_WORD *)v6 - 19) = 0;
        *((_WORD *)v6 - 18) = 0;
        *((_DWORD *)v6 - 2) = 0;
        *((_WORD *)v6 - 17) = 0;
        *(v6 - 2) = 0;
        *((_QWORD *)v6 - 2) = 0;
      }
      while ( v8 != (_QWORD *)v6 );
      goto LABEL_6;
    }
    if ( (unsigned __int16)(v3 - 48) <= 5u )
    {
      v4 = &v7;
      do
      {
        *(_WORD *)v4 = 0;
        v4 = (__int128 *)((char *)v4 + 40);
        *((_WORD *)v4 - 19) = 0;
        *((_WORD *)v4 - 18) = 0;
        *((_DWORD *)v4 - 2) = 0;
        *((_WORD *)v4 - 17) = 0;
        *(v4 - 2) = 0;
        *((_QWORD *)v4 - 2) = 0;
      }
      while ( v4 != (__int128 *)v8 );
LABEL_6:
      decode_insn();
    }
  }
  return 0;
}

