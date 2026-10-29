__int64 __fastcall sub_55400(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v6; // eax
  int v8; // eax
  __int64 v9; // rax
  char *v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdx
  const char *v13; // rsi
  __int64 v14; // r13
  int v15; // eax
  char *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-F0h]
  void *v18; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v19; // [rsp+18h] [rbp-E0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-C0h]
  void *v22; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A0h]
  int v24; // [rsp+70h] [rbp-88h] BYREF
  __int16 v25; // [rsp+74h] [rbp-84h]
  __int64 v26; // [rsp+78h] [rbp-80h]
  int v27; // [rsp+80h] [rbp-78h]
  int v28; // [rsp+84h] [rbp-74h]
  char s[40]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v6 = sub_55200(
         (__int64 (__fastcall ***)(_QWORD))"~R~e-borrow",
         (const __m128i *)"~C~heckout",
         (const __m128i *)"Enter ~l~ocked mode",
         1u,
         (__int64)"The following borrowed license(s) have expired:\n"
                  "%sPlease re-borrow them for a new period to work offline\n"
                  "or checkout them to work online");
  v18 = nullptr;
  v19 = 0;
  if ( v6 == 1 )
  {
    sub_4CC60();
    v10 = s;
    ptr = nullptr;
    v11 = sub_1992F0(s, 0x20u, "%F");
    v21 = 0;
    if ( v11 )
    {
      v11 = strlen(s);
      v12 = v11 + 1;
    }
    else
    {
      v12 = 1;
      v10 = "";
    }
    v17 = v12;
    ptr = (void *)sub_1987B0(&ptr, 0, v12, 1);
    *(_QWORD *)&v21 = v17;
    memmove(ptr, v10, v11);
    *((_BYTE *)ptr + v11) = 0;
    v3 = 0;
    if ( (unsigned int)sub_55130(
                         (__int64 (__fastcall ***)(_QWORD))"Re-borrow floating licenses\n"
                                                           "\n"
                                                           "%/%*<#Borrow end date (YYYY-MM-DD) #Borrow ~U~ntil   :q1:1023:30::>",
                         sub_55020,
                         a1,
                         &ptr) == 1 )
    {
      v13 = s1;
      if ( (_QWORD)v21 )
        v13 = (const char *)ptr;
      v14 = sub_58130(0, v13);
      v15 = *(_DWORD *)a3;
      v23 = 0;
      v24 = v15;
      LOWORD(v15) = *(_WORD *)(a3 + 4);
      v22 = nullptr;
      v25 = v15;
      v22 = (void *)sub_1987B0(&v22, 0, 1, 6);
      v16 = (char *)v22 + 6 * v23;
      *(_DWORD *)v16 = v24;
      *((_WORD *)v16 + 2) = v25;
      *(_QWORD *)&v23 = v23 + 1;
      v3 = sub_50FA0((_QWORD *)a1, (const char **)&v18, (int **)&v22, v14);
      if ( (_BYTE)v3 )
        sub_4BC40((__int64 (__fastcall ***)(_QWORD))"License re-borrowed\n");
      else
        sub_299F0(a2);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        j__free(v22);
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      j__free(ptr);
    }
  }
  else
  {
    if ( v6 )
    {
      LOBYTE(v3) = v6 != -1;
      return v3;
    }
    v8 = *(_DWORD *)a3;
    v28 = 0;
    v24 = v8;
    v25 = *(_WORD *)(a3 + 4);
    v26 = *(_QWORD *)(a3 + 12);
    v27 = *(_DWORD *)(a3 + 20);
    v3 = sub_51F40((_QWORD *)a1, (__int64)&v24, 1, 0, (__int64)&v18);
    v9 = *(int *)(a3 + 12);
    if ( (_BYTE)v3 )
    {
      if ( (int)v9 >= 7 )
        v9 = 0;
      sub_4BC40((__int64 (__fastcall ***)(_QWORD))"License %s checked out\n", off_23E8C0[v9]);
      if ( *(_BYTE *)(a1 + 352) )
      {
        if ( !unk_2439A0 )
          sub_198E10(3157);
        BUG();
      }
    }
    else
    {
      sub_299F0(a2);
    }
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    j__free(v18);
  }
  return v3;
}
