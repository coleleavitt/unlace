__int64 __fastcall sub_336D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  const char *v7; // rdx
  __int64 v8; // rdx
  const char *v9; // rsi
  unsigned __int8 (__fastcall *v10)(__int64 *, __int64 *, __int64, __int64); // r8
  char v11; // al
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rbx
  void (__fastcall ***v15)(_QWORD, const char *); // rdi
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v5 = *a2;
  v21 = __readfsqword(0x28u);
  v20 = 0;
  ptr = nullptr;
  (*(void (__fastcall **)(__int64 *, void **))(v5 + 24))(a2, &ptr);
  v7 = s1;
  if ( (_QWORD)v20 )
    v7 = (const char *)ptr;
  sub_318B0((__int64)&v17, a1, v7);
  if ( !v17 )
  {
    LODWORD(v14) = 0;
    goto LABEL_15;
  }
  v8 = *a2;
  v18 = v17;
  v9 = (const char *)&v18;
  v10 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(v8 + 32);
  ++*(_DWORD *)(v17 + 8);
  if ( !v10(a2, &v18, a3, 1) )
  {
    v12 = v18;
    if ( !v18 )
      goto LABEL_11;
LABEL_19:
    v13 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v13 )
      (**(void (__fastcall ***)(__int64))v12)(v12);
    goto LABEL_11;
  }
  v9 = (const char *)a3;
  v11 = unk_241E68(&v17, a3);
  v12 = v18;
  if ( !v11 )
  {
    if ( !v18 )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( v18 )
  {
    v13 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v13 )
      (**(void (__fastcall ***)(__int64))v12)(v12);
  }
  v9 = (const char *)a3;
  v14 = unk_241EA0(a1 + 368);
  if ( !HIDWORD(v14) )
    goto LABEL_12;
  v9 = "ID overflow";
  sub_2DC20((__int64 *)a3, "ID overflow");
  *(_DWORD *)(a3 + 24) = -2;
LABEL_11:
  LODWORD(v14) = 0;
LABEL_12:
  v15 = (void (__fastcall ***)(_QWORD, const char *))v17;
  if ( v17 )
  {
    v13 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v13 )
      (**v15)(v15, v9);
  }
LABEL_15:
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    j__free(ptr);
  }
  return (unsigned int)v14;
}
