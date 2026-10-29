__int64 __fastcall sub_27EE20(_QWORD *a1, __int64 a2, _QWORD *a3, char *a4, double a5)
{
  __int64 v9; // r15
  __int64 v10; // rbx
  char v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rdx
  int tinfo_size; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx

  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0x11:
      if ( !(unsigned __int8)sub_27EE20(a1, *(_QWORD *)(a2 + 24), a3, a4)
        || *a4
        || !(unsigned __int8)sub_27EE20(a1, *(_QWORD *)(a2 + 32), a3, a4) )
      {
        return 0;
      }
      return (unsigned __int8)*a4 ^ 1u;
    case 0x12:
      if ( !(unsigned __int8)sub_27EE20(a1, *(_QWORD *)(a2 + 24), a3, a4)
        || !*a4
        || !(unsigned __int8)sub_27EE20(a1, *(_QWORD *)(a2 + 32), a3, a4) )
      {
        return 0;
      }
      return (unsigned __int8)*a4;
    case 0x16:
      v11 = 0;
      goto LABEL_26;
    case 0x17:
      v11 = 1;
LABEL_26:
      v18 = *(_QWORD *)(a2 + 24);
      v9 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v18 + 8) == 61 )
        goto LABEL_29;
      if ( *(_DWORD *)(v9 + 8) != 61 )
        return 0;
      v9 = *(_QWORD *)(a2 + 24);
      v18 = *(_QWORD *)(a2 + 32);
LABEL_29:
      v10 = **(_QWORD **)(v18 + 24);
      if ( !a1[11] )
        a1[11] = v18;
LABEL_5:
      v12 = a1[10];
      if ( !v12 )
      {
        if ( (unsigned int)(*(_DWORD *)(v9 + 8) - 55) <= 1 )
        {
          a1[9] = v9;
          v9 = *(_QWORD *)(v9 + 24);
        }
        if ( !(unsigned __int8)sub_256590(v9) )
        {
          tinfo_size = get_tinfo_size();
          if ( sub_11CA80(tinfo_size) )
          {
            a1[10] = v9;
            goto LABEL_7;
          }
        }
        return 0;
      }
      if ( sub_259AA0(v12, v9, a5) )
        return 0;
LABEL_7:
      v13 = a3[5];
      v14 = a3[4];
      v15 = 0;
      v16 = 0;
      if ( v13 )
      {
        do
        {
          if ( *(_QWORD *)(v14 + 8 * v16) == v10 )
            return 0;
          v16 = ++v15;
        }
        while ( v15 < v13 );
        v20 = v13 + 1;
      }
      else
      {
        v20 = 1;
      }
      if ( a3[6] < v20 )
      {
        v19 = qvector_reserve((__int64)(a3 + 4), v14, v20, 8);
        v13 = a3[5];
        a3[4] = v19;
        v14 = v19;
      }
      *(_QWORD *)(v14 + 8 * v13) = v10;
      ++a3[5];
      *a4 = v11;
      return 1;
    case 0x31:
      v9 = *(_QWORD *)(a2 + 24);
      v10 = 0;
      v11 = 0;
      goto LABEL_5;
    default:
      return 0;
  }
}

