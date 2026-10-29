__int64 __fastcall sub_22040(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  if ( ((a5 - a4) & 0xFFF) == 0 && (unsigned int)(a5 - a4) > 0x3000 )
  {
    file2base();
    if ( qlseek() >= 0 && qlread() == 4 )
      sub_196C0((__int64)"Unknown encryption type: %x. The file will not be decrypted.");
  }
  return 0;
}

