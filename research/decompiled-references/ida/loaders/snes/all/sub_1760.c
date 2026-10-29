__int64 __fastcall sub_1760(double a1, double a2, __int64 a3, int a4, int a5, unsigned __int8 a6)
{
  __int64 v7; // r15
  int v8; // ebp
  __int64 selector; // r12
  unsigned int v11; // [rsp+8h] [rbp-70h]
  int v12; // [rsp+Ch] [rbp-6Ch]
  char v13[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( !((unsigned int)(a5 + 0x7FFF) >> 15) )
    return 0;
  v7 = 0;
  v12 = a6;
  v8 = a6;
  v11 = ((unsigned int)(a5 + 0x7FFF) >> 15) + a6;
  do
  {
    if ( (unsigned int)(v8 - 126) > 1 )
    {
      if ( !(unsigned int)file2base() )
        sub_1270((__int64)"Failed mapping 0x%x -> [0x%a, 0x%a)\n", a4, a1, a2);
      selector = allocate_selector();
      qsnprintf((__int64)v13, 16, ".%02X");
      if ( !(unsigned __int8)add_segm() )
        sub_1270((__int64)"Failed adding .BANK segment\n", (unsigned int)((v8 << 16) + 0x8000));
      if ( v12 == v8 )
        v7 = selector;
    }
    ++v8;
    a4 += 0x8000;
  }
  while ( v8 != v11 );
  return v7;
}

