__int64 __fastcall PyW_GetNumberAsIDC(__int64 a1, __int64 a2)
{
  unsigned int Number; // ebx
  __int64 v3; // r12
  char v5; // [rsp+Fh] [rbp-29h] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  Number = PyW_GetNumber(a1, v6, &v5);
  if ( (_BYTE)Number )
  {
    v3 = v6[0];
    if ( v5 )
    {
      free_idcv();
      *(_BYTE *)a2 = 9;
    }
    else
    {
      free_idcv();
      *(_BYTE *)a2 = 2;
    }
    *(_QWORD *)(a2 + 8) = v3;
  }
  return Number;
}

