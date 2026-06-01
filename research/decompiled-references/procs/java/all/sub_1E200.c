__int64 __fastcall sub_1E200(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  result = a2;
  if ( (a2 & 0xBBBE0000) == 0 )
  {
    v3 = HIWORD(a2);
    sub_1DFC0(a1, &v3, *(_QWORD *)(a1 + 33352) + 2LL * (unsigned __int16)a2);
    return (unsigned __int16)a2 | (v3 << 16);
  }
  return result;
}
