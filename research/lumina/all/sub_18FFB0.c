__int64 __fastcall sub_18FFB0(char a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = __readfsqword(0);
  v2 = *(unsigned __int8 *)(v1 - 4);
  *(_BYTE *)(v1 - 4) = a1;
  return v2;
}
