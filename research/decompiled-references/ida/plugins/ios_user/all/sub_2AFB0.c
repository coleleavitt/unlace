char __fastcall sub_2AFB0(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  int v3; // [rsp+4h] [rbp-14h]

  qlseek();
  v1 = qlread();
  result = 0;
  if ( v1 == 4 )
  {
    result = v3 == -1095041334 || v3 == -889275714;
    if ( result )
    {
      return sub_283D0(a1);
    }
    else if ( (unsigned int)(v3 + 17958194) <= 1 || (v3 & 0xFEFFFFFF) == 0xCEFAEDFE )
    {
      return 1;
    }
    else if ( (*(_BYTE *)(a1 + 480) & 1) == 0 )
    {
      return sub_2AC10((_QWORD *)a1);
    }
  }
  return result;
}

