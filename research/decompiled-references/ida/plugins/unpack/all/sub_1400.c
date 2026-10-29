__int64 __fastcall sub_1400(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  int v3; // ebx
  __int64 dword; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  int v12; // edx
  unsigned __int64 v13; // rax
  _DWORD v14[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a1 )
  {
    enable_auto();
    v2 = "A packed file is detected. Do you want to unpack it automatically?";
  }
  else if ( (unsigned __int8)sub_1280(v14, a2) )
  {
    enable_auto();
    LODWORD(a1) = 1;
    v2 = "A packed file is detected. Do you want to unpack it automatically?";
  }
  else
  {
    enable_auto();
    LODWORD(a1) = 0;
    v2 = "The input file is not packed with a known method. Continue anyway?";
  }
  v3 = sub_1320(a1, (__int64)"HIDECANCEL\n%s", v2);
  enable_auto();
  if ( v3 > 0 )
  {
    sub_1280(v14, (__int64)"HIDECANCEL\n%s");
    get_dword();
    dword = (unsigned int)get_dword();
    v6 = get_dword();
    v7 = v14[3];
    v8 = v6;
    v9 = getinf() + 70;
    v10 = v8 << 32;
    if ( (_DWORD)dword )
    {
      v11 = v9 + dword;
      while ( 1 )
      {
        v12 = 8;
        while ( 1 )
        {
          v13 = v10 >> 1;
          v10 >>= 1;
          if ( (v8 & 1) != 0 )
            v10 = ((unsigned __int64)(v7 ^ HIDWORD(v13)) << 32) | (unsigned int)v13;
          if ( !--v12 )
            break;
          LOBYTE(v8) = BYTE4(v10);
        }
        v10 = BYTE3(v13) | v10 & 0xFFFFFFFF00000000LL;
        get_byte();
        ++v9;
        put_byte();
        if ( v9 == v11 )
          break;
        LOBYTE(v8) = BYTE4(v10);
      }
    }
    setinf();
    setinf();
    add_entry();
  }
  return 1;
}

