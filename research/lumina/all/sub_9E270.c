__int64 __fastcall sub_9E270(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rdx
  _BYTE *v6; // r12
  char v7; // al
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (unsigned __int64)&(*a2)[a3];
  if ( !v4 )
  {
    if ( (unsigned __int64)v3 >= v5 )
    {
      *(_BYTE *)(a1 + 9) = 0;
    }
    else
    {
      v6 = v3 + 1;
      v7 = *v3;
      v9[0] = v6;
      *(_BYTE *)(a1 + 9) = v7;
      *(_QWORD *)(a1 + 16) = sub_196FF0(v9, v5) - 1;
      if ( (unsigned __int64)v6 < v9[0] )
      {
        *a2 = (char *)v9[0];
        return 1;
      }
    }
  }
  return 0;
}
