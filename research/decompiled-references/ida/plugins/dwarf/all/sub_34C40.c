unsigned __int64 __fastcall sub_34C40(__int64 a1)
{
  __int64 *v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v2 = sub_34340(a1);
    v7 = src;
    if ( v2[1] )
      v7 = (const char *)*v2;
    sub_88B80((unsigned int)"%s::preload()\n", (_DWORD)v7, v3, v4, v5, v6);
    v12 = 0;
    v13 = 0;
    if ( (debug & 0x400000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 112) == -1 || (*(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
        sub_88A30((unsigned int)&v12, (unsigned int)"", *(_DWORD *)(a1 + 112), v8, v9, v10);
      else
        sub_88A30((unsigned int)&v12, (unsigned int)"<%llu>: ", *(_DWORD *)(a1 + 112), v8, v9, v10);
    }
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  sub_81780(&v11, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL), a1 + 112);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  sub_81790(&v11);
  sub_81710(&v12);
  return v14 - __readfsqword(0x28u);
}

