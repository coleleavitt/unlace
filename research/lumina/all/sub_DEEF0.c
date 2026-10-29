__int64 *__fastcall sub_DEEF0(__int64 a1, int a2, const char *a3)
{
  int v3; // eax
  const char *v5; // [rsp+10h] [rbp-28h] BYREF
  int v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v3 = 0;
  v5 = a3;
  if ( a3 )
    v3 = strlen(a3) & 0x3FFFFFFF;
  v6 = v3;
  return sub_DEC00(a1, a2, (__int64)&v5, 0);
}
