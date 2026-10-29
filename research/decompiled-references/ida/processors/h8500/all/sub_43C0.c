unsigned __int64 __fastcall sub_43C0(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 *v3; // rdx
  char v4; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-20h] BYREF

  v5 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 16) & 2) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v1 )
    {
      do
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
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
          decode_insn();
        }
      }
      while ( next_head() < v1 );
    }
  }
  return v5 - __readfsqword(0x28u);
}

