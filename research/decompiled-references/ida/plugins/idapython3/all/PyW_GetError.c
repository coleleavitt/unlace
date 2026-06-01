__int64 __fastcall PyW_GetError(void **a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void **p_src; // rsi
  void **v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  size_t v38; // r14
  __int64 v39; // rsi
  void **v40; // r8
  __m128i si128; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  struct _Unwind_Exception *v44; // rbp
  char v45; // [rsp+0h] [rbp-88h]
  void **v46; // [rsp+8h] [rbp-80h]
  void **v47; // [rsp+18h] [rbp-70h] BYREF
  void **v48; // [rsp+20h] [rbp-68h] BYREF
  __int64 v49; // [rsp+28h] [rbp-60h] BYREF
  __int64 *v50; // [rsp+30h] [rbp-58h] BYREF
  void *src; // [rsp+38h] [rbp-50h] BYREF
  size_t n[9]; // [rsp+40h] [rbp-48h] BYREF

  n[1] = __readfsqword(0x28u);
  if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
  {
    if ( !a1 )
    {
      if ( a2 )
        (*(void (**)(void))(qword_24798 + 400))();
      return 1;
    }
    (*(void (__fastcall **)(void ***, void ***, __int64 *))(qword_24798 + 408))(&v47, &v48, &v49);
    p_src = (void **)qword_24778;
    if ( qword_24778 )
    {
      PyW_TryGetAttrString(&v50, qword_24778, "IDAPython_FormatExc");
      v17 = v48;
      v18 = qword_24798;
      if ( v50 )
      {
        p_src = v47;
        v19 = (*(__int64 (__fastcall **)(__int64 *, void **, void **, __int64, _QWORD))(qword_24798 + 728))(
                v50,
                v47,
                v48,
                v49,
                0);
        v20 = (__int64 *)v19;
        if ( v19 )
        {
          v21 = (__int64 *)v19;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v19);
          if ( *v20 <= 0 )
          {
LABEL_41:
            sub_6C20((__int64)v21, (int)p_src, v22, v23, v24, v25, v45);
LABEL_42:
            v44 = (struct _Unwind_Exception *)sub_6C20((__int64)v21, (int)p_src, v34, v35, v36, v37, v45);
            sub_6DF0(v20, (int)p_src, v2, v3, v4, v5);
            sub_6DF0(v50, (int)p_src, v6, v7, v8, v9);
            sub_6DF0(v20, (int)p_src, v10, v11, v12, v13);
            _Unwind_Resume(v44);
          }
          goto LABEL_7;
        }
        v18 = qword_24798;
        v17 = v48;
      }
    }
    else
    {
      v50 = nullptr;
      v18 = qword_24798;
      v17 = v48;
    }
    v33 = (*(__int64 (__fastcall **)(void **))(v18 + 808))(v17);
    v20 = (__int64 *)v33;
    if ( !v33 )
    {
      p_src = (void **)*a1;
      if ( (unsigned __int64)a1[2] <= 0x18 )
      {
        v42 = qvector_reserve();
        *a1 = (void *)v42;
        p_src = (void **)v42;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1D910);
      a1[1] = &qword_18 + 1;
      p_src[2] = (void *)0x726F727265206E77LL;
      *(__m128i *)p_src = si128;
      *((_BYTE *)*a1 + 24) = 0;
LABEL_10:
      v31 = v49;
      if ( a2 )
      {
        if ( v49 )
          (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v49);
        if ( v48 )
          (*(void (__fastcall **)(void **, void **, __int64))(qword_24798 + 984))(v48, p_src, v31);
        if ( v47 )
          (*(void (__fastcall **)(void **, void **, __int64))(qword_24798 + 984))(v47, p_src, v31);
      }
      else
      {
        p_src = v48;
        (*(void (__fastcall **)(void **, void **, __int64))(qword_24798 + 440))(v47, v48, v49);
      }
      v21 = v50;
      if ( v50 )
      {
        if ( *v50 <= 0 )
        {
          sub_6C20((__int64)v50, (int)p_src, v31, v27, v28, v29, v45);
LABEL_40:
          sub_6C20((__int64)v21, (int)p_src, v31, v27, v28, v29, v45);
          goto LABEL_41;
        }
        (*(void (__fastcall **)(__int64 *, void **, __int64))(qword_24798 + 984))(v50, p_src, v31);
      }
      if ( !v20 )
        return 1;
      if ( *v20 > 0 )
      {
        (*(void (__fastcall **)(__int64 *, void **, __int64))(qword_24798 + 984))(v20, p_src, v31);
        return 1;
      }
      goto LABEL_40;
    }
    v21 = (__int64 *)v33;
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v33);
    if ( *v20 <= 0 )
      goto LABEL_42;
LABEL_7:
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v20);
    v26 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v20);
    v30 = v26;
    if ( v26 )
    {
      p_src = &src;
      src = nullptr;
      n[0] = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v26, &src, n) >= 0 )
      {
        v38 = n[0];
        v39 = (__int64)*a1;
        a1[1] = nullptr;
        v40 = (void **)src;
        if ( (unsigned __int64)a1[2] < v38 + 1 )
        {
          v46 = (void **)src;
          v43 = qvector_reserve();
          *a1 = (void *)v43;
          v40 = v46;
          v39 = v43;
        }
        a1[1] = (void *)(v38 + 1);
        *(_BYTE *)(v39 + v38) = 0;
        p_src = v40;
        memmove(*a1, v40, v38);
      }
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v30);
    }
    goto LABEL_10;
  }
  return 0;
}

