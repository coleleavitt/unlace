__int64 __fastcall sub_2CFD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rdx
  int v5; // eax
  char v6; // cl
  unsigned __int8 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  bool v10; // r15
  unsigned __int8 (__fastcall *v11)(__int64, __int64); // rax
  char tinfo_property; // al
  int v13; // edx
  __int64 v14; // r12
  bool v15; // r12
  __int64 (__fastcall *hexdsp)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 tinfo_size; // [rsp+0h] [rbp-50h]
  char v18; // [rsp+Eh] [rbp-42h]
  char v19; // [rsp+Fh] [rbp-41h]
  __int64 v20[8]; // [rsp+10h] [rbp-40h] BYREF

  v2 = 0;
  v20[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 57 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 == 64 )
    {
      v6 = sub_13E50(*(_QWORD *)(a1 + 64), *(_QWORD *)(v4 + 24));
    }
    else
    {
      v6 = 0;
      if ( v5 == 68 )
        v6 = sub_13EE0(*(char **)(v4 + 24));
    }
    v7 = v6;
    v18 = sub_2BF30(a1, a2, v6);
    v20[0] = 0;
    v19 = sub_2CA90(a1, v20, v7, a2);
    if ( !v19 )
      goto LABEL_12;
    v8 = *(_QWORD *)(a1 + 24);
    if ( !v8 )
      goto LABEL_29;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v8 - 8);
    if ( *(_DWORD *)(v9 + 8) == 49 && (get_tinfo_property() & 0x2F) == 0xD )
    {
      hexdsp = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))get_hexdsp();
      *(_QWORD *)(v9 + 32) = hexdsp(521, 0, 0, -1, 0, 0, 0);
      *(_DWORD *)(v9 + 8) = 22;
      if ( !v9 )
        goto LABEL_29;
    }
    else if ( !v9 )
    {
LABEL_29:
      v9 = 0;
    }
    tinfo_size = get_tinfo_size();
    if ( tinfo_size >= get_tinfo_size() )
    {
      v10 = (get_tinfo_property() & 0xF) == 9;
      if ( v10 == ((get_tinfo_property() & 0xF) == 9) )
      {
        tinfo_property = get_tinfo_property();
        v13 = *(_DWORD *)(v9 + 8);
        if ( (tinfo_property & 0x2F) == 0xD )
        {
          if ( (unsigned int)(v13 - 1) > 1 && v13 <= 69 )
            goto LABEL_12;
        }
        else if ( v13 == 59 )
        {
          goto LABEL_12;
        }
        copy_tinfo_t();
        if ( *(_DWORD *)(v9 + 8) == 2 )
        {
          v14 = get_tinfo_size();
          if ( v14 == get_tinfo_size() )
          {
            v15 = (get_tinfo_property() & 0xF) == 9;
            if ( v15 == ((get_tinfo_property() & 0xF) == 9)
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) - 64) <= 1
              && !(unsigned __int8)compare_tinfo() )
            {
              copy_tinfo_t();
              copy_tinfo_t();
              goto LABEL_14;
            }
          }
        }
LABEL_13:
        v19 = 0;
LABEL_14:
        *(_BYTE *)(a1 + 96) = 1;
        v11 = (unsigned __int8 (__fastcall *)(__int64, __int64))get_hexdsp();
        v2 = (unsigned __int8)(v19 | (v11(457, a1) != 0));
        goto LABEL_15;
      }
    }
LABEL_12:
    v2 = 0;
    if ( !v18 )
    {
LABEL_15:
      clear_tinfo_t();
      return v2;
    }
    goto LABEL_13;
  }
  return v2;
}
