__int64 sub_58CE0()
{
  qmakepath();
  if ( (unsigned __int8)qfileexist() )
    return 0;
  idadir();
  qmakepath();
  if ( (unsigned __int8)qfileexist() )
    return 0;
  else
    return 28;
}

