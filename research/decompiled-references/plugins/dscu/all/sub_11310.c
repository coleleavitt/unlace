unsigned __int64 __fastcall sub_11310(_QWORD *a1, double a2, __m128i a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( (unsigned __int64)netnode_altval(a1[13], 0, 65) <= 1
    && (unsigned __int8)sub_107D0(a1, (unsigned __int64)"Updating module info", 1, a2, a3, a4, a5) )
  {
    v6 = a1[13];
    v7 = 2;
    netnode_supset(v6, 0, &v7, 8, 65);
  }
  return v8 - __readfsqword(0x28u);
}
