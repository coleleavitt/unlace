unsigned __int64 __fastcall sub_32C80(__int64 a1, char a2, __int64 a3, char a4, int a5, int a6)
{
  const char *v8; // rsi
  char v9; // cl
  int v10; // r8d
  int v11; // r9d
  char v12; // al
  void (__fastcall ***v13)(_QWORD); // rdi
  char v14; // bp
  const char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-70h] BYREF
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v22; // [rsp+10h] [rbp-60h]
  int v23; // [rsp+20h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v23 = -1;
  ptr = nullptr;
  v22 = 0;
  if ( a2 )
  {
    v8 = s1;
    if ( *(_QWORD *)(a3 + 8) )
      v8 = *(const char **)a3;
    sub_16B870((unsigned int)"Executing: \"%s\"\n", (_DWORD)v8, a3, a4, a5, a6);
  }
  unk_241E58(&v20, a1);
  if ( !v20 )
    goto LABEL_13;
  v12 = unk_241E68(&v20, &ptr);
  v13 = (void (__fastcall ***)(_QWORD))v20;
  v14 = v12;
  if ( v20 )
  {
    if ( (*(_DWORD *)(v20 + 8))-- == 1 )
      (**v13)(v13);
  }
  if ( !v14 )
  {
LABEL_13:
    v17 = s1;
    if ( !a4 )
    {
      if ( (_QWORD)v22 )
        v17 = (const char *)ptr;
      v19 = s1;
      if ( *(_QWORD *)(a3 + 8) )
        v19 = *(const char **)a3;
      sub_2F260((__int64)"Error executing '%s': %s\n", v19, v17);
    }
    if ( (_QWORD)v22 )
      LODWORD(v17) = (_DWORD)ptr;
    v18 = s1;
    if ( *(_QWORD *)(a3 + 8) )
      v18 = *(const char **)a3;
    sub_16B870((unsigned int)"Error executing '%s': %s\n", (_DWORD)v18, (_DWORD)v17, v9, v10, v11);
  }
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    j__free(ptr);
  }
  return v24 - __readfsqword(0x28u);
}
