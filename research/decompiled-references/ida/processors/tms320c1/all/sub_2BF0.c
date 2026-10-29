__int64 __fastcall sub_2BF0(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, double a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi

  v5 = a2;
  switch ( a3[1] )
  {
    case 1u:
    case 3u:
      return 1;
    case 2u:
      if ( get_sreg() != -1 )
      {
        sel2para();
        insn_add_dref();
      }
      return 1;
    case 5u:
      v11 = *(unsigned __int16 *)(a2 + 24);
      if ( a4 == 1 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        LODWORD(v13) = 0;
        v14 = *(_DWORD *)(v12 + 104);
        if ( v14 <= v11 && v11 < *(_DWORD *)(v12 + 108) )
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v11 - v14));
        sub_2B20((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), v13, *a3);
        return 1;
      }
      else
      {
        if ( (_WORD)v11 == 22 )
          split_sreg_range();
        set_immd();
        return 1;
      }
    case 7u:
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        return func_does_return();
      }
      else
      {
        insn_add_cref();
        return 1;
      }
    default:
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v9 = *(_DWORD *)(v7 + 104);
      if ( v8 >= v9 && v8 < *(_DWORD *)(v7 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v9));
      sub_2B20((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, *a3);
      return 1;
  }
}

