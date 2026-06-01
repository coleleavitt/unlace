__int64 __fastcall sub_48C40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rax
  char v4; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-20h] BYREF

  v5 = __readfsqword(0x28u);
  result = *(unsigned __int8 *)(a2 + 5);
  if ( *(_BYTE *)(a2 + 1) == 1 && (unsigned __int8)result <= 1u )
  {
    v3 = (unsigned __int64 *)&v4;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v5 != v3 );
    decode_prev_insn();
    return *(unsigned __int8 *)(a2 + 5);
  }
  return result;
}
