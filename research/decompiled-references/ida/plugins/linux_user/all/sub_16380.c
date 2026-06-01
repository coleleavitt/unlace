__int64 __fastcall sub_16380(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  __int64 v7; // rax
  const char *v8; // rdi
  const char *v10; // rcx
  _UNKNOWN **v11; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h]
  _QWORD *v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  unsigned __int64 v16; // [rsp+28h] [rbp-10h]

  v6 = *a3 == -1;
  v16 = __readfsqword(0x28u);
  v7 = a3[3];
  if ( v6 )
  {
    v10 = s;
    if ( v7 )
      v10 = (const char *)a3[2];
    return sub_32190(a1, (unsigned int)"Can't import symbols from %s: no imagebase\n", (_DWORD)v10, (_DWORD)v10, a5, a6);
  }
  else
  {
    v13 = a1;
    v8 = s;
    v12 = 49;
    v11 = &off_44DA0;
    v14 = a3;
    v15 = a2;
    if ( v7 )
      v8 = (const char *)a3[2];
    ((void (__fastcall *)(const char *, _UNKNOWN ***, _QWORD))sub_2DD30)(v8, &v11, 0);
    return v16 - __readfsqword(0x28u);
  }
}

