unsigned __int64 __fastcall sub_CD190(unsigned __int8 *a1, int a2, unsigned __int8 a3)
{
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  if ( a2 )
    sub_CAFA0(a1, (double *)&v4, a2, a3);
  return __readfsqword(0x28u) ^ v5;
}
