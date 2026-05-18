__int64 __fastcall sub_CB760(char *a1, int *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  __int64 result; // rax
  int *v6; // r10
  int v7; // edx
  unsigned __int64 v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = (unsigned __int8)a1[1];
  v8[1] = __readfsqword(0x28u);
  v3 = (unsigned __int8)*a1;
  if ( (v2 & 0x80u) == 0 )
  {
    *a2 = v2 | ((v3 & 0x7F) << 7);
    return 2;
  }
  else
  {
    v4 = (unsigned __int8)a1[2] | (v3 << 14);
    if ( (v4 & 0x80u) == 0 )
    {
      *a2 = v4 & 0x1FC07F | ((v2 & 0x7F) << 7);
      return 3;
    }
    else
    {
      result = sub_C2860(a1, v8);
      v7 = v8[0];
      if ( v8[0] != LODWORD(v8[0]) )
        v7 = -1;
      *v6 = v7;
    }
  }
  return result;
}
