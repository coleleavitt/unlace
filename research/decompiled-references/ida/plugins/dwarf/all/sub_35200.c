__int64 __fastcall sub_35200(__int64 a1)
{
  unsigned int v1; // ebp
  char *v2; // r12
  __int64 *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi
  __int64 *v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  struct _Unwind_Exception *v18; // rbx
  char v19; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int128 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v9 = sub_34340(a1);
    v14 = src;
    if ( v9[1] )
      v14 = (const char *)*v9;
    sub_88B80((unsigned int)"%s::process()\n", (_DWORD)v14, v10, v11, v12, v13);
    v20 = 0;
    v21 = 0;
    if ( (debug & 0x400000) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a1 + 112) == -1 )
        sub_88A30((unsigned int)&v20, (unsigned int)"", *(_DWORD *)(a1 + 112), v15, v16, v17);
      else
        sub_88A30((unsigned int)&v20, (unsigned int)"<%llu>: ", *(_DWORD *)(a1 + 112), v15, v16, v17);
    }
  }
  else
  {
    v20 = 0;
    v21 = 0;
  }
  sub_81780(&v19, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL), a1 + 112);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( (debug & 0x400000) != 0 )
  {
    if ( (unsigned __int8)v1 > 5u )
    {
      v18 = (struct _Unwind_Exception *)sub_28400();
      sub_81790(&v19);
      sub_81710(&v20);
      _Unwind_Resume(v18);
    }
    v2 = off_C8400[(unsigned __int8)v1];
    v3 = sub_34340(a1);
    v7 = src;
    if ( v3[1] )
      v7 = (const char *)*v3;
    sub_88B80((unsigned int)"%s::process() => %s\n", (_DWORD)v7, (_DWORD)v2, v4, v5, v6);
  }
  sub_81790(&v19);
  sub_81710(&v20);
  return v1;
}

