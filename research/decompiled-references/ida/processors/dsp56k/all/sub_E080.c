unsigned __int64 __fastcall sub_E080(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 *v4; // rax
  char v5; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v6 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 256) != v2 )
  {
    v4 = (unsigned __int64 *)&v5;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 5;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *(v4 - 2) = 0;
    }
    while ( &v6 != v4 );
    decode_insn();
  }
  return v6 - __readfsqword(0x28u);
}

