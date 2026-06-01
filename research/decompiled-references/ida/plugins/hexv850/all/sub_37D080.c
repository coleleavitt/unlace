unsigned __int64 __fastcall sub_37D080(__int64 a1, int a2)
{
  char *path; // rax
  char v4; // dl
  char *v5; // rcx
  char v6; // si
  __int64 v8; // rsi
  char v9; // r12
  char v10; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v11; // [rsp+1038h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  qmutex_lock();
  qmutex_unlock();
  if ( !qword_4C2AC0[a2] )
  {
    if ( a2 == 1 )
    {
      v9 = qfileexist();
      qword_4C2AC8 = qfopen();
      if ( !qword_4C2AC8 )
        return v11 - __readfsqword(0x28u);
      if ( !v9 )
        sub_62040();
    }
    else
    {
      qword_4C2AC0[0] = qfopen();
      if ( !qword_4C2AC0[0] )
        return v11 - __readfsqword(0x28u);
    }
  }
  qgetcwd();
  path = (char *)get_path();
  v4 = v10;
  v5 = &v10;
  v6 = *path;
  if ( *path == v10 )
  {
    while ( v4 )
    {
      v4 = v5[1];
      v6 = path[1];
      ++v5;
      ++path;
      if ( v4 != v6 )
        goto LABEL_13;
    }
    if ( v6 == 47 )
      goto LABEL_9;
    goto LABEL_7;
  }
LABEL_13:
  if ( !v4 )
  {
    if ( v6 == 47 )
      goto LABEL_9;
LABEL_7:
    if ( v6 == 92 )
      goto LABEL_9;
  }
  get_path();
LABEL_9:
  qstrncpy();
  strrpl();
  sub_62040();
  if ( !a2 )
  {
    time(nullptr);
    qstrftime();
    sub_62040();
    v8 = *(_QWORD *)(a1 + 416);
    if ( v8 == -1 )
      v8 = *(_QWORD *)(a1 + 408);
    sub_37CD80(1, v8);
  }
  qvfprintf();
  qflush();
  return v11 - __readfsqword(0x28u);
}

