__int64 __fastcall sub_1430(double a1, double a2, __int64 a3, int a4, int a5, unsigned __int8 a6, int a7)
{
  __int64 v7; // r15
  int v8; // ebx
  int v9; // r14d
  __int64 selector; // r12
  unsigned int v12; // [rsp+8h] [rbp-70h]
  int v13; // [rsp+Ch] [rbp-6Ch]
  char v14[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !((unsigned int)(a5 + 0xFFFF) >> 16) )
    return 0;
  v7 = 0;
  v13 = a6;
  v8 = a6;
  v12 = ((unsigned int)(a5 + 0xFFFF) >> 16) + a6;
  v9 = a4 + a7;
  do
  {
    if ( (unsigned int)(v8 - 126) > 1 )
    {
      if ( !(unsigned int)file2base() )
        sub_1270((__int64)"Failed mapping 0x%x -> [0x%a, 0x%a)\n", v9, a1, a2);
      selector = allocate_selector();
      qsnprintf((__int64)v14, 16, ".%02X");
      if ( !(unsigned __int8)add_segm() )
        sub_1270((__int64)"Failed adding .BANK segment\n", (unsigned int)(v8 << 16));
      if ( v13 == v8 )
        v7 = selector;
    }
    ++v8;
    v9 += 0x10000;
  }
  while ( v8 != v12 );
  return v7;
}

