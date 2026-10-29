unsigned __int64 __fastcall sub_37E200(__int64 a1, int a2)
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
  if ( !qword_4CF900[a2] )
  {
    if ( a2 == 1 )
    {
      v9 = qfileexist();
      qword_4CF908 = qfopen();
      if ( !qword_4CF908 )
        return v11 - __readfsqword(0x28u);
      if ( !v9 )
        sub_628C0();
    }
    else
    {
      qword_4CF900[0] = qfopen();
      if ( !qword_4CF900[0] )
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
  sub_628C0();
  if ( !a2 )
  {
    time(nullptr);
    qstrftime();
    sub_628C0();
    v8 = *(_QWORD *)(a1 + 416);
    if ( v8 == -1 )
      v8 = *(_QWORD *)(a1 + 408);
    sub_37DF00(1, v8);
  }
  qvfprintf();
  qflush();
  return v11 - __readfsqword(0x28u);
}

