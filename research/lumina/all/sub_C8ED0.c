__int64 sub_C8ED0()
{
  __int64 v0; // rax
  int v1; // eax

  memset(&qword_2421A0, 0, 0x90u);
  if ( qword_2415B8 )
  {
    dword_2421F4 = (_BYTE)word_241484 != 0;
    if ( (_BYTE)word_241484 )
      goto LABEL_3;
  }
  else
  {
    dword_2421F4 = 1;
    if ( (_BYTE)word_241484 )
    {
LABEL_3:
      qword_2421A0 = xmmword_2414F0(6);
      if ( (_BYTE)word_241484 )
        v0 = xmmword_2414F0(7);
      else
        v0 = 0;
      qword_242218 = v0;
      if ( !dword_2421F4 )
        goto LABEL_8;
      v1 = dword_2415C4;
      if ( !dword_2415C4 || qword_2415B8 )
        goto LABEL_8;
LABEL_12:
      dword_2421F8 = v1;
      goto LABEL_9;
    }
    v1 = dword_2415C4;
    if ( dword_2415C4 )
      goto LABEL_12;
  }
LABEL_8:
  dword_2421F8 = 0;
LABEL_9:
  dword_2421B0 = 10;
  dword_2421F0 = 1;
  return 0;
}
