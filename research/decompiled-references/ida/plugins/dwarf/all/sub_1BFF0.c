unsigned __int64 __fastcall sub_1BFF0(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 v5; // rax
  char v6; // al
  const __m128i *v7; // rdx
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rax
  int v16; // [rsp+1Ch] [rbp-17Ch] BYREF
  __int64 v17; // [rsp+20h] [rbp-178h] BYREF
  __int64 v18; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-168h] BYREF
  char v20; // [rsp+40h] [rbp-158h]
  __int64 v21; // [rsp+48h] [rbp-150h]
  __int64 v22[33]; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v23; // [rsp+158h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( sub_84CC0(a1) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v8 = sub_81C40((__int64)a1);
      sub_88B80((__int64)"Global variable @ %s has failed relocations. Skipping.\n", v8);
    }
    return sub_16F70();
  }
  else
  {
    sub_84A60((__int64)v22);
    v5 = *a1;
    v19[0] = 0;
    LODWORD(v18) = 0;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *))(a1[32] + 112))(*(_QWORD *)(v5 + 24), 73, &v18)
      && (_DWORD)v18
      || (v6 = sub_9AB20(a1, v22), v7 = (const __m128i *)v22, !v6) )
    {
      v7 = (const __m128i *)a1;
    }
    v17 = 0;
    if ( (unsigned __int8)sub_62AC0(a2, &v17, v7) )
    {
      v19[1] = 0;
      v19[0] = off_C7558;
      copy_tinfo_t();
      v9 = *a1;
      v21 = a3;
      v20 = 0;
      v18 = 0;
      v16 = 0;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(a1[32] + 112))(
              *(_QWORD *)(v9 + 24),
              2,
              &v16,
              &v18)
        && v16 )
      {
        sub_94760(a1, 2, (__int64)v19);
      }
      else
      {
        v10 = *a1;
        v18 = 0;
        v16 = 0;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(a1[32] + 112))(
                *(_QWORD *)(v10 + 24),
                17,
                &v16,
                &v18)
          && v16 )
        {
          v11 = sub_9A0A0((__int64)a1);
          sub_1BAC0((__int64)v19, (__int64)a1, v11, v12, v13, v14, (__int64)v19);
        }
      }
      v19[0] = off_C7558;
      clear_tinfo_t();
    }
    else if ( (debug & 0x400000) != 0 )
    {
      v15 = sub_81C40((__int64)a1);
      sub_88B80((__int64)"Couldn't determine type for global variable @ %s\n", v15);
    }
    clear_tinfo_t();
    sub_1B750((__int64)v22);
    return v23 - __readfsqword(0x28u);
  }
}

