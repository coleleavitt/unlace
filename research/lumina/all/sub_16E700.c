void __fastcall sub_16E700(__int64 a1)
{
  const char *v1; // rbp
  FILE *v2; // rax
  const char *v3; // rax

  if ( (unsigned __int64)xmmword_2426C0 > 1 )
  {
    v1 = (const char *)qword_2426B8;
    v2 = (FILE *)sub_196930(qword_2426B8);
    *(_QWORD *)(a1 + 160) = v2;
    if ( v2 )
    {
      sub_16B960(v2);
    }
    else
    {
      v3 = (const char *)sub_18FFF0(-1);
      sub_16B870((__int64)"Cannot open log file \"%s\": %s\n", v1, v3);
    }
  }
}
