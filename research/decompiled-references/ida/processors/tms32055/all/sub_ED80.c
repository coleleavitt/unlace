__int64 __fastcall sub_ED80(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int8 byte; // al
  unsigned __int64 *v6; // rax
  char v7; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  v2 = *(unsigned __int16 *)(a1 + 26);
  v3 = v2 + *(_QWORD *)(a1 + 8);
  if ( (unsigned __int16)v2 <= 3u )
  {
    byte = get_byte();
    if ( byte <= 0x5Fu && (byte & 1) != 0 )
    {
      v6 = (unsigned __int64 *)&v7;
      do
      {
        *(_WORD *)v6 = 0;
        v6 += 5;
        *((_WORD *)v6 - 19) = 0;
        *((_WORD *)v6 - 18) = 0;
        *((_DWORD *)v6 - 2) = 0;
        *((_WORD *)v6 - 17) = 0;
        *((_OWORD *)v6 - 2) = 0;
        *(v6 - 2) = 0;
      }
      while ( &v8 != v6 );
      v3 += (int)decode_insn();
    }
  }
  return v3;
}

