__int64 __fastcall sub_19A70(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r13d
  const char *v9; // rsi
  const char *v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  const void **v17; // rbx
  void *v18; // rsi
  unsigned int v19; // ebp
  __int64 v21; // rdx
  __int64 **v22; // rbx
  __int64 **v23; // rax
  __int64 **v24; // r14
  __int64 v25; // rbx
  __int64 *v26; // rdi
  void *v28; // rbx
  struct _Unwind_Exception *v29; // rbx
  __int64 *v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a2 == 75 )
  {
    v19 = (*(__int64 (**)(void))(qword_24798 + 536))();
    sub_119D0();
    if ( *(_DWORD *)(a1 + 168) == 1 )
      sub_18A20(a1);
    goto LABEL_21;
  }
  if ( a2 == 76 )
  {
    v19 = (*(__int64 (**)(void))(qword_24798 + 536))();
    *(_BYTE *)(a1 + 1154) = 1;
    if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
           7,
           0x1DA11B00000000LL,
           0,
           0,
           0,
           &callui) <= 0 )
      (*(void (__fastcall **)(const char *, _QWORD))(a1 + 816))("print_banner()", 0);
    if ( *(_DWORD *)(a1 + 168) == 2 )
      sub_18A20(a1);
LABEL_21:
    (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v19);
    return 0;
  }
  if ( a2 != 20 )
    return 0;
  v2 = 1;
  v3 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v6 = (__int64)&v32;
  HIDWORD(v31) = v3;
  v7 = xmmword_24788;
  v30 = &v32;
  v8 = 10 * xmmword_24788;
  if ( !(_QWORD)xmmword_24788 )
    goto LABEL_51;
  while ( 1 )
  {
    v32 = 0;
    v33 = 0;
    v17 = (const void **)(qword_24780 + 8 * v7 - 8);
    if ( !(unsigned __int8)PyW_GetStringAttr(*v17, "title", &v32) )
    {
      v18 = (void *)v32;
      if ( *((_QWORD *)&v33 + 1) <= 0xFu )
      {
        v32 = qvector_reserve();
        v18 = (void *)v32;
      }
      *(_QWORD *)&v33 = 16;
      qmemcpy(v18, "<unknown title>", 15);
      *(_BYTE *)(v32 + 15) = 0;
    }
    v9 = src;
    if ( (_QWORD)v33 )
      v9 = (const char *)v32;
    sub_7F30((__int64)"WARNING: Form \"%s\" was not Free()d. Force-freeing.\n", v9);
    v10 = "Free";
    v11 = (__int64 *)(*(__int64 (__fastcall **)(const void *, const char *, char *))(qword_24798 + 736))(
                       *v17,
                       "Free",
                       "()");
    v16 = v11;
    if ( v11 )
      break;
    if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
    {
      v10 = (const char *)*v17;
      sub_7F30((__int64)"WARNING: Couldn't free form object at %p:\n", *v17);
      (*(void (**)(void))(qword_24798 + 432))();
      v16 = (__int64 *)*v17;
      v21 = xmmword_24788;
      v22 = (__int64 **)qword_24780;
      v23 = (__int64 **)(qword_24780 + 8 * xmmword_24788);
      if ( (__int64 **)qword_24780 != v23 )
      {
        while ( v16 != *v22 )
        {
          if ( v23 == ++v22 )
            goto LABEL_46;
        }
        if ( v22 != v23 )
        {
          if ( !v16 )
            goto LABEL_37;
          if ( *v16 > 0 )
          {
            (*(void (**)(void))(qword_24798 + 984))();
            v21 = xmmword_24788;
LABEL_37:
            v24 = v22 + 1;
            v6 = (qword_24780 + 8 * v21 - (__int64)v22) >> 3;
            v25 = v6 - 2;
            if ( v6 - 2 < 0 )
              goto LABEL_45;
            while ( 1 )
            {
              v26 = *v24;
              *(v24 - 1) = *v24;
              if ( v26 )
                (*(void (**)(void))(qword_24798 + 1008))();
              if ( *v24 )
              {
                if ( **v24 <= 0 )
                {
                  if ( !under_debugger )
                  {
                    interr();
                    goto LABEL_57;
                  }
LABEL_63:
                  BUG();
                }
                (*(void (**)(void))(qword_24798 + 984))();
              }
              ++v24;
              if ( v25-- == 0 )
              {
                v21 = xmmword_24788;
LABEL_45:
                *(_QWORD *)&xmmword_24788 = v21 - 1;
                goto LABEL_46;
              }
            }
          }
LABEL_60:
          v29 = (struct _Unwind_Exception *)sub_6C20((__int64)v16, (int)v10, v21, v6, v4, v5, (char)v30);
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree();
          }
          (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(HIDWORD(v31));
          _Unwind_Resume(v29);
        }
      }
    }
LABEL_46:
    if ( v8 <= v2 )
      goto LABEL_47;
LABEL_12:
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
    v7 = xmmword_24788;
    ++v2;
    if ( !(_QWORD)xmmword_24788 )
      goto LABEL_51;
  }
  if ( v8 > v2 )
  {
    if ( *v11 <= 0 )
    {
LABEL_57:
      if ( !under_debugger )
        interr();
      goto LABEL_63;
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v11);
    goto LABEL_12;
  }
  if ( *v11 <= 0 )
  {
    sub_6C20((__int64)v11, (int)"Free", v12, v13, v14, v15, (char)&v32);
    goto LABEL_60;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v11);
LABEL_47:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
LABEL_51:
  while ( (_QWORD)xmmword_24698 )
  {
    v28 = *(void **)qword_24690;
    callui(106, **(_QWORD **)qword_24690, &callui, v6, v4, v5, v30, v31, v32, v33);
    python_timer_del(v28);
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(HIDWORD(v31));
  return 0;
}

