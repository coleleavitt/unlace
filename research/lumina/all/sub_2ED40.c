void __fastcall sub_2ED40(const char *src)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // r12
  void *v5; // rdi

  if ( src )
  {
    v2 = strlen(src);
    v3 = v2;
    if ( v2 )
    {
      v4 = v2 + 1;
      v5 = qword_241AD8;
      if ( *((_QWORD *)&xmmword_241AE0 + 1) < v2 + 1 )
      {
        qword_241AD8 = (void *)sub_1987B0(&qword_241AD8, qword_241AD8, v2 + 1, 1);
        v5 = qword_241AD8;
      }
      *(_QWORD *)&xmmword_241AE0 = v4;
      memmove(v5, src, v3);
      *((_BYTE *)qword_241AD8 + v3) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_241AE0 = 0;
    }
  }
  else
  {
    *(_QWORD *)&xmmword_241AE0 = 0;
  }
}
