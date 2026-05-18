char *__fastcall sub_2C580(int a1, int a2)
{
  char *result; // rax
  char *v3; // rdi
  __int64 v4; // rax

  if ( a2 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(540);
LABEL_14:
    BUG();
  }
  if ( a1 < (unsigned __int64)xmmword_2428C8 )
  {
    v3 = (char *)qword_2428C0 + 16 * a1;
    if ( (unsigned int)a2 < *(_DWORD *)v3 )
    {
      v4 = *(unsigned int *)(*((_QWORD *)v3 + 1) + 4LL * a2);
      if ( (_DWORD)v4 )
        return (char *)qword_2428D8 + v4 + 2;
    }
  }
  if ( !unk_241B10 )
    return nullptr;
  result = (char *)qword_2428D8;
  if ( qword_2428D8 )
  {
    if ( !unk_2439A0 )
      sub_198E10(543);
    goto LABEL_14;
  }
  return result;
}
