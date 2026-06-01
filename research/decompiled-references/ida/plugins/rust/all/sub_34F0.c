__int64 __fastcall sub_34F0(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax
  __int64 (__fastcall ***v4)(__int64); // rbx
  _QWORD *v5; // r12
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // r12
  void (__fastcall *v10)(_QWORD *); // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // r12
  void (__fastcall *v14)(_QWORD *); // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  _QWORD *v18; // r12
  void (__fastcall *v19)(_QWORD *); // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64); // rax
  char v24; // al
  __int64 (__fastcall **v25)(__int64); // rdi
  __int64 (__fastcall **v26)(__int64); // rdi
  __int64 (__fastcall **v27)(__int64); // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  void *v31; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v32; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v32 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(v1 + 4);
  if ( v3 == 13 )
  {
    sub_6140(&v31);
    v4 = (__int64 (__fastcall ***)(__int64))v31;
    v18 = *(_QWORD **)(a1 + 192);
    v31 = nullptr;
    *(_QWORD *)(a1 + 192) = v4;
    if ( !v18 )
      goto LABEL_44;
    v19 = *(void (__fastcall **)(_QWORD *))(*v18 + 40LL);
    if ( v19 == sub_2A50 )
    {
      v20 = v18[5];
      *v18 = off_9A58;
      if ( v20 )
      {
        v18[6] = 0;
        qfree(v20);
      }
      v21 = v18[2];
      if ( v21 )
      {
        v18[3] = 0;
        qfree(v21);
      }
      operator delete(v18, 0x50u);
    }
    else
    {
      v19(v18);
    }
    v9 = v31;
    if ( !v31 )
      goto LABEL_58;
    v10 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v31 + 40LL);
    if ( v10 != sub_2A50 )
      goto LABEL_57;
    v22 = *((_QWORD *)v31 + 5);
    *(_QWORD *)v31 = off_9A58;
    if ( v22 )
    {
      v9[6] = 0;
      qfree(v22);
    }
    v12 = v9[2];
    if ( !v12 )
      goto LABEL_43;
LABEL_42:
    v9[3] = 0;
    qfree(v12);
LABEL_43:
    operator delete(v9, 0x50u);
    v4 = *(__int64 (__fastcall ****)(__int64))(a1 + 192);
    goto LABEL_44;
  }
  if ( v3 == 72 )
  {
    sub_5D80(&v31);
    v4 = (__int64 (__fastcall ***)(__int64))v31;
    v13 = *(_QWORD **)(a1 + 192);
    v31 = nullptr;
    *(_QWORD *)(a1 + 192) = v4;
    if ( !v13 )
      goto LABEL_44;
    v14 = *(void (__fastcall **)(_QWORD *))(*v13 + 40LL);
    if ( v14 == sub_2A50 )
    {
      v15 = v13[5];
      *v13 = off_9A58;
      if ( v15 )
      {
        v13[6] = 0;
        qfree(v15);
      }
      v16 = v13[2];
      if ( v16 )
      {
        v13[3] = 0;
        qfree(v16);
      }
      operator delete(v13, 0x50u);
    }
    else
    {
      v14(v13);
    }
    v9 = v31;
    if ( !v31 )
      goto LABEL_58;
    v10 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v31 + 40LL);
    if ( v10 != sub_2A50 )
      goto LABEL_57;
    v17 = *((_QWORD *)v31 + 5);
    *(_QWORD *)v31 = off_9A58;
    if ( v17 )
    {
      v9[6] = 0;
      qfree(v17);
    }
    v12 = v9[2];
    if ( !v12 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    return v32 - __readfsqword(0x28u);
  }
  sub_5A60(&v31);
  v4 = (__int64 (__fastcall ***)(__int64))v31;
  v5 = *(_QWORD **)(a1 + 192);
  v31 = nullptr;
  *(_QWORD *)(a1 + 192) = v4;
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(_QWORD *))(*v5 + 40LL);
    if ( v6 == sub_2A50 )
    {
      v7 = v5[5];
      *v5 = off_9A58;
      if ( v7 )
      {
        v5[6] = 0;
        qfree(v7);
      }
      v8 = v5[2];
      if ( v8 )
      {
        v5[3] = 0;
        qfree(v8);
      }
      operator delete(v5, 0x50u);
    }
    else
    {
      v6(v5);
    }
    v9 = v31;
    if ( !v31 )
      goto LABEL_58;
    v10 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v31 + 40LL);
    if ( v10 == sub_2A50 )
    {
      v11 = *((_QWORD *)v31 + 5);
      *(_QWORD *)v31 = off_9A58;
      if ( v11 )
      {
        v9[6] = 0;
        qfree(v11);
      }
      v12 = v9[2];
      if ( !v12 )
        goto LABEL_43;
      goto LABEL_42;
    }
LABEL_57:
    v10(v9);
LABEL_58:
    v4 = *(__int64 (__fastcall ****)(__int64))(a1 + 192);
  }
LABEL_44:
  if ( !v4 )
    return v32 - __readfsqword(0x28u);
  v23 = **v4;
  if ( v23 != sub_3440 )
    return v23((__int64)v4);
  v24 = getinf(3);
  v25 = v4[2];
  *((_DWORD *)v4 + 2) = 0;
  *((_BYTE *)v4 + 72) = (v24 & 4) != 0;
  if ( v25 )
  {
    v4[3] = nullptr;
    qfree(v25);
    v4[2] = nullptr;
    v4[4] = nullptr;
  }
  v26 = v4[5];
  if ( v26 )
  {
    v4[6] = nullptr;
    qfree(v26);
    v4[5] = nullptr;
    v4[7] = nullptr;
  }
  v27 = v4[3];
  v28 = *((unsigned int *)v4 + 2);
  *((_DWORD *)v4 + 3) = (_DWORD)v27;
  if ( (unsigned int)v28 <= 6 )
  {
    v29 = 84;
    if ( _bittest64(&v29, v28) )
      *((_DWORD *)v4 + 3) = *((_DWORD *)v4 + 12) + (_DWORD)v27;
  }
  return sub_3380(0x7D4u, v4 + 1, 112);
}

