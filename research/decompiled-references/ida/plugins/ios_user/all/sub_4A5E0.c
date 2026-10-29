__int64 __fastcall sub_4A5E0(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        __int64 a23,
        int a24,
        int a25,
        __int64 a26,
        __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  unsigned int v40; // esi
  __int64 v41; // rax
  int v42; // esi
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  bool v46; // r14
  void (*v47)(); // rcx
  void (*v48)(); // rdx
  __int64 *v50; // rdi
  __int64 v51; // r14
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r9
  int v59; // eax
  int v60; // eax
  void (*v61)(); // rax
  int v62; // edi
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  char v67; // [rsp+7h] [rbp-41h]
  __int64 v68; // [rsp+8h] [rbp-40h]
  __int64 v69; // [rsp+8h] [rbp-40h]

  *(_DWORD *)(a2 + 40) = a5;
  *(_DWORD *)a4 = a1[164];
  v40 = a1[341];
  *(_BYTE *)(a4 + 16) = 0;
  *(_DWORD *)(a4 + 4) = v40;
  v41 = sub_478E0((__int64)a1, v40, a7, a8, a9, a10);
  v42 = 7;
  *(_QWORD *)(a4 + 8) = v41;
  set_debug_event_code();
  if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
  {
    if ( under_debugger )
      goto LABEL_55;
    interr();
LABEL_52:
    if ( !under_debugger )
    {
      v62 = 3298;
      interr();
LABEL_54:
      sub_3CEA0();
      return sub_4AB00(
               v62,
               v42,
               v63,
               v64,
               v65,
               v66,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               a21,
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               a29,
               a30,
               a31,
               a32,
               a33,
               a34,
               a35);
    }
LABEL_55:
    BUG();
  }
  *(_DWORD *)(a4 + 24) = a3;
  *(_BYTE *)(a4 + 28) = 1;
  *(_QWORD *)(a4 + 32) = a6;
  v45 = *(_QWORD *)a1;
  v46 = a3 == 2 || a3 == 17;
  v47 = nullsub_9;
  v48 = *(void (**)())(*(_QWORD *)a1 + 680LL);
  if ( v48 == nullsub_9 )
  {
    if ( !v46 )
      goto LABEL_9;
    goto LABEL_4;
  }
  ((void (__fastcall *)(_DWORD *, __int64))v48)(a1, a4);
  if ( v46 )
  {
LABEL_4:
    if ( a1[340] == 1 )
    {
      sub_65BB0(
        (_DWORD)a1,
        (unsigned int)"GDB: successfully paused the process, good!\n",
        (_DWORD)v48,
        (_DWORD)v47,
        v43,
        v44);
      a1[340] = 0;
      set_debug_event_code();
    }
  }
  if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
    return 1;
  v45 = *(_QWORD *)a1;
LABEL_9:
  v50 = (__int64 *)(a4 + 40);
  v51 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(v45 + 56))(a1, a3);
  if ( v51 )
  {
    sub_15620(v50);
    v67 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a4, v51);
    *(_BYTE *)(a4 + 16) = (*(_BYTE *)(v51 + 4) & 2) != 0;
    if ( a3 == 9 && (int)a1[340] > 4 )
    {
      *(_BYTE *)(a4 + 16) = 0;
      v67 = 0;
    }
  }
  else
  {
    sub_15620(v50);
    v67 = 1;
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
      v60 = a1[340];
      if ( v60 == 3 )
      {
        v61 = *(void (**)())(*(_QWORD *)a1 + 696LL);
        if ( v61 != nullsub_10 )
          ((void (__fastcall *)(_DWORD *))v61)(a1);
        a1[340] = 2;
        return 0;
      }
      if ( v60 == 1 )
      {
        sub_65BB0((_DWORD)a1, (unsigned int)"GDB: successfully paused the process, good!\n", v52, v53, v54, v55);
        a1[340] = 0;
        set_debug_event_code();
        return 1;
      }
    }
  }
  v56 = sub_457A0((__int64)a1, a4);
  v57 = *((_QWORD *)a1 + 150);
  v58 = v56;
  if ( v57 == v56 && v57 != -1 )
  {
    v68 = v56;
    if ( (*(unsigned int (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           v57,
           0,
           0,
           v56) )
    {
      *((_QWORD *)a1 + 150) = -1;
      v59 = sub_41F50(
              (__int64)"Stop",
              (__int64)"Suspend",
              (__int64)"Continue",
              1u,
              (__int64)"TITLE Remote GDB debugger information\n"
                       "AUTOHIDE DATABASE\n"
                       "The emulation exit point has been reached.\n"
                       "Do you want to stop the emulation?\n");
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          v42 = 2;
          v62 = a4;
          set_debug_event_code();
          if ( (((*(_DWORD *)(a4 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
          {
            *(_DWORD *)(a4 + 24) = 0;
            return 1;
          }
          goto LABEL_54;
        }
        v58 = v68;
        goto LABEL_18;
      }
    }
    else
    {
      sub_130A0((__int64)"TITLE Remote GDB debugger information\n"
                         "AUTOHIDE NONE\n"
                         "The emulation exit point has been reached, but the exit breakpoint could not be deleted.\n"
                         "Suspending the program.");
    }
    set_debug_event_code();
    return 1;
  }
  if ( v56 != -1 )
  {
LABEL_18:
    v42 = 5;
    v69 = v58;
    set_debug_event_code();
    if ( (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) == 5 )
    {
      *(_QWORD *)(a4 + 24) = a6;
      *(_QWORD *)(a4 + 32) = -1;
      *(_QWORD *)(a4 + 8) = v69;
      if ( *(_DWORD *)(qword_8FB50 + 144LL * (int)a1[294] + 120)
        || v69 == sub_478E0((__int64)a1, *(_DWORD *)(a4 + 4), a7, a8, a9, a10) )
      {
        a3 = 0;
      }
      else
      {
        a3 = 0;
        sub_47B70((__int64)a1, *(_DWORD *)(a4 + 4), v69, a7, a8, a9, a10);
      }
      goto LABEL_21;
    }
    goto LABEL_52;
  }
LABEL_21:
  *(_DWORD *)(a2 + 28) = a3;
  if ( !(unsigned __int8)sub_67350(a1, a4, 0) )
  {
    if ( *((_BYTE *)a1 + 1368) || v67 || (*(_DWORD *)(a4 + 20) & 0xFFFFFFF) != 7 )
      return 1;
    sub_67500(a1, a4, v51);
    if ( *(_BYTE *)(a4 + 16) )
      *(_DWORD *)(a2 + 28) = 0;
    sub_436B0((__int64)a1, a2);
    a1[340] = 0;
  }
  return 0;
}

