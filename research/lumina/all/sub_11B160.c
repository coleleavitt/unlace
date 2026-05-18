__int64 __fastcall sub_11B160(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, __int64, _QWORD); // rax
  int v23; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = 0;
  v24 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( !a5 )
      goto LABEL_4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8), 4);
    if ( v5 )
      goto LABEL_4;
    if ( !*(_BYTE *)(a1 + 63) )
      *(_BYTE *)(a1 + 63) = 1;
    v5 = sub_11AE40(a1, a2, 0, nullptr, 0, a3, a4, a5, nullptr, nullptr);
    if ( v5 )
    {
LABEL_4:
      v10 = 0;
      sub_C9EC0(a1, 0);
      v11 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 16));
        *(_QWORD *)v11 = 0;
      }
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 8);
      v23 = -1;
      if ( *(_QWORD *)v13
        && ((*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v13 + 80LL))(v13, 10, &v23), v23 == 1) )
      {
        if ( *(__int64 *)(a1 + 32) >= 0 )
          sub_EA4D0((_QWORD *)(a1 + 16), (const char **)(a1 + 128), 0, v14);
        v10 = 0;
        sub_C9EC0(a1, 0);
        v19 = *(_QWORD **)(a1 + 16);
        v20 = *v19;
        if ( !*v19 )
          goto LABEL_6;
        v16 = 0;
      }
      else
      {
        v10 = 1;
        v15 = (_QWORD *)a1;
        v16 = 1;
        sub_C9EC0(a1, 1);
        v19 = *(_QWORD **)(a1 + 16);
        v20 = *v19;
        if ( !*v19 )
        {
LABEL_15:
          if ( qword_2424C0 )
            qword_2424C0(v15, v10, v17, v18);
          v21 = *(_QWORD *)a1;
          v10 = *(_QWORD *)(a1 + 128);
          v22 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL);
          if ( v22 )
            v22(v21, v10, 0);
          if ( qword_2424C8 )
            qword_2424C8(v21, v10);
          goto LABEL_6;
        }
      }
      v15 = v19;
      (*(void (__fastcall **)(_QWORD *))(v20 + 8))(v19);
      *v19 = 0;
      if ( v16 )
        goto LABEL_15;
    }
LABEL_6:
    sub_C91C0(*(_QWORD *)(a1 + 48), v10);
    sub_C91C0(a1, v10);
  }
  return v5;
}
