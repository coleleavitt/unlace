__int64 sub_1AAF0()
{
  unsigned int v0; // ebx

  v0 = qfileexist();
  if ( !(_BYTE)v0 && !(unsigned __int8)qisabspath() )
    return (unsigned int)search_path();
  return v0;
}

