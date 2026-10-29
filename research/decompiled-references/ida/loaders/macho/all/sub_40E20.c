unsigned __int64 __fastcall sub_40E20(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+44h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)qgetenv() )
    *a1 = strtoull(nullptr, nullptr, 16);
  else
    *a1 = -*(_QWORD *)(a2 + 696);
  return v3 - __readfsqword(0x28u);
}

