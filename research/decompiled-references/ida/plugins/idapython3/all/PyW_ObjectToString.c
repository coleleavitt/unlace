__int64 __fastcall PyW_ObjectToString(__int64 a1, void **p_src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r13d
  void **v7; // r12
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  size_t v18; // r14
  void *v19; // r8
  __int64 v20; // rax
  struct _Unwind_Exception *v21; // rbp
  char v22; // [rsp+0h] [rbp-68h]
  void *v23; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+18h] [rbp-50h] BYREF
  size_t n[9]; // [rsp+20h] [rbp-48h] BYREF

  n[1] = __readfsqword(0x28u);
  v7 = p_src;
  v8 = (*(__int64 (**)(void))(qword_24798 + 808))();
  LOBYTE(v6) = v8 != 0;
  if ( v8 )
  {
    v9 = (__int64 *)v8;
    v10 = v8;
    v11 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 944))(v8);
    v16 = v11;
    if ( v11 )
    {
      p_src = &src;
      src = nullptr;
      n[0] = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v11, &src, n) >= 0 )
      {
        v18 = n[0];
        v19 = src;
        v7[1] = nullptr;
        p_src = (void **)*v7;
        if ( (unsigned __int64)v7[2] < v18 + 1 )
        {
          v23 = v19;
          v20 = qvector_reserve();
          *v7 = (void *)v20;
          v19 = v23;
          p_src = (void **)v20;
        }
        v7[1] = (void *)(v18 + 1);
        *((_BYTE *)p_src + v18) = 0;
        LODWORD(p_src) = (_DWORD)v19;
        memmove(*v7, v19, v18);
      }
      v10 = v16;
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v16);
    }
    if ( *v9 <= 0 )
    {
      v21 = (struct _Unwind_Exception *)sub_6C20(v10, (int)p_src, v12, v13, v14, v15, v22);
      sub_6DF0(v9, (int)p_src, v2, v3, v4, v5);
      _Unwind_Resume(v21);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v9);
  }
  else
  {
    p_src[1] = nullptr;
  }
  return v6;
}

