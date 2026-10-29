unsigned __int64 sub_30570()
{
  unsigned __int64 v1; // [rsp+418h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  qbasename();
  qstrncpy();
  qsplitfile();
  qmakepath();
  qstrncpy();
  qstrncat();
  qstrncat();
  return v1 - __readfsqword(0x28u);
}

