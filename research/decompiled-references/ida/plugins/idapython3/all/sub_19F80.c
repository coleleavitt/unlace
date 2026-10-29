__int64 __fastcall sub_19F80(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 *v17; // rdi
  __m128i v18; // xmm0
  __int64 *v19; // rdi
  unsigned int v20; // r12d
  _QWORD *v21; // rax
  __int64 v22; // r13
  __int64 i; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i si128; // xmm0
  __int64 v39; // rax
  struct _Unwind_Exception *v40; // rbx
  __int64 **v41; // [rsp+0h] [rbp-88h]
  char v42; // [rsp+17h] [rbp-71h] BYREF
  __int64 *v43; // [rsp+18h] [rbp-70h] BYREF
  __int64 *v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v45; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+38h] [rbp-50h]
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]

  v41 = a2;
  v48 = __readfsqword(0x28u);
  v11 = (*(__int64 (**)(void))(qword_24798 + 536))();
  if ( !a4 )
  {
    v16 = *a7;
    if ( (unsigned __int64)a7[2] <= 0x2B )
    {
      v39 = qvector_reserve();
      *a7 = v39;
      v16 = v39;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D990);
    a7[1] = 44;
    v20 = 0;
    *(__m128i *)v16 = si128;
    *(__m128i *)(v16 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D9A0);
    *(__m128i *)(v16 + 27) = _mm_load_si128((const __m128i *)&xmmword_1D9B0);
    *(_BYTE *)(*a7 + 43) = 0;
    goto LABEL_25;
  }
  if ( !a3 )
  {
    setup_new_execution(&v46, 1);
    v16 = 0;
    v20 = sub_16D80(a1, v41, a4, a5, a6, a7);
    setup_new_execution(&v46, 0);
    goto LABEL_25;
  }
  v46 = nullptr;
  v43 = nullptr;
  v47 = 0;
  if ( (int)idcvar_to_pyvar(a3, &v43, 0) <= 0 )
  {
    v16 = *a7;
    if ( (unsigned __int64)a7[2] <= 0x2E )
    {
      v30 = qvector_reserve();
      *a7 = v30;
      v16 = v30;
    }
    v18 = _mm_load_si128((const __m128i *)&xmmword_1D9C0);
    a7[1] = 47;
    *(__m128i *)v16 = v18;
    *(__m128i *)(v16 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D9D0);
    *(__m128i *)(v16 + 30) = _mm_load_si128((const __m128i *)&xmmword_1D9E0);
    *(_BYTE *)(*a7 + 46) = 0;
    goto LABEL_13;
  }
  PyW_TryGetAttrString(&v44, v43, a4);
  if ( !v44 || !(*(unsigned int (**)(void))(qword_24798 + 328))() )
  {
    v16 = (__int64)"The input object does not have a callable method called '%s'";
    sub_14130(a7);
LABEL_7:
    v17 = v44;
    if ( !v44 )
    {
LABEL_13:
      v19 = v43;
      if ( v43 )
      {
        if ( *v43 <= 0 )
          goto LABEL_53;
        (*(void (__fastcall **)(__int64 *, __int64))(qword_24798 + 984))(v43, v16);
      }
      v20 = 0;
      goto LABEL_17;
    }
    if ( *v44 > 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(qword_24798 + 984))(v44, v16);
      goto LABEL_13;
    }
LABEL_58:
    v40 = (struct _Unwind_Exception *)sub_6C20((__int64)v17, v16, v12, v13, v14, v15, (char)v41);
    setup_new_execution(&v46, 0);
    (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v11);
    _Unwind_Resume(v40);
  }
  if ( !strcmp(a4, "run") && (PyW_TryImportModule(&v45, "ida_idaapi"), LODWORD(v16) = (_DWORD)v45, v45) )
  {
    if ( (unsigned __int8)sub_C350((__int64)v43, (__int64)v45, (__int64)"plugin_t")
      || (LODWORD(v16) = (_DWORD)v45,
          v29 = 1,
          (unsigned __int8)sub_C350((__int64)v43, (__int64)v45, (__int64)"plugmod_t")) )
    {
      v29 = 3;
    }
    v17 = v45;
    if ( v45 )
    {
      if ( *v45 <= 0 )
      {
LABEL_56:
        sub_6C20((__int64)v17, v16, v25, v26, v27, v28, (char)v41);
        goto LABEL_57;
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  else
  {
    v29 = 1;
  }
  v16 = a6;
  if ( !(unsigned __int8)pyw_convert_idc_args(a5, a6, &v46, v29, a7) )
    goto LABEL_7;
  setup_new_execution(&v42, 1);
  v31 = 0;
  if ( (_QWORD)v47 )
    v31 = *v46;
  v32 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 744))(v44, v31);
  v16 = (__int64)&v45;
  v45 = v32;
  LOBYTE(v33) = sub_15D90((__int64)v41, &v45, a7);
  v17 = v45;
  v20 = v33;
  if ( v45 )
  {
    if ( *v45 <= 0 )
    {
LABEL_57:
      sub_6C20((__int64)v17, v16, v34, v35, v36, v37, (char)v41);
      goto LABEL_58;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  v16 = 0;
  setup_new_execution(&v42, 0);
  v17 = v44;
  if ( v44 )
  {
    if ( *v44 <= 0 )
    {
LABEL_55:
      sub_6C20((__int64)v17, 0, v12, v13, v14, v15, (char)v41);
      goto LABEL_56;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  v17 = v43;
  if ( !v43 )
    goto LABEL_17;
  if ( *v43 <= 0 )
  {
    sub_6C20((__int64)v43, 0, v12, v13, v14, v15, (char)v41);
    goto LABEL_55;
  }
  (*(void (**)(void))(qword_24798 + 984))();
LABEL_17:
  v21 = v46;
  if ( v46 )
  {
    v22 = v47;
    if ( (_QWORD)v47 )
    {
      for ( i = 0; v22 != i; ++i )
      {
        v19 = (__int64 *)v21[i];
        if ( v19 )
        {
          if ( *v19 <= 0 )
          {
            sub_6C20((__int64)v19, v16, v12, v13, v14, v15, (char)v41);
LABEL_53:
            sub_6C20((__int64)v19, v16, v12, v13, v14, v15, (char)v41);
          }
          (*(void (__fastcall **)(__int64 *, __int64))(qword_24798 + 984))(v19, v16);
          v21 = v46;
        }
      }
    }
    *(_QWORD *)&v47 = 0;
    qfree();
  }
LABEL_25:
  (*(void (__fastcall **)(_QWORD, __int64))(qword_24798 + 552))(v11, v16);
  return v20;
}

