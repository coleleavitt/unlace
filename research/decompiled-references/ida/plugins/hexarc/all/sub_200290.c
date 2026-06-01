__int64 __fastcall sub_200290(__int64 a1, int **a2)
{
  __int64 result; // rax
  char v3; // dl
  unsigned int v4; // [rsp+0h] [rbp-18h] BYREF
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  result = *(unsigned int *)(a1 + 4);
  v4 = result;
  if ( (_DWORD)result == -1 )
    return 1;
  if ( (int **)a1 == a2 + 4 || (int **)a1 == a2 + 6 )
  {
    v3 = sub_117C00(a2, &v5, &v4, 0);
    result = v4;
    if ( v3 )
    {
      result = v5 + v4;
      if ( (int)result <= 0 )
        return *(unsigned int *)(a1 + 4);
    }
  }
  return result;
}

