__int64 sub_788C0()
{
  char *v0; // rax
  char v2; // [rsp+28h] [rbp-2F0h] BYREF
  char v3; // [rsp+168h] [rbp-1B0h] BYREF
  unsigned __int64 v4; // [rsp+2D8h] [rbp-40h]

  v4 = __readfsqword(0x28u);
  v0 = &v2;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 40;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *((_QWORD *)v0 - 2) = 0;
  }
  while ( &v3 != v0 );
  decode_insn();
  return 0;
}
