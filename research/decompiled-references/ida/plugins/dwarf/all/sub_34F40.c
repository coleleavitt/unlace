__int64 __fastcall sub_34F40(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v3 = sub_34340(a1);
    v8 = src;
    if ( v3[1] )
      v8 = (const char *)*v3;
    sub_88B80((unsigned int)"%s::load()\n", (_DWORD)v8, v4, v5, v6, v7);
    v13 = 0;
    v14 = 0;
    if ( (debug & 0x400000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 112) == -1 || (*(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
        sub_88A30((unsigned int)&v13, (unsigned int)"", *(_DWORD *)(a1 + 112), v9, v10, v11);
      else
        sub_88A30((unsigned int)&v13, (unsigned int)"<%llu>: ", *(_DWORD *)(a1 + 112), v9, v10, v11);
    }
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  sub_81780(&v12, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL), a1 + 112);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_81790(&v12);
  sub_81710(&v13);
  return v1;
}

