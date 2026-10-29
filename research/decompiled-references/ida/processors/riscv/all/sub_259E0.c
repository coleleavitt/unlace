__int64 __fastcall sub_259E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 segm_name; // rax
  char *v6; // rbp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) == 18 && (v4 = getseg(a2)) != 0 )
  {
    s1 = nullptr;
    v8 = 0;
    segm_name = get_segm_name(&s1, v4, 0);
    v6 = s1;
    v2 = 0;
    if ( segm_name > 0 )
    {
      if ( (_QWORD)v8 )
      {
        v2 = 1;
        if ( strcmp(s1, ".got") )
        {
          if ( strcmp(v6, ".text")
            && strcmp(v6, ".rodata")
            && strcmp(v6, ".got.plt")
            && strcmp(v6, ".plt")
            && strcmp(v6, ".init")
            && strcmp(v6, ".fini")
            && strcmp(v6, ".preinit_array")
            && strcmp(v6, ".init_array") )
          {
            LOBYTE(v2) = strcmp(v6, ".fini_array") == 0;
          }
        }
      }
    }
    if ( v6 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v6);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

