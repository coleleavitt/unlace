__int64 sub_3C400()
{
  unsigned __int64 *v0; // rax
  char v2; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v3; // [rsp+168h] [rbp-30h] BYREF

  v3 = __readfsqword(0x28u);
  sub_3BA80();
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
  if ( (unsigned __int8)is_mapped() )
    decode_insn();
  return 0;
}
