char __fastcall sub_D760(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  char result; // al
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 96);
  v5 = __readfsqword(0x28u);
  qlseek(*(_QWORD *)(a1 + 48), v1, 0);
  v2 = qlread(*(_QWORD *)(a1 + 48), &v4, 4);
  result = 0;
  if ( v2 == 4 )
  {
    result = v4 == -1095041334 || v4 == -889275714;
    if ( result )
    {
      return sub_8530(a1);
    }
    else if ( (unsigned int)(v4 + 17958194) <= 1 || (v4 & 0xFEFFFFFF) == 0xCEFAEDFE )
    {
      return 1;
    }
    else if ( (*(_BYTE *)(a1 + 480) & 1) == 0 )
    {
      return sub_D3C0((__int64 *)a1);
    }
  }
  return result;
}
