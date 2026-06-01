__int64 __fastcall sub_A2A0(int a1, int a2)
{
  int v3; // ecx
  unsigned int *v4; // rax
  int v5; // esi
  int v6; // esi
  int v7; // edx
  unsigned int v9; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  if ( (unsigned int)(a1 - 16) > 0xF )
  {
    v3 = a1;
    v4 = &v9;
  }
  else
  {
    v3 = a1 - 16;
    v4 = (unsigned int *)((char *)&v9 + 2);
  }
  v5 = a2 >> 2;
  if ( a2 <= 3 )
    v5 = 1;
  v6 = v3 + v5;
  do
  {
    if ( v3 > 15 )
      break;
    v7 = 1 << v3++;
    *(_WORD *)v4 |= v7;
  }
  while ( v3 != v6 );
  return v9;
}

