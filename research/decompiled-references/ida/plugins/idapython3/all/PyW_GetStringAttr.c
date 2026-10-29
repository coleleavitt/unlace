__int64 __fastcall PyW_GetStringAttr(__int64 a1, void **p_src, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void **v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rbp
  size_t v17; // r12
  void *v18; // r14
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbx
  __int64 *v21; // [rsp+0h] [rbp-48h] BYREF
  void *src; // [rsp+8h] [rbp-40h] BYREF
  size_t n[7]; // [rsp+10h] [rbp-38h] BYREF

  n[1] = __readfsqword(0x28u);
  v8 = p_src;
  LODWORD(p_src) = a1;
  PyW_TryGetAttrString(&v21, a1, v8);
  if ( !v21 )
    return 0;
  if ( ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v21[1]) & 0x10000000) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v21);
    v16 = v15;
    if ( v15 )
    {
      p_src = &src;
      src = nullptr;
      n[0] = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v15, &src, n) >= 0 )
      {
        v17 = n[0];
        v18 = src;
        *(_QWORD *)(a3 + 8) = 0;
        p_src = *(void ***)a3;
        if ( *(_QWORD *)(a3 + 16) < v17 + 1 )
        {
          v19 = qvector_reserve();
          *(_QWORD *)a3 = v19;
          p_src = (void **)v19;
        }
        *(_QWORD *)(a3 + 8) = v17 + 1;
        *((_BYTE *)p_src + v17) = 0;
        LODWORD(p_src) = (_DWORD)v18;
        memmove(*(void **)a3, v18, v17);
        (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v16);
        v13 = 1;
        goto LABEL_4;
      }
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v16);
    }
  }
  v13 = 0;
LABEL_4:
  if ( v21 )
  {
    if ( *v21 <= 0 )
    {
      v20 = (struct _Unwind_Exception *)sub_6C20((__int64)v21, (int)p_src, v9, v10, v11, v12, (char)v21);
      sub_6DF0(v21, (int)p_src, v3, v4, v5, v6);
      _Unwind_Resume(v20);
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  return v13;
}

