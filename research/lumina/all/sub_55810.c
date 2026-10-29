__int64 __fastcall sub_55810(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r13
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // r12d
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  void *v12; // rdi
  int v13; // eax
  int v14; // eax
  char *v15; // rax
  __int64 v16; // rdi
  void *v17; // rdi
  int v18; // eax
  time_t v19; // r14
  int v20; // r12d
  time_t v21; // rax
  void *v22; // rdi
  time_t v23; // r12
  const char *v24; // rsi
  const char *v25; // rsi
  int v26; // eax
  char *v27; // rax
  void *v28; // [rsp+0h] [rbp-F0h] BYREF
  __int128 v29; // [rsp+8h] [rbp-E8h]
  void *v30; // [rsp+20h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+28h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B0h] BYREF
  void *v33[2]; // [rsp+48h] [rbp-A8h]
  __int64 v34; // [rsp+58h] [rbp-98h]
  void **v35; // [rsp+60h] [rbp-90h]
  __int64 v36; // [rsp+68h] [rbp-88h]
  int v37; // [rsp+70h] [rbp-80h] BYREF
  __int16 v38; // [rsp+74h] [rbp-7Ch]
  __int64 v39; // [rsp+78h] [rbp-78h]
  int v40; // [rsp+80h] [rbp-70h]
  int v41; // [rsp+84h] [rbp-6Ch]
  char v42[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  LODWORD(v2) = sub_4CC60();
  v3 = *(_QWORD *)(a1 + 424);
  sub_19A520(v3);
  v4 = *(_BYTE *)(a1 + 72) == 0;
  *(_BYTE *)(a1 + 568) = 0;
  if ( v4 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(a1 + 208);
  v28 = nullptr;
  v29 = 0;
  if ( !v5 )
    goto LABEL_3;
  if ( !*(_BYTE *)(a1 + 352) )
  {
    v2 = (int)v2;
    goto LABEL_17;
  }
  v6 = 0;
  if ( *(_BYTE *)(a1 + 504) )
    goto LABEL_7;
  v8 = *(_DWORD *)(a1 + 200);
  v2 = (int)v2;
  v41 = 0;
  v37 = v8;
  v38 = *(_WORD *)(a1 + 204);
  v39 = *(_QWORD *)(a1 + 212);
  v40 = *(_DWORD *)(a1 + 220);
  if ( (unsigned int)sub_4FDF0(a1, nullptr, (__int64)&v37, (int)v2) == 1 )
  {
LABEL_29:
    if ( !*(_DWORD *)(a1 + 208) )
      goto LABEL_3;
    if ( *(_BYTE *)(a1 + 352) )
    {
LABEL_19:
      if ( *(_BYTE *)(a1 + 352) )
        goto LABEL_3;
      v4 = *(_QWORD *)(a1 + 432) == 0;
      v30 = nullptr;
      v31 = 0;
      if ( v4 )
      {
        sub_552D0((__int64)&ptr, a1 + 40, 0);
        sub_299F0((char **)&v30);
        v17 = ptr;
        if ( !ptr )
          goto LABEL_25;
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 200);
        ptr = nullptr;
        v37 = v14;
        LOWORD(v14) = *(_WORD *)(a1 + 204);
        *(_OWORD *)v33 = 0;
        v38 = v14;
        ptr = (void *)sub_1987B0(&ptr, 0, 1, 6);
        v15 = (char *)ptr + 6 * (__int64)v33[0];
        *(_DWORD *)v15 = v37;
        *((_WORD *)v15 + 2) = v38;
        v16 = *(_QWORD *)(a1 + 432);
        ++v33[0];
        if ( (unsigned int)sub_5E670(v16, &ptr, &v28) )
          sub_299F0((char **)&v30);
        v17 = ptr;
        if ( !ptr )
          goto LABEL_25;
      }
      v33[0] = nullptr;
      j__free(v17);
LABEL_25:
      if ( (unsigned __int64)v31 > 1 )
      {
        v18 = sub_4F740(a1, (const char *)v30, 0);
        v19 = *(_QWORD *)(a1 + 488);
        v20 = v18;
        v21 = sub_4CC60();
        v22 = v30;
        if ( v20 == 1 && v19 <= v21 )
        {
          if ( !*(_BYTE *)(a1 + 504) )
          {
            *(_BYTE *)(a1 + 568) = 1;
            if ( v22 )
            {
              *(_QWORD *)&v31 = 0;
              j__free(v22);
            }
            v6 = 1;
            goto LABEL_5;
          }
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            j__free(v30);
          }
        }
        else
        {
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            j__free(v30);
          }
          if ( v20 == 2 )
            goto LABEL_3;
        }
        v23 = *(_QWORD *)(a1 + 488);
        if ( v23 > sub_4CC60() )
        {
          (*(void (__fastcall **)(__int64, char *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(
            a1,
            v42,
            25,
            *(_QWORD *)(a1 + 488),
            0);
          sub_552D0((__int64)&ptr, a1 + 40, 0);
          v24 = s1;
          if ( v33[0] )
            v24 = (const char *)ptr;
          sub_4BC40(
            (__int64 (__fastcall ***)(_QWORD))"Lost connection to '%s', the grace period will expire at %s\n",
            v24,
            v42);
          if ( ptr )
          {
            v33[0] = nullptr;
            j__free(ptr);
          }
        }
        else
        {
          *(_BYTE *)(a1 + 504) = 1;
        }
        goto LABEL_4;
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        j__free(v30);
      }
LABEL_3:
      sub_4C810(a1);
      *(_DWORD *)(a1 + 552) = 0;
      *(_QWORD *)(a1 + 544) = 0;
      *(_QWORD *)(a1 + 560) = 0;
LABEL_4:
      v6 = 0;
      goto LABEL_5;
    }
LABEL_17:
    v13 = *(_DWORD *)(a1 + 200);
    v41 = 0;
    v37 = v13;
    v38 = *(_WORD *)(a1 + 204);
    v39 = *(_QWORD *)(a1 + 212);
    v40 = *(_DWORD *)(a1 + 220);
    if ( (unsigned int)sub_4FDF0(a1, nullptr, (__int64)&v37, v2) == 1 )
    {
      ptr = nullptr;
      *(_OWORD *)v33 = 0;
      sub_299F0((char **)&ptr);
      v25 = s1;
      if ( v33[0] )
        v25 = (const char *)ptr;
      sub_4BC40(
        (__int64 (__fastcall ***)(_QWORD))"Checkin license %s as it is now borrowed for this host probably by another IDA instance\n",
        v25);
      if ( ptr )
      {
        v33[0] = nullptr;
        j__free(ptr);
      }
      v26 = *(_DWORD *)(a1 + 200);
      ptr = nullptr;
      v37 = v26;
      LOWORD(v26) = *(_WORD *)(a1 + 204);
      *(_OWORD *)v33 = 0;
      v38 = v26;
      ptr = (void *)sub_1987B0(&ptr, 0, 1, 6);
      v27 = (char *)ptr + 6 * (__int64)v33[0];
      *(_DWORD *)v27 = v37;
      *((_WORD *)v27 + 2) = v38;
      ++v33[0];
      sub_50C10((_QWORD *)a1, (int **)&ptr);
      if ( ptr )
      {
        v33[0] = nullptr;
        j__free(ptr);
      }
    }
    if ( !*(_DWORD *)(a1 + 208) )
      goto LABEL_3;
    goto LABEL_19;
  }
  v33[0] = nullptr;
  ptr = off_2367E8;
  v35 = &v28;
  v36 = a1 + 200;
  v33[1] = nullptr;
  v34 = a1;
  v11 = interr_exc_t___vtable_at_1764016(
          0x56u,
          (__int64 (__fastcall ***)(_QWORD))&ptr,
          nullptr,
          (const __m128i *)&interr_exc_t___vtable_at_1764016,
          v9,
          v10);
  v12 = v33[1];
  if ( v11 < 0 )
  {
    v6 = 1;
    goto LABEL_14;
  }
  if ( v11 )
  {
    ptr = &off_23D510;
    sub_199D50(v33[1]);
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 488) = (int)v2;
  v6 = 0;
  *(_BYTE *)(a1 + 504) = 1;
LABEL_14:
  ptr = &off_23D510;
  sub_199D50(v12);
LABEL_5:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    j__free(v28);
  }
LABEL_7:
  sub_19A570(v3);
  return v6;
}
