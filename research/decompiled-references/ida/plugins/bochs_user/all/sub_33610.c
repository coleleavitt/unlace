__int64 __fastcall sub_33610(__int64 a1, double a2, double a3)
{
  void *v3; // rbp
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  const char *v9; // rsi
  const char *v10; // rbp
  unsigned int v11; // ebp
  __int64 v13; // rbp
  const char *v14; // rax
  const char *v15; // rdx
  void *v16; // [rsp+0h] [rbp-1058h]
  size_t v17; // [rsp+8h] [rbp-1050h]
  char v18[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v19; // [rsp+1028h] [rbp-30h]

  v3 = *(void **)(a1 + 2704);
  v19 = __readfsqword(0x28u);
  if ( v3 )
  {
    sub_43ED0(v3);
    operator delete(v3, 0x19C8u);
  }
  v4 = (const char *)idadir();
  v16 = nullptr;
  v5 = v4;
  v17 = 0;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    v9 = v5;
    v16 = (void *)qvector_reserve();
    v17 = v7;
    v10 = "bochsys.dll";
    memmove(v16, v9, v8);
    *((_BYTE *)v16 + v8) = 0;
    if ( !*(_BYTE *)(a1 + 2714) )
      v10 = "bochsys32.dll";
  }
  else
  {
    v10 = "bochsys.dll";
    if ( !*(_BYTE *)(a1 + 2714) )
      v10 = "bochsys32.dll";
  }
  qmakepath();
  if ( (unsigned __int8)qfileexist() )
  {
    v11 = sub_335D0(a1, 0.0, a3);
    if ( !v11 )
    {
      v13 = operator new(0x19C8u);
      sub_43DA0(v13, *(_QWORD *)(a1 + 2768), *(_QWORD *)(a1 + 1200), a1 + 1208, a1);
      *(_QWORD *)(a1 + 2704) = v13;
      v11 = sub_45DA0(v13, v18);
      if ( v11 )
      {
        v14 = (const char *)sub_44660(*(_QWORD *)(a1 + 2704));
        sub_EB00((__int64)"%s", v14);
      }
    }
  }
  else
  {
    v15 = s1;
    if ( v17 )
      v15 = (const char *)v16;
    sub_EB00((__int64)"AUTOHIDE NONE\nFailed to initialize because <%s> is not found in <%s>", v10, v15);
    v11 = 28;
  }
  if ( v16 )
    qfree();
  return v11;
}

