__int64 __fastcall sub_2480(unsigned __int8 a1)
{
  __int64 result; // rax

  qfputc(a1, stream);
  ++dword_82B2;
  *(_BYTE *)(qword_82BA + (unsigned __int16)dword_82C2) = a1;
  result = (unsigned int)(unsigned __int16)dword_82C2 + 1;
  if ( (_WORD)dword_82C2 == 0x1FFF )
    result = 0;
  LOWORD(dword_82C2) = result;
  return result;
}

