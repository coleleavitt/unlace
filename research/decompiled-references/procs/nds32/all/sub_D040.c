__int64 __fastcall sub_D040(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5)
{
  _QWORD *func; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // ebx
  __int64 flags; // rax
  int v13; // eax

  func = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
  if ( func )
  {
    v9 = func;
    if ( a4 == 31 || (a4 == 28 || (v13 = sub_13410(a1, *func), v13 >= 0) && a4 == v13) && (v9[2] & 0x10) != 0 )
    {
      if ( v9[4] || *((_WORD *)v9 + 20) )
      {
        v10 = *a3;
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        if ( (unsigned __int8)is_stkvar(flags, v10) )
        {
          if ( (unsigned __int8)insn_create_stkvar(a2, a3, a5, 3) )
            return 1;
        }
        else if ( (unsigned __int8)insn_create_stkvar(a2, a3, a5, 1) )
        {
          op_stkvar(*(_QWORD *)(a2 + 16), *a3);
          return 1;
        }
      }
    }
  }
  return 0;
}
