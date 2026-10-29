__int64 __fastcall sub_363D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v9; // rax

  v4 = a4[1];
  v6 = v4 + 3;
  if ( v4 >= 0xFFFFFFFFFFFFFFFDLL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( a4[2] < v6 )
  {
    v9 = qvector_reserve();
    *a4 = v9;
    memset((void *)(v9 + a4[1]), 0, v6 - a4[1]);
  }
  else
  {
    memset((void *)(*a4 + a4[1]), 0, 3u);
  }
  v7 = *a4;
  a4[1] = v6;
  *(_WORD *)(v7 + v4) = -5172;
  *(_BYTE *)(v7 + v4 + 2) = -2;
  return 0;
}

