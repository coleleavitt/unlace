__int64 __fastcall sub_D4A10(char *a1, char *a2, int a3)
{
  unsigned __int8 *v4; // rax
  unsigned int v5; // edx

  v4 = (unsigned __int8 *)sub_D4950(a1, a2);
  v5 = a3 != 0;
  if ( v4 )
    return (unsigned __int8)sub_D4840(v4, 1, v5) != 0;
  return v5;
}
