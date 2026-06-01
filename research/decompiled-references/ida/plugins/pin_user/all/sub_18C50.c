__int64 __fastcall sub_18C50(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 result; // rax
  bool v6; // zf
  const char *v7; // rax
  const char *v8; // rax

  v3 = a3;
  *(_BYTE *)(a1 + 1289) = 0;
  v4 = sub_26190(*(_QWORD *)(a1 + 24), a2, a3, 0xFFFFFFFFLL);
  if ( v4 < v3 )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v6 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v6 && !*(_BYTE *)(a1 + 81) )
      {
        v7 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v7);
      }
    }
  }
  result = 1;
  if ( v3 != v4 )
  {
    v8 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
    sub_BDA0((__int64)"Failed to receive pin response: error %s\n", v8);
    return 0;
  }
  return result;
}

