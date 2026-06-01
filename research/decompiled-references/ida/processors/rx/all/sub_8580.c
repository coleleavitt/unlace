__int64 sub_8580()
{
  unsigned __int64 *v0; // rax
  char v2; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v3; // [rsp+168h] [rbp-20h] BYREF

  v3 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v2;
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
  while ( &v3 != v0 );
  decode_prev_insn();
  return 0;
}

