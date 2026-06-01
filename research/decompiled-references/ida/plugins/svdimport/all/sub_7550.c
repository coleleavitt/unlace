__int64 __fastcall sub_7550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx

  qmakepath();
  v7 = qisdir();
  if ( (_BYTE)v7 )
    return 1;
  v8 = v7;
  if ( !(unsigned int)qmkdir() )
  {
    return 1;
  }
  else
  {
    qstrerror();
    sub_7490(a6);
  }
  return v8;
}

