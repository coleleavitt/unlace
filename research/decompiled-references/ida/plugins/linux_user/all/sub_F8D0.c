__int64 __fastcall sub_F8D0(__int64 a1, char *a2, unsigned __int64 a3)
{
  int v4; // eax
  int v6; // r13d
  char v7[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v8; // [rsp+1008h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  qsnprintf();
  v4 = readlink(v7, a2, a3 - 1);
  if ( v4 > 0 )
  {
    a2[v4] = 0;
    return 1;
  }
  if ( qfopen() )
  {
    v6 = qfread();
    qfclose();
    if ( v6 > 1 && v6 < a3 && *a2 == 47 )
    {
      a2[v6] = 0;
      return 1;
    }
  }
  *a2 = 0;
  return 0;
}

