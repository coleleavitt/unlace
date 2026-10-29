__int64 __fastcall sub_18EFA0(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  unsigned __int8 *v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v6[1] = (unsigned __int8 *)__readfsqword(0x28u);
  v6[0] = v2;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      v4 = sub_18ECE0(v6);
      if ( !v4 )
      {
        v2 = v6[0];
        result = v3;
        goto LABEL_8;
      }
      if ( v4 == -1 )
        ++v6[0];
      --v3;
    }
    while ( v3 );
    v2 = v6[0];
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_8:
  *a1 = v2;
  return result;
}
