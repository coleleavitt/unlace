__int64 __fastcall sub_362E0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 *a5,
        int a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10)
{
  int v10; // ebp
  bool v11; // zf
  int v13; // eax
  int v15; // eax
  const char *v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rbp
  int v20; // eax
  int v21; // eax
  const char *v22; // rax
  size_t v23; // rax
  size_t v24; // r13
  void *v25; // rdi
  size_t v26; // r13
  __int64 v27; // rax
  _QWORD v28[7]; // [rsp+10h] [rbp-38h] BYREF

  v10 = a2;
  v11 = *(_DWORD *)(a1 + 856) == 5;
  v28[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 1368) = 1;
  *(_BYTE *)(a1 + 1370) = 1;
  if ( !v11 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        goto LABEL_4;
LABEL_19:
      v28[0] = 0;
      if ( !(unsigned __int8)sub_1F390((__int64)v28, (__int64)"Please enter the PID to attach to") )
        return 0xFFFFFFFFLL;
      v10 = v28[0];
      goto LABEL_4;
    }
LABEL_21:
    sub_3A3E0(*(_QWORD *)(a1 + 864), a2, a3, a4, (_DWORD)a5, a6);
    v20 = sub_33D00(a1, 1, 0xFFFFFFFF, a7, a8);
    if ( v20 == -1 )
      goto LABEL_12;
    if ( !v20 )
    {
      sub_39260(*(_QWORD *)(a1 + 864));
      v21 = sub_33D00(a1, 1, 0xFFFFFFFF, a7, a8);
      if ( v21 != 1 )
      {
        if ( v21 )
        {
          if ( !a5 )
            return 4294967294LL;
          v22 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 864) + 56LL))(*(_QWORD *)(a1 + 864));
          v17 = v22;
          if ( !v22 )
            goto LABEL_15;
          v23 = strlen(v22);
          v19 = v23;
          if ( !v23 )
            goto LABEL_15;
          v24 = v23 + 1;
          if ( a5[2] < v23 + 1 )
            *a5 = qvector_reserve();
          a5[1] = v24;
          v25 = (void *)*a5;
          goto LABEL_37;
        }
        sub_DB10((__int64)"Could not get target stop status even after breaking. Giving up.");
        return 0xFFFFFFFFLL;
      }
    }
    v10 = -2;
    if ( *(_DWORD *)(a1 + 1360) != 6 )
      goto LABEL_6;
    if ( (int)sub_E8D0(0, (__int64)"HIDECANCEL\nTarget is not running.\nDo you want to enter a PID to attach to?") <= 0 )
      return 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  if ( a2 == 100001 )
    goto LABEL_21;
  if ( (unsigned int)&loc_186A2 == a2 )
    goto LABEL_19;
LABEL_4:
  if ( v10 > 0 )
  {
    a7 = sub_3C390(*(_QWORD *)(a1 + 864), (unsigned int)v10);
    v15 = sub_33D00(a1, 1, 0xFFFFFFFF, a7, a8);
    if ( v15 != 1 )
    {
      if ( v15 )
        goto LABEL_12;
      sub_DB10((__int64)"Could not attach to PID %d.", v10);
      return 0xFFFFFFFFLL;
    }
  }
  if ( *(_DWORD *)(a1 + 1360) == 6 )
    return 0xFFFFFFFFLL;
LABEL_6:
  v13 = sub_35500(a1, v10, "<GDB remote process>", a5, (int)a5, a6, a7, a8, a9, a10);
  switch ( v13 )
  {
    case 1:
      sub_2CB00(a1, a7, *(double *)a8.m128i_i64, a9, a10);
      return 1;
    case -1:
LABEL_12:
      if ( !a5 )
        return 4294967294LL;
      v16 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 864) + 56LL))(*(_QWORD *)(a1 + 864));
      v17 = v16;
      if ( !v16 || (v18 = strlen(v16), (v19 = v18) == 0) )
      {
LABEL_15:
        a5[1] = 0;
        return 4294967294LL;
      }
      v25 = (void *)*a5;
      v26 = v18 + 1;
      if ( a5[2] < v18 + 1 )
      {
        v27 = qvector_reserve();
        *a5 = v27;
        v25 = (void *)v27;
      }
      a5[1] = v26;
LABEL_37:
      memmove(v25, v17, v19);
      *(_BYTE *)(*a5 + v19) = 0;
      return 4294967294LL;
    case -2:
      return 4294967293LL;
    default:
      return 0xFFFFFFFFLL;
  }
}

