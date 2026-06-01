unsigned __int8 __fastcall sub_355E0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int8 result; // al
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 24);
  v5[1] = __readfsqword(0x28u);
  v2 = (unsigned int)(v1 - 94);
  if ( (unsigned __int16)v2 > 0x2Au || (v3 = 0x50000000001LL, (result = _bittest64(&v3, v2)) == 0) )
  {
    result = sub_35530(v5, a1);
    if ( result )
      return v5[0] >= 0LL;
  }
  return result;
}
