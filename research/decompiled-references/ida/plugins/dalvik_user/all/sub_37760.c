__int64 __fastcall sub_37760(__int64 a1, __int64 a2, bool *a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v7 = *(_QWORD *)(a4 + 8);
  v18 = __readfsqword(0x28u);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  s1 = nullptr;
  v10 = v9;
  v17 = 0;
  if ( !(unsigned __int8)sub_36D30((__int64 *)&s1, a5) )
  {
    v11 = 0;
    goto LABEL_4;
  }
  v11 = v17;
  if ( (_QWORD)v17 )
  {
    v12 = s1;
    if ( *s1 != 76 && strcmp(s1, "Ljava/lang/String;") )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else if ( byte_7FAF1 != 76 )
  {
LABEL_4:
    v12 = s1;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(v10 + 8);
  if ( !v14 )
  {
    v15 = qstpncpy() - a1;
    goto LABEL_16;
  }
  v11 = 0;
  if ( unk_7FB4C )
  {
    v15 = format_c_number();
LABEL_16:
    v11 = v15;
  }
  if ( !a3 )
    goto LABEL_4;
  v12 = s1;
  *a3 = v14 != 0;
LABEL_5:
  if ( v12 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v11;
}

