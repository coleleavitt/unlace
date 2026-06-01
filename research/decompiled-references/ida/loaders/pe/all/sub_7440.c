__int64 __fastcall sub_7440(__int64 a1, __int64 a2, const char *a3, __int64 a4, char a5)
{
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a5 )
    return import_module();
  import_module();
  if ( !*(_DWORD *)(a1 + 4)
    && (!strcasecmp(a3, "ntdll") || !strcasecmp(a3, "hal") || !strcasecmp(a3, "ntoskrnl") || !strcasecmp(a3, "win32k")) )
  {
    netnode_supset();
  }
  return v7 - __readfsqword(0x28u);
}
