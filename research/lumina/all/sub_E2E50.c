unsigned __int64 __fastcall sub_E2E50(__int64 *a1, char *a2, int a3, unsigned int a4)
{
  int v6; // eax
  double v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = strlen(a2) & 0x3FFFFFFF;
    v8 = 0.0;
    if ( v6 )
    {
      sub_CAFA0((unsigned __int8 *)a2, &v8, v6, 1u);
      if ( !a3 )
        goto LABEL_4;
    }
    else if ( !a3 )
    {
LABEL_4:
      sub_E2DD0(a1, 153, a4, (__int64 *)&v8, 0xFFFFFFF4);
      return __readfsqword(0x28u) ^ v9;
    }
    v8 = -v8;
    goto LABEL_4;
  }
  return __readfsqword(0x28u) ^ v9;
}
