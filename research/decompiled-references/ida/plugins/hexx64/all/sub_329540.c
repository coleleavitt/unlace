__int64 __fastcall sub_329540(__int64 *a1, __int64 a2, char *a3, int a4, char a5, __int64 a6, double a7)
{
  char v10; // al
  signed __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  v14[0] = -1;
  v10 = sub_11FD80(a3, v14, 0);
  v11 = v14[0];
  if ( v10 )
  {
    v12 = v14[0] * a4;
    if ( v12 >= v14[0] && (int)v12 == v12 )
    {
      v11 = v14[0] * a4;
    }
    else
    {
      v11 = -1;
      v12 = -1;
    }
    v14[0] = v12;
  }
  return sub_3293B0(a1, a2, v11, a5, a6, a7);
}

