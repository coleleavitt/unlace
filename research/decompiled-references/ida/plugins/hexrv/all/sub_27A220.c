__int64 __fastcall sub_27A220(_QWORD *a1, __int64 a2, _QWORD *a3, char *a4)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  char v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  int tinfo_size; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx

  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0x11:
      if ( !(unsigned __int8)sub_27A220(a1, *(_QWORD *)(a2 + 24), a3)
        || *a4
        || !(unsigned __int8)sub_27A220(a1, *(_QWORD *)(a2 + 32), a3) )
      {
        return 0;
      }
      return (unsigned __int8)*a4 ^ 1u;
    case 0x12:
      if ( !(unsigned __int8)sub_27A220(a1, *(_QWORD *)(a2 + 24), a3)
        || !*a4
        || !(unsigned __int8)sub_27A220(a1, *(_QWORD *)(a2 + 32), a3) )
      {
        return 0;
      }
      return (unsigned __int8)*a4;
    case 0x16:
      v10 = 0;
      goto LABEL_26;
    case 0x17:
      v10 = 1;
LABEL_26:
      v17 = *(_QWORD *)(a2 + 24);
      v8 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v17 + 8) == 61 )
        goto LABEL_29;
      if ( *(_DWORD *)(v8 + 8) != 61 )
        return 0;
      v8 = *(_QWORD *)(a2 + 24);
      v17 = *(_QWORD *)(a2 + 32);
LABEL_29:
      v9 = **(_QWORD **)(v17 + 24);
      if ( !a1[11] )
        a1[11] = v17;
LABEL_5:
      v11 = a1[10];
      if ( !v11 )
      {
        if ( (unsigned int)(*(_DWORD *)(v8 + 8) - 55) <= 1 )
        {
          a1[9] = v8;
          v8 = *(_QWORD *)(v8 + 24);
        }
        if ( !(unsigned __int8)sub_251990(v8) )
        {
          tinfo_size = get_tinfo_size();
          if ( sub_1185C0(tinfo_size) )
          {
            a1[10] = v8;
            goto LABEL_7;
          }
        }
        return 0;
      }
      if ( sub_254EA0(v11, v8) )
        return 0;
LABEL_7:
      v12 = a3[5];
      v13 = a3[4];
      v14 = 0;
      v15 = 0;
      if ( v12 )
      {
        do
        {
          if ( *(_QWORD *)(v13 + 8 * v15) == v9 )
            return 0;
          v15 = ++v14;
        }
        while ( v14 < v12 );
        v19 = v12 + 1;
      }
      else
      {
        v19 = 1;
      }
      if ( a3[6] < v19 )
      {
        v18 = qvector_reserve();
        v12 = a3[5];
        a3[4] = v18;
        v13 = v18;
      }
      *(_QWORD *)(v13 + 8 * v12) = v9;
      ++a3[5];
      *a4 = v10;
      return 1;
    case 0x31:
      v8 = *(_QWORD *)(a2 + 24);
      v9 = 0;
      v10 = 0;
      goto LABEL_5;
    default:
      return 0;
  }
}

