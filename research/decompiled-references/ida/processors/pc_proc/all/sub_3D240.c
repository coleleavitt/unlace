__int64 sub_3D240()
{
  unsigned __int64 *v0; // rax
  unsigned int v1; // ebx
  char v3; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v4; // [rsp+168h] [rbp-40h] BYREF

  v4 = __readfsqword(0x28u);
  sub_3CA80();
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
  v1 = is_mapped();
  if ( !(_BYTE)v1 || !(unsigned int)decode_insn() )
    return 0;
  return v1;
}

