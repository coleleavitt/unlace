__int64 sub_4DE0()
{
  unsigned int v0; // ebp
  char v2[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v0 = 1;
  v3 = __readfsqword(0x28u);
  getinf_buf(1, v2, 16);
  if ( strncasecmp(v2, "68K", 3u)
    && strncasecmp(v2, "68000", 5u)
    && strncasecmp(v2, "68010", 5u)
    && strncasecmp(v2, "68020", 5u)
    && strncasecmp(v2, "68030", 5u)
    && strncasecmp(v2, "68040", 5u)
    && strncasecmp(v2, "68330", 5u)
    && strncasecmp(v2, "68882", 5u)
    && strncasecmp(v2, "68851", 5u) )
  {
    LOBYTE(v0) = strncasecmp(v2, "ColdFire", 8u) == 0;
  }
  return v0;
}

