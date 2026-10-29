__int64 __fastcall sub_E420(char *s2, int a2, int a3, const void *a4)
{
  __int64 v6; // rdi
  __int64 module_data; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rbx
  __int64 result; // rax
  size_t v13; // rbp
  int v14; // eax
  void *v15; // rbp
  __int64 v16; // r12
  void *v17; // rax
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64); // rax
  size_t v20; // rax
  size_t v21; // rbp
  size_t v22; // r14
  struct _Unwind_Exception *v23; // rbx
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)dword_48824;
  v26 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( !module_data )
    goto LABEL_38;
  v9 = module_data;
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v10 == sub_BCB0 )
  {
    v11 = v9 + 272;
    if ( s2 )
      goto LABEL_4;
LABEL_9:
    src = nullptr;
    v25 = 0;
    v13 = *(_QWORD *)(v11 + 1272);
    if ( v13 )
    {
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v11 + 1272);
      src = (void *)qalloc_or_throw();
      memcpy(src, *(const void **)(v11 + 1264), v13);
      *(_QWORD *)&v25 = v13;
    }
    v14 = sub_D730(
            (__int64)"ARM Mac OS Debugger Options\n"
                     "%/<#Path to symbol files extracted from dyld_shared_cache#~S~ymbol path:q:1023:60::>\n",
            0,
            &src);
    v15 = src;
    if ( v14 )
    {
      if ( (void **)(v11 + 1264) != &src )
      {
        v16 = v25;
        if ( (unsigned __int64)v25 < 2 )
        {
          *(_QWORD *)(v11 + 1272) = 0;
          v15 = src;
        }
        else
        {
          v17 = *(void **)(v11 + 1264);
          if ( *(_QWORD *)(v11 + 1280) < (unsigned __int64)v25 )
          {
            v17 = (void *)qvector_reserve();
            *(_QWORD *)(v11 + 1264) = v17;
          }
          *(_QWORD *)(v11 + 1272) = v16;
          memmove(v17, v15, v16 - 1);
          *(_BYTE *)(*(_QWORD *)(v11 + 1264) + v16 - 1) = 0;
          v15 = src;
        }
      }
      byte_48828 = 1;
      if ( v15 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
        return 0;
      }
    }
    else if ( src )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    return 0;
  }
  v11 = v10(v9);
  if ( !s2 )
    goto LABEL_9;
LABEL_4:
  if ( !*s2 )
  {
    if ( !(unsigned __int8)netnode_inited() )
      return 0;
    netnode_check();
    if ( !(unsigned __int8)netnode_exist() )
      return 0;
    v18 = get_module_data();
    v6 = v18;
    if ( v18 )
    {
      v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL);
      if ( v19 != sub_BCB0 )
        ((void (__fastcall *)(__int64, const char *))v19)(v6, "$ remote mac arm options");
      netnode_qsupstr();
      return 0;
    }
LABEL_38:
    v23 = (struct _Unwind_Exception *)sub_BE10(v6);
    if ( src )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    _Unwind_Resume(v23);
  }
  if ( strcmp("SYMBOL_PATH", s2) )
    return 1;
  result = 2;
  if ( a3 == 1 )
  {
    if ( a4 && (v20 = strlen((const char *)a4), (v21 = v20) != 0) )
    {
      v22 = v20 + 1;
      if ( *(_QWORD *)(v11 + 1280) < v20 + 1 )
        *(_QWORD *)(v11 + 1264) = qvector_reserve();
      *(_QWORD *)(v11 + 1272) = v22;
      memmove(*(void **)(v11 + 1264), a4, v21);
      *(_BYTE *)(*(_QWORD *)(v11 + 1264) + v21) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 1272) = 0;
    }
    if ( a2 == 2 )
    {
      byte_48828 = 1;
      return 0;
    }
    return 0;
  }
  return result;
}

