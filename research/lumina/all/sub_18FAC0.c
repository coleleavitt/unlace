unsigned __int64 __fastcall sub_18FAC0(signed int a1, const char *a2)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // rbp
  char *v4; // r13
  char *v5; // rax
  unsigned __int64 result; // rax
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (unsigned int)a1 > 3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(481);
    BUG();
  }
  v2 = __readfsqword(0);
  v3 = (__int64 *)(24LL * a1 + 32 + v2 - 256);
  v4 = (char *)*v3;
  if ( a2 )
  {
    if ( *a2 )
    {
      v7 = strlen(a2);
      v8 = v7;
      if ( v7 )
      {
        v9 = v7 + 1;
        if ( v3[2] < v7 + 1 )
        {
          v11 = sub_1987B0(v3, v4, v7 + 1, 1);
          *v3 = v11;
          v4 = (char *)v11;
        }
        v3[1] = v9;
        memmove(v4, a2, v8);
        *(_BYTE *)(*v3 + v8) = 0;
        v4 = (char *)*v3;
      }
      else
      {
        v3[1] = 0;
      }
    }
    else
    {
      if ( (unsigned __int64)v3[2] <= 1 )
      {
        v10 = sub_1987B0(24LL * a1 + 32 + v2 - 256, *v3, 2, 1);
        *v3 = v10;
        v4 = (char *)v10;
      }
      v3[1] = 2;
      *v4 = 32;
      *(_BYTE *)(*v3 + 1) = 0;
      v5 = &byte_241B38;
      if ( v3[1] )
        v5 = (char *)*v3;
      *v5 = 0;
      v4 = (char *)*v3;
    }
  }
  else
  {
    if ( v4 )
    {
      v3[1] = 0;
      j__free(v4);
      *v3 = 0;
      v3[2] = 0;
    }
    v4 = nullptr;
  }
  result = __readfsqword(0);
  *(_QWORD *)(result + 8LL * a1 - 256) = v4;
  return result;
}
