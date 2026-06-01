__int64 __fastcall sub_540B0(int a1, int *a2, int *a3, __int64 a4, int a5)
{
  int v5; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  bool v10; // zf
  const char *v11; // rax
  const char *v12; // rdx
  __int64 result; // rax
  int v14; // edx
  const char *v15; // rax
  const char *v16; // rdx
  int v17; // edx
  const char *v18; // rdx
  const char *v19; // rdx

  v5 = *a3;
  if ( *a3 >= 0 )
  {
    v7 = *a2;
    if ( *a2 < 0 )
    {
      sub_70460(a1, (unsigned int)"GDB:   cpuid detected (%d)\n", v5, v5, a5);
      v7 = *a3;
    }
    else if ( v5 != v7 )
    {
      sub_70460(a1, (unsigned int)"GDB:   cpuid mismatch (was '%d' is '%d')\n", v7, v5, a5);
      v7 = *a3;
    }
    *a2 = v7;
  }
  v8 = a3[1];
  if ( v8 >= 0 )
  {
    v9 = a2[1];
    if ( v9 < 0 )
    {
      v18 = "32-bit";
      if ( v8 )
        v18 = "64-bit";
      sub_70460(a1, (unsigned int)"GDB:   bitness detected (%s)\n", (_DWORD)v18, v5, a5);
      v9 = a3[1];
    }
    else if ( v8 != v9 )
    {
      v10 = v8 == 0;
      v11 = "32-bit";
      if ( !v10 )
        v11 = "64-bit";
      v10 = v9 == 0;
      v12 = "32-bit";
      if ( !v10 )
        v12 = "64-bit";
      sub_70460(a1, (unsigned int)"GDB:   bitness mismatch (was '%s' is '%s')\n", (_DWORD)v12, (_DWORD)v11, a5);
      v9 = a3[1];
    }
    a2[1] = v9;
  }
  result = (unsigned int)a3[2];
  if ( (int)result >= 0 )
  {
    v14 = a2[2];
    if ( v14 < 0 )
    {
      v19 = "little-endian";
      if ( (_DWORD)result )
        v19 = "big-endian";
      result = sub_70460(a1, (unsigned int)"GDB:   endianness detected (%s)\n", (_DWORD)v19, v5, a5);
      v14 = a3[2];
    }
    else if ( (_DWORD)result != v14 )
    {
      v10 = (_DWORD)result == 0;
      v15 = "little-endian";
      if ( !v10 )
        v15 = "big-endian";
      v10 = v14 == 0;
      v16 = "little-endian";
      if ( !v10 )
        v16 = "big-endian";
      result = sub_70460(
                 a1,
                 (unsigned int)"GDB:   endianness mismatch (was '%s' is '%s')\n",
                 (_DWORD)v16,
                 (_DWORD)v15,
                 a5);
      v14 = a3[2];
    }
    a2[2] = v14;
  }
  v17 = a3[3];
  if ( v17 >= 0 )
  {
    sub_70460(a1, (unsigned int)"GDB:   flags detected (0x%X)\n", v17, v5, a5);
    result = (unsigned int)a3[3];
    a2[3] |= result;
  }
  return result;
}

