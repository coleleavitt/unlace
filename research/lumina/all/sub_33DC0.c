__int64 __fastcall sub_33DC0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  const char *v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, __int64 *, __int64, _QWORD); // r8
  char v8; // al
  void (__fastcall ***v9)(_QWORD); // rdi
  char v10; // bl
  bool v11; // zf
  void (__fastcall ***v12)(_QWORD); // rdi
  void (__fastcall ***v13)(_QWORD); // rdi
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+4h] [rbp-5Ch] BYREF
  __int64 v17; // [rsp+8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-50h] BYREF
  void *ptr; // [rsp+18h] [rbp-48h] BYREF
  __int128 v20; // [rsp+20h] [rbp-40h]
  unsigned __int64 v21; // [rsp+30h] [rbp-30h]

  v3 = *a2;
  v21 = __readfsqword(0x28u);
  v16 = 0;
  ptr = nullptr;
  v20 = 0;
  (*(void (__fastcall **)(__int64 *, void **))(v3 + 16))(a2, &ptr);
  v5 = s1;
  if ( (_QWORD)v20 )
    v5 = (const char *)ptr;
  sub_318B0((__int64)&v17, a1, v5);
  v6 = v17;
  if ( v17 )
  {
    v7 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD))(*a2 + 32);
    ++*(_DWORD *)(v17 + 8);
    v18 = v6;
    v8 = v7(a2, &v18, a3, 0);
    v9 = (void (__fastcall ***)(_QWORD))v18;
    v10 = v8;
    if ( v18 )
    {
      v11 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v11 )
        (**v9)(v9);
    }
    if ( v10 )
    {
      unk_241E60(&v18, &v17, a3);
      if ( v18 )
      {
        if ( (unsigned __int8)unk_241E70(&v18, a3) )
          sub_2F910(a3, (__int64)&v18, (__int64)"u", &v16);
        v12 = (void (__fastcall ***)(_QWORD))v18;
        if ( v18 )
        {
          v11 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v11 )
            (**v12)(v12);
        }
      }
    }
    v13 = (void (__fastcall ***)(_QWORD))v17;
    v14 = v16;
    if ( v17 )
    {
      v11 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v11 )
        (**v13)(v13);
    }
  }
  else
  {
    v14 = v16;
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    j__free(ptr);
  }
  return v14;
}
