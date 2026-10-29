__int64 __fastcall sub_27730(int a1, int *a2, int *a3, __int64 a4, int a5, int a6)
{
  int v6; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  bool v11; // zf
  const char *v12; // rax
  const char *v13; // rdx
  __int64 result; // rax
  int v15; // edx
  const char *v16; // rax
  const char *v17; // rdx
  int v18; // edx
  const char *v19; // rdx
  const char *v20; // rdx

  v6 = *a3;
  if ( *a3 >= 0 )
  {
    v8 = *a2;
    if ( *a2 < 0 )
    {
      sub_48620(a1, (unsigned int)"GDB:   cpuid detected (%d)\n", v6, v6, a5, a6);
      v8 = *a3;
    }
    else if ( v6 != v8 )
    {
      sub_48620(a1, (unsigned int)"GDB:   cpuid mismatch (was '%d' is '%d')\n", v8, v6, a5, a6);
      v8 = *a3;
    }
    *a2 = v8;
  }
  v9 = a3[1];
  if ( v9 >= 0 )
  {
    v10 = a2[1];
    if ( v10 < 0 )
    {
      v19 = "32-bit";
      if ( v9 )
        v19 = "64-bit";
      sub_48620(a1, (unsigned int)"GDB:   bitness detected (%s)\n", (_DWORD)v19, v6, a5, a6);
      v10 = a3[1];
    }
    else if ( v9 != v10 )
    {
      v11 = v9 == 0;
      v12 = "32-bit";
      if ( !v11 )
        v12 = "64-bit";
      v11 = v10 == 0;
      v13 = "32-bit";
      if ( !v11 )
        v13 = "64-bit";
      sub_48620(a1, (unsigned int)"GDB:   bitness mismatch (was '%s' is '%s')\n", (_DWORD)v13, (_DWORD)v12, a5, a6);
      v10 = a3[1];
    }
    a2[1] = v10;
  }
  result = (unsigned int)a3[2];
  if ( (int)result >= 0 )
  {
    v15 = a2[2];
    if ( v15 < 0 )
    {
      v20 = "little-endian";
      if ( (_DWORD)result )
        v20 = "big-endian";
      result = sub_48620(a1, (unsigned int)"GDB:   endianness detected (%s)\n", (_DWORD)v20, v6, a5, a6);
      v15 = a3[2];
    }
    else if ( (_DWORD)result != v15 )
    {
      v11 = (_DWORD)result == 0;
      v16 = "little-endian";
      if ( !v11 )
        v16 = "big-endian";
      v11 = v15 == 0;
      v17 = "little-endian";
      if ( !v11 )
        v17 = "big-endian";
      result = sub_48620(
                 a1,
                 (unsigned int)"GDB:   endianness mismatch (was '%s' is '%s')\n",
                 (_DWORD)v17,
                 (_DWORD)v16,
                 a5,
                 a6);
      v15 = a3[2];
    }
    a2[2] = v15;
  }
  v18 = a3[3];
  if ( v18 >= 0 )
  {
    sub_48620(a1, (unsigned int)"GDB:   flags detected (0x%X)\n", v18, v6, a5, a6);
    result = (unsigned int)a3[3];
    a2[3] |= result;
  }
  return result;
}

