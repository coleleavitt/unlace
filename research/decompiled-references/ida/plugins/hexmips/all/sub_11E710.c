__int64 __fastcall sub_11E710(__int64 a1, int *a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  int v4; // edx
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)a1 == 10 && *(_BYTE *)(a1 + 32) == 4 )
  {
    v3 = *(_DWORD **)(a1 + 40);
    if ( (unsigned int)(*v3 - 23) <= 1 )
    {
      result = sub_14E430(v3, &v5);
      if ( (_BYTE)result )
      {
        v4 = v5;
        if ( (v5 & 7) != 0 )
        {
          return 0;
        }
        else if ( a2 )
        {
          if ( v5 < 0 )
            v4 = v5 + 7;
          *a2 = v4 >> 3;
        }
      }
    }
  }
  return result;
}

