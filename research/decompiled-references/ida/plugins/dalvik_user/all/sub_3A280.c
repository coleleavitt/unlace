unsigned __int64 __fastcall sub_3A280(char *a1, __int64 a2, char a3)
{
  char *v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  char *v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  char *v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+28h] [rbp-30h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v15 = nullptr;
  v16 = 0;
  if ( !a1 )
    return v19 - __readfsqword(0x28u);
  if ( (unsigned __int8)sub_36D30((__int64 *)&v15, (__int64 *)a1) )
  {
    v7 = &byte_7FAF1;
    if ( (_QWORD)v16 )
      v7 = v15;
    if ( *v7 == 76 )
    {
      v9 = a2;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
      v17 = nullptr;
      v11 = v10;
      v18 = 0;
      v12 = sub_135E0(v9, a1);
      v13 = *(_QWORD *)(v11 + 8);
      if ( !v13 || !(unsigned __int8)sub_25C00((_QWORD *)(v12 + 1040), (void **)&v17, v13) )
        goto LABEL_10;
      v14 = (char *)nptr;
      if ( (_QWORD)v18 )
        v14 = v17;
      if ( (unsigned __int8)sub_387A0(a1, v14, a3, 0) )
      {
        if ( !v17 )
          goto LABEL_6;
      }
      else
      {
LABEL_10:
        if ( !v17 )
          goto LABEL_6;
      }
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
LABEL_6:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v19 - __readfsqword(0x28u);
}

