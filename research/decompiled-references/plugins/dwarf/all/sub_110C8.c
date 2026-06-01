__int64 __fastcall sub_110C8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v6; // [rsp-8h] [rbp-18h]

  v6 = a3;
  if ( _bittest(&debug, 0x16u) )
  {
    v3 = qtime64();
    if ( (debug & 0x400000) != 0 )
      sub_88B80(
        (unsigned int)"init_file(this=%p), phase \"%s\" took %u.%06u seconds\n",
        (_DWORD)a1,
        *a1,
        (unsigned __int64)(v3 - a1[1]) >> 32,
        v3 - *((_DWORD *)a1 + 2),
        v4,
        v6);
  }
  return v6;
}
