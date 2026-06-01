__int64 __fastcall sub_62C0(__int64 *a1)
{
  __int64 v1; // r14
  char *v2; // rax
  char v4; // [rsp+28h] [rbp-580h] BYREF
  char v5; // [rsp+168h] [rbp-440h] BYREF
  unsigned __int64 v6; // [rsp+578h] [rbp-30h]

  v1 = *a1;
  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_5B40(v1) )
    a1[2] |= 2uLL;
  v2 = &v4;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( &v5 != v2 );
  decode_insn();
  return 0;
}

