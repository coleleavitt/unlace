__int64 __fastcall sub_553A0(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r8d
  __int64 v19; // rax
  bool v20; // r14
  void (*v21)(); // rcx
  void (*v22)(); // rdx
  __int64 *v24; // rdi
  __int64 v25; // r14
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  void (*v34)(); // rax
  __int64 v35; // rdi
  char v36; // [rsp+7h] [rbp-41h]
  __int64 v37; // [rsp+8h] [rbp-40h]
  __int64 v38; // [rsp+8h] [rbp-40h]

  *(_DWORD *)(a2 + 40) = a5;
  *(_DWORD *)a4 = a1[164];
  v15 = a1[341];
  *(_BYTE *)(a4 + 16) = 0;
  *(_DWORD *)(a4 + 4) = v15;
  v16 = sub_525A0((__int64)a1, v15, a7, a8, a9, a10);
  v17 = 7;
  *(_QWORD *)(a4 + 8) = v16;
  set_debug_event_code();
  if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
  {
    if ( under_debugger )
      goto LABEL_55;
    interr();
LABEL_52:
    if ( !under_debugger )
    {
      v35 = 3298;
      interr();
LABEL_54:
      sub_471A0();
      return sub_558B0(v35, v17);
    }
LABEL_55:
    BUG();
  }
  *(_DWORD *)(a4 + 24) = a3;
  *(_BYTE *)(a4 + 28) = 1;
  *(_QWORD *)(a4 + 32) = a6;
  v19 = *(_QWORD *)a1;
  v20 = a3 == 2 || a3 == 17;
  v21 = nullsub_23;
  v22 = *(void (**)())(*(_QWORD *)a1 + 680LL);
  if ( v22 == nullsub_23 )
  {
    if ( !v20 )
      goto LABEL_9;
    goto LABEL_4;
  }
  ((void (__fastcall *)(_DWORD *, __int64))v22)(a1, a4);
  if ( v20 )
  {
LABEL_4:
    if ( a1[340] == 1 )
    {
      sub_70460(
        (_DWORD)a1,
        (unsigned int)"GDB: successfully paused the process, good!\n",
        (_DWORD)v22,
        (_DWORD)v21,
        v18);
      a1[340] = 0;
      set_debug_event_code();
    }
  }
  if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
    return 1;
  v19 = *(_QWORD *)a1;
LABEL_9:
  v24 = (__int64 *)(a4 + 40);
  v25 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(v19 + 56))(a1, a3);
  if ( v25 )
  {
    sub_15ED0(v24);
    v36 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a4, v25);
    *(_BYTE *)(a4 + 16) = (*(_BYTE *)(v25 + 4) & 2) != 0;
    if ( a3 == 9 && (int)a1[340] > 4 )
    {
      *(_BYTE *)(a4 + 16) = 0;
      v36 = 0;
    }
  }
  else
  {
    sub_15ED0(v24);
    v36 = 1;
  }
  if ( *(_DWORD *)(a4 + 24) == 5 )
  {
    if ( *(_BYTE *)(a2 + 32) )
    {
      a3 = 0;
      set_debug_event_code();
    }
    else
    {
      v33 = a1[340];
      if ( v33 == 3 )
      {
        v34 = *(void (**)())(*(_QWORD *)a1 + 696LL);
        if ( v34 != nullsub_6 )
          ((void (__fastcall *)(_DWORD *))v34)(a1);
        a1[340] = 2;
        return 0;
      }
      if ( v33 == 1 )
      {
        sub_70460((_DWORD)a1, (unsigned int)"GDB: successfully paused the process, good!\n", v26, v27, v28);
        a1[340] = 0;
        set_debug_event_code();
        return 1;
      }
    }
  }
  v29 = sub_50480((__int64)a1, a4);
  v30 = *((_QWORD *)a1 + 150);
  v31 = v29;
  if ( v30 == v29 && v30 != -1 )
  {
    v37 = v29;
    if ( (*(unsigned int (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           v30,
           0,
           0,
           v29) )
    {
      *((_QWORD *)a1 + 150) = -1;
      v32 = sub_4C750(
              (__int64)"Stop",
              (__int64)"Suspend",
              (__int64)"Continue",
              1u,
              (__int64)"TITLE Remote GDB debugger information\n"
                       "AUTOHIDE DATABASE\n"
                       "The emulation exit point has been reached.\n"
                       "Do you want to stop the emulation?\n");
      if ( v32 )
      {
        if ( v32 == 1 )
        {
          v17 = 2;
          v35 = a4;
          set_debug_event_code();
          if ( (((*(_DWORD *)(a4 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
          {
            *(_DWORD *)(a4 + 24) = 0;
            return 1;
          }
          goto LABEL_54;
        }
        v31 = v37;
        goto LABEL_18;
      }
    }
    else
    {
      sub_14020((__int64)"TITLE Remote GDB debugger information\n"
                         "AUTOHIDE NONE\n"
                         "The emulation exit point has been reached, but the exit breakpoint could not be deleted.\n"
                         "Suspending the program.");
    }
    set_debug_event_code();
    return 1;
  }
  if ( v29 != -1 )
  {
LABEL_18:
    v17 = 5;
    v38 = v31;
    set_debug_event_code();
    if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) == 5 )
    {
      *(_QWORD *)(a4 + 24) = a6;
      *(_QWORD *)(a4 + 32) = -1;
      *(_QWORD *)(a4 + 8) = v38;
      if ( *(_DWORD *)(qword_9AD30 + 144LL * (int)a1[294] + 120)
        || v38 == sub_525A0((__int64)a1, *(_DWORD *)(a4 + 4), a7, a8, a9, a10) )
      {
        a3 = 0;
      }
      else
      {
        a3 = 0;
        sub_52830((__int64)a1, *(_DWORD *)(a4 + 4), v38, a7, a8, a9, a10);
      }
      goto LABEL_21;
    }
    goto LABEL_52;
  }
LABEL_21:
  *(_DWORD *)(a2 + 28) = a3;
  if ( !(unsigned __int8)sub_71BF0(a1, a4, 0) )
  {
    if ( *((_BYTE *)a1 + 1368) || v36 || (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
      return 1;
    sub_71DA0(a1, a4, v25);
    if ( *(_BYTE *)(a4 + 16) )
      *(_DWORD *)(a2 + 28) = 0;
    sub_4E390((__int64)a1, a2);
    a1[340] = 0;
  }
  return 0;
}

