unsigned __int64 __fastcall sub_1F08B0(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  const char *v3; // rcx
  unsigned __int64 result; // rax

  v3 = s1;
  if ( a1[63] )
    v3 = (const char *)a1[62];
  result = sub_3311F0(a1, a2, a3, v3);
  a1[63] = 0;
  return result;
}

