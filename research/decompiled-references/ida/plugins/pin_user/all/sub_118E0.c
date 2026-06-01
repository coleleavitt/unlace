__int64 __fastcall sub_118E0(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // eax

  v4 = a1 + 952;
  result = sub_18920(a1 + 952, a3, a4);
  if ( (_BYTE)result )
  {
    if ( a2 )
    {
      v6 = sub_188A0(v4);
      return sub_1C500(v4, a2, v6);
    }
  }
  return result;
}

