unsigned __int64 __fastcall sub_269750(_QWORD *a1, void **a2, unsigned int a3, _QWORD *a4, char a5, double a6)
{
  unsigned __int64 result; // rax
  __int64 v10; // r13
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]

  result = a4[5];
  if ( result )
  {
    v10 = *(_QWORD *)(result + 216);
  }
  else
  {
    result = get_module_data();
    v10 = result;
  }
  if ( a5 )
  {
    sub_262740(a2, v10, 0, a3 - *(_DWORD *)(v10 + 592), byte_42C4A8, a4, 0x46u);
    sub_2630C0(a2, (__int64)a4, a3, 1u, a6);
    v11 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      goto LABEL_24;
    while ( 1 )
    {
LABEL_13:
      v15 = 0;
      if ( *((_DWORD *)v11 + 6) != 73 )
        goto LABEL_6;
      v16 = v11[5];
      v17 = *(_QWORD *)(v16 + 72);
      if ( !v17 )
        goto LABEL_18;
      v18 = *(_QWORD *)(v16 + 64);
      if ( *(_DWORD *)(v18 + 8) == 71 )
      {
        v20 = v11[5];
        if ( (unsigned __int8)sub_261240(*(_QWORD *)(v18 + 24), v10, a6) )
          goto LABEL_20;
        v16 = v20;
        v17 = *(_QWORD *)(v20 + 72);
      }
      if ( *(_DWORD *)(v17 + 8) != 71 )
        goto LABEL_17;
      v21 = v16;
      if ( !(unsigned __int8)sub_261240(*(_QWORD *)(v17 + 24), v10, a6) )
      {
        v16 = v21;
LABEL_17:
        v15 = 1;
LABEL_18:
        v19 = v16;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a4 + 8LL))(a4)
          || !(unsigned __int8)sub_267EB0(v19, v10, a3 + 5, 0, 0, a4[5]) )
        {
          goto LABEL_6;
        }
      }
LABEL_20:
      v15 = 2;
LABEL_6:
      v12 = (__int64)(v11 + 2);
      if ( *(_BYTE *)(v10 + 719) )
      {
        if ( (_QWORD *)*a1 != v11 )
        {
          if ( *((_DWORD *)v11 + 7) != -1
            || (v13 = (unsigned int)(*(_DWORD *)(v11[1] + 24LL) - 73), (unsigned int)v13 <= 0xB)
            && (v14 = 2335, _bittest64(&v14, v13)) )
          {
            sub_262740((void **)v11 + 2, v10, 0, 0, (char *)&unk_418793, a4, 0);
            v12 = (__int64)(v11 + 2);
          }
        }
      }
      result = sub_268570(v12, a3, a4, v15, a6);
      v11 = (_QWORD *)*v11;
      if ( v11 == a1 )
      {
        if ( !a5 )
          return result;
LABEL_24:
        sub_2630C0(a2, (__int64)a4, a3, 0, a6);
        return sub_262740(a2, v10, 0, a3 - *(_DWORD *)(v10 + 592), byte_42C4A0, a4, 0x47u);
      }
    }
  }
  v11 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
    goto LABEL_13;
  return result;
}

