__int64 sub_BE70()
{
  const char *v0; // rbx
  unsigned int v1; // ebp
  const char *v2; // rcx

  getinf_flag();
  v0 = (const char *)qmakepath();
  v1 = qfileexist();
  if ( (debug & 0x10000) != 0 )
  {
    v2 = "not found";
    if ( (_BYTE)v1 )
      v2 = "FOUND!";
    sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", v0, v2);
  }
  return v1;
}

