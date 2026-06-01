__int64 __fastcall sub_48BE0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 **v4; // r12
  __int64 (__fastcall *v5)(__int64 **, _QWORD *); // rdx
  __int64 (*v6)(); // rax
  int v7; // r14d
  __int64 (*v8)(); // rdx
  __int64 *v9; // rax
  unsigned __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  void (****v21)(void); // r15
  __int64 v22; // r14
  _QWORD *v23; // r13
  void (***v24)(void); // rdx
  void (***v25)(void); // rsi
  bool v26; // zf
  void (**v27)(void); // rdx
  bool v28; // cf
  __int64 v29; // rdx
  int v30; // eax
  __int64 (__fastcall *v31)(__int64); // rdx
  int v32; // eax
  void (__fastcall *v33)(void *); // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  void (****v38)(void); // r15
  __int64 v39; // r13
  _QWORD *v40; // r14
  void (***v41)(void); // rdx
  void (***v42)(void); // rsi
  void (**v43)(void); // rdx
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64); // rdx
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  _QWORD v50[10]; // [rsp+18h] [rbp-50h] BYREF

  v3 = a1[5];
  v50[2] = __readfsqword(0x28u);
  v4 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 104) + 128LL))(
                     *(_QWORD *)(v3 + 104),
                     0,
                     0);
  v5 = (__int64 (__fastcall *)(__int64 **, _QWORD *))(*v4)[33];
  if ( (char *)v5 == (char *)sub_24FC0 )
  {
    v6 = (__int64 (*)())(*v4)[34];
    if ( v6 != sub_23EF0 )
    {
      v7 = ((__int64 (__fastcall *)(__int64 **))v6)(v4);
      v8 = *(__int64 (**)())(*a2 + 272LL);
      v34 = 1;
      if ( v8 == sub_23EF0 )
        goto LABEL_36;
      goto LABEL_39;
    }
    v7 = 1;
    v8 = *(__int64 (**)())(*a2 + 272LL);
    if ( v8 != v6 )
    {
LABEL_39:
      while ( 1 )
      {
        v34 = ((__int64 (__fastcall *)(_QWORD *))v8)(a2);
LABEL_36:
        if ( v34 == v7 )
          break;
        if ( under_debugger )
          goto LABEL_62;
        interr(30542);
      }
    }
    v9 = (__int64 *)a2[2];
    if ( !v9 || v4[2] )
    {
      if ( !under_debugger )
        interr(30492);
LABEL_62:
      BUG();
    }
    v4[2] = v9;
  }
  else
  {
    v5(v4, a2);
  }
  v10 = a1[5];
  v11 = sub_2EA20(v4);
  if ( v11 )
  {
    v12 = operator new(0x48u);
    *(_DWORD *)(v12 + 8) = 1;
    *(__m128i *)(v12 + 16) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(unsigned __int64)v4);
    *(_QWORD *)v12 = off_AA010;
    *(_QWORD *)(v12 + 32) = 0;
    *(_BYTE *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 64) = v11;
    *(_BYTE *)(v12 + 68) = 1;
    *(_OWORD *)(v12 + 40) = 0;
    if ( !v12 )
      return 0;
    v13 = a1[3];
    v14 = a1[2];
    v50[0] = v12;
    v15 = a1[4];
    v16 = a1 + 2;
    v17 = v13 + 1;
    if ( (unsigned __int64)v50 < v14 || (unsigned __int64)v50 >= v14 + 8 * v15 )
    {
      if ( v15 < v17 )
      {
        v35 = qvector_reserve(v16, 0, v13 + 1, 8);
        v36 = a1[4];
        v37 = a1[3];
        v47 = v35;
        a1[4] = v15;
        v38 = (void (****)(void))a1[2];
        v49 = v36;
        v39 = v37 - 1;
        if ( v39 >= 0 )
        {
          v40 = (_QWORD *)v35;
          do
          {
            v41 = *v38;
            *v40 = *v38;
            if ( v41 )
              ++*((_DWORD *)v41 + 2);
            v42 = *v38;
            if ( *v38 )
            {
              v26 = (*((_DWORD *)v42 + 2))-- == 1;
              if ( v26 )
              {
                v43 = **v38;
                if ( (char *)*v43 == (char *)sub_241E0 )
                {
                  if ( *v38 )
                    v43[20]();
                }
                else
                {
                  (*v43)();
                }
              }
            }
            ++v38;
            ++v40;
            v28 = v39-- == 0;
          }
          while ( !v28 );
          v38 = (void (****)(void))a1[2];
        }
        qfree(v38);
        v44 = a1[3];
        a1[4] = v49;
        v32 = *(_DWORD *)(v12 + 8);
        a1[2] = v47;
        *(_QWORD *)(v47 + 8 * v44) = v12;
        goto LABEL_52;
      }
    }
    else
    {
      v50[1] = v12;
      *(_DWORD *)(v12 + 8) = 2;
      if ( v15 < v17 )
      {
        v19 = qvector_reserve(v16, 0, v13 + 1, 8);
        v20 = a1[4];
        v21 = (void (****)(void))a1[2];
        a1[4] = v15;
        v46 = v19;
        v48 = v20;
        v22 = a1[3] - 1LL;
        if ( v22 >= 0 )
        {
          v23 = (_QWORD *)v19;
          do
          {
            v24 = *v21;
            *v23 = *v21;
            if ( v24 )
              ++*((_DWORD *)v24 + 2);
            v25 = *v21;
            if ( *v21 )
            {
              v26 = (*((_DWORD *)v25 + 2))-- == 1;
              if ( v26 )
              {
                v27 = **v21;
                if ( (char *)*v27 == (char *)sub_241E0 )
                {
                  if ( *v21 )
                    v27[20]();
                }
                else
                {
                  (*v27)();
                }
              }
            }
            ++v21;
            ++v23;
            v28 = v22-- == 0;
          }
          while ( !v28 );
          v21 = (void (****)(void))a1[2];
        }
        qfree(v21);
        v29 = a1[3];
        a1[4] = v48;
        v30 = *(_DWORD *)(v12 + 8);
        a1[2] = v46;
        *(_QWORD *)(v46 + 8 * v29) = v12;
        if ( !v30 )
        {
          v31 = **(__int64 (__fastcall ***)(__int64))v12;
          if ( v31 == sub_241E0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 160LL))(v12);
          else
            v31(v12);
          v30 = *(_DWORD *)(v12 + 8);
        }
        v32 = v30 - 1;
LABEL_52:
        ++a1[3];
        *(_DWORD *)(v12 + 8) = v32;
        if ( !v32 )
        {
          v45 = **(__int64 (__fastcall ***)(__int64))v12;
          if ( v45 == sub_241E0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 160LL))(v12);
          else
            v45(v12);
        }
        return 0;
      }
    }
    *(_QWORD *)(v14 + 8 * v13) = v12;
    ++a1[3];
    *(_DWORD *)(v12 + 8) = 1;
    return 0;
  }
  if ( v4 )
  {
    v33 = (void (__fastcall *)(void *))(*v4)[37];
    if ( v33 == sub_243F0 )
      operator delete(v4, 0x18u);
    else
      v33(v4);
  }
  return 0;
}

