__int64 sub_9200()
{
  unsigned __int64 *v0; // rax
  int v1; // edx
  __int64 result; // rax
  _BYTE *v3; // rdx
  int v4; // eax
  char v5; // [rsp+28h] [rbp-150h] BYREF
  _BYTE v6[319]; // [rsp+29h] [rbp-14Fh] BYREF
  unsigned __int64 v7; // [rsp+168h] [rbp-10h] BYREF

  v7 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v5;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v7 != v0 );
  v1 = decode_insn();
  result = -1;
  if ( v1 > 0 )
  {
    v3 = v6;
    v4 = 0;
    while ( *v3 != 7 )
    {
      ++v4;
      v3 += 40;
      if ( v4 == 8 )
        return -1;
    }
    return *(_QWORD *)&v6[40 * v4 + 15];
  }
  return result;
}

