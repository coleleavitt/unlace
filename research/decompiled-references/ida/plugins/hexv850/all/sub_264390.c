unsigned __int64 __fastcall sub_264390(_QWORD *a1, void **a2, unsigned int a3, _QWORD *a4, char a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]

  result = a4[5];
  if ( result )
  {
    v9 = *(_QWORD *)(result + 216);
  }
  else
  {
    result = get_module_data();
    v9 = result;
  }
  if ( a5 )
  {
    sub_25D380(a2, v9, 0, a3 - *(_DWORD *)(v9 + 592), byte_407DE8, a4, 0x46u);
    sub_25DD00(a2, (__int64)a4, a3, 1u);
    v10 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      goto LABEL_24;
    while ( 1 )
    {
LABEL_13:
      v14 = 0;
      if ( *((_DWORD *)v10 + 6) != 73 )
        goto LABEL_6;
      v15 = v10[5];
      v16 = *(_QWORD *)(v15 + 72);
      if ( !v16 )
        goto LABEL_18;
      v17 = *(_QWORD *)(v15 + 64);
      if ( *(_DWORD *)(v17 + 8) == 71 )
      {
        v19 = v10[5];
        if ( (unsigned __int8)sub_25BE80(*(_QWORD *)(v17 + 24), v9) )
          goto LABEL_20;
        v15 = v19;
        v16 = *(_QWORD *)(v19 + 72);
      }
      if ( *(_DWORD *)(v16 + 8) != 71 )
        goto LABEL_17;
      v20 = v15;
      if ( !(unsigned __int8)sub_25BE80(*(_QWORD *)(v16 + 24), v9) )
      {
        v15 = v20;
LABEL_17:
        v14 = 1;
LABEL_18:
        v18 = v15;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a4 + 8LL))(a4)
          || !(unsigned __int8)sub_262AF0(v18, v9, a3 + 5, 0, 0, a4[5]) )
        {
          goto LABEL_6;
        }
      }
LABEL_20:
      v14 = 2;
LABEL_6:
      v11 = (__int64)(v10 + 2);
      if ( *(_BYTE *)(v9 + 719) )
      {
        if ( (_QWORD *)*a1 != v10 )
        {
          if ( *((_DWORD *)v10 + 7) != -1
            || (v12 = (unsigned int)(*(_DWORD *)(v10[1] + 24LL) - 73), (unsigned int)v12 <= 0xB)
            && (v13 = 2335, _bittest64(&v13, v12)) )
          {
            sub_25D380((void **)v10 + 2, v9, 0, 0, (char *)&unk_3F5793, a4, 0);
            v11 = (__int64)(v10 + 2);
          }
        }
      }
      result = sub_2631B0(v11, a3, a4, v14);
      v10 = (_QWORD *)*v10;
      if ( v10 == a1 )
      {
        if ( !a5 )
          return result;
LABEL_24:
        sub_25DD00(a2, (__int64)a4, a3, 0);
        return sub_25D380(a2, v9, 0, a3 - *(_DWORD *)(v9 + 592), byte_407DE0, a4, 0x47u);
      }
    }
  }
  v10 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
    goto LABEL_13;
  return result;
}

