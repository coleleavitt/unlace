__int64 sub_9480()
{
  unsigned __int64 *v0; // rax
  int v1; // edx
  __int64 result; // rax
  char v3; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v4; // [rsp+168h] [rbp-10h] BYREF

  v4 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v3;
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
  while ( &v4 != v0 );
  v1 = decode_insn();
  result = 0;
  if ( v1 > 0 )
    return 0;
  return result;
}

